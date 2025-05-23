#include <microhttpd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "lean/lean.h"
#include "objects.hpp"
#include <time.h>
#include <pthread.h>
#include "argon2.h"
#include "unordered_dense.h"
#include <random>

#define GET 	0
#define POST 	1

#define POSTBUFFERSIZE 512
#define MAXLOGINSIZE 20
#define MAXPASSWORDSIZE 40
#define HASHSIZE 32
#define SESSIONSIZE 32


static dcon::data_container state {};
static ankerl::unordered_dense::map<std::string, dcon::user_id> session_to_user {};

dcon::user_id find_user_by_login(char * login) {	
	dcon::user_id existing_user{};
	state.for_each_user([&](dcon::user_id uid){
		bool equal = true;
		for (size_t i = 0; i < MAXLOGINSIZE; i++) {
			char candidate = state.user_get_login(uid, i);
			char sample = login[i];
			if (candidate!=sample) {
				equal = false;
			}
		}
		if (equal){
			existing_user = uid;
		}
	});

	return existing_user;
}

std::string generate_session(dcon::user_id uid) {
	std::random_device r;
	std::seed_seq seed2{r(), r(), r(), r(), r(), r(), r(), r()};
	std::mt19937 engine(seed2);
	std::uniform_int_distribution<> dist(
		0, 25
	);
	
	std::string session_string {};
	for(int i = 0; i < SESSIONSIZE; i++) {
		state.user_set_session(uid, i, (int8_t)'A' + dist(engine));
		session_string += (char) state.user_get_session(uid, i);
	}

	session_to_user[session_string] = uid;

	return session_string;
}

bool compare_session(dcon::user_id uid, const uint8_t session[SESSIONSIZE]) {
	for(int i = 0; i < SESSIONSIZE; i++) {
		if (state.user_get_session(uid, i) != session[i])
			return false;
	}
	return true;
}

bool compare_hash(dcon::user_id user, uint8_t hash[HASHSIZE]) {
	bool equal = true;
	for (size_t i = 0; i < HASHSIZE; i++) {
		char candidate = state.user_get_password_hash(user, i);
		char sample = hash[i];
		if (sample != candidate) {
			equal = false;
		}		
	}
	return equal;
}

dcon::user_id create_user(char * login, uint8_t hash[HASHSIZE]) {
	// we assume that the following operations are safe
	
	auto user = state.create_user();
	for (size_t i = 0; i < MAXLOGINSIZE; i++) {
		state.user_set_login(user, i, login[i]);
	}

	for (size_t i = 0; i < HASHSIZE; i++) {
		state.user_set_password_hash(user, i, hash[i]);
	}

	return user;
}

int64_t get_file_size(const char * filename) {
	FILE *file;

	file = fopen(filename, "rb");
	if (file) {
		int64_t size;

		if ((0 != fseek(file, 0, SEEK_END)) || (-1 == (size = ftell(file))))
			size = 0;

		fclose(file);

		return size;
	}

	return 0;
}

std::string load_file(const char * filename) {
	FILE *file;
	char * buffer;
	int64_t size;

	size = get_file_size(filename);

	file = fopen(filename, "rb");

	if(!file)
		return NULL;

	buffer = (char *)malloc(size);
	if(!buffer) {
		fclose(file);
		return NULL;
	}

	//buffer[size] = '\0';

	if (size != (int64_t) fread(buffer, 1, size, file)) {
		free(buffer);
		buffer = NULL;
	}

	fclose(file);
	return buffer;
}

static std::string salt_string = load_file("../SALT");
static std::string static_prefix = "../static";
static std::string login_page = load_file("../static/login-page.html");
static std::string game_page = load_file("../static/game.html");
static std::string create_character_page = load_file("../static/create-character.html");
static std::string main_css_file = load_file("../static/main.css");
static std::string error_page = "<html><body>Internal Server Error</body></html>";
static std::string bad_login_page = "<html><body>Login should be a non-empty line of length lower than 20 and contain only alphanumeric characters.</body></html>";
static std::string bad_password_page = "<html><body>Password should be a non-empty line of length lower than 30 and contain only print (according to C) characters.</body></html>";
static std::string wrong_login_or_password_page = "<html><body>Wrong login or password.</body></html>";

MHD_Result print_key(
	void * cls,
	enum MHD_ValueKind kind,
	const char * key,
	const char * value
) {
	printf("%s: %s\n", key, value);
	return MHD_YES;
}

struct connection_info {
	int connection_type;

	char * password;
	char * login;

	bool bad_symbols_in_login;
	bool bad_login_length;
	bool bad_password_length;
	bool bad_symbols_in_password;
	bool server_error;

	struct MHD_PostProcessor * postprocessor;
};

static MHD_Result iterate_post (
	void * coninfo_cls,
	enum MHD_ValueKind kind,
	const char * key,
	const char * filename,
	const char * content_type,
	const char * transfer_encoding,
	const char * data,
	uint64_t off,
	size_t size
) {
	struct connection_info * con_info = (struct connection_info *) coninfo_cls;
	
	if (0 == strcmp(key, "login")){

		// validate login:
		// we need login to be short
		// and contain only isalnum symbols

		if (size == 0 || size > MAXLOGINSIZE) {
			con_info->login = NULL;
			con_info->bad_login_length = true;
			return MHD_NO;
		}

		for (size_t i = 0; i < size; i++) {
			if (!isalnum(data[i])) {
				con_info->login = NULL;
				con_info->bad_symbols_in_login = true;
				return MHD_NO;
			}
		}

		// reserve some space
		char * login;
		login = (char *)calloc(MAXLOGINSIZE, 1);
		if (!login) {
			con_info->server_error = true;
			return MHD_NO;
		}

		// put data to struct
		snprintf(login, MAXLOGINSIZE, "%s", data);
		con_info->login = login;
	} else if (0 == strcmp(key, "password")) {
		// validate password
		
		if (size == 0 || size > MAXPASSWORDSIZE) {
			con_info->password = NULL;
			con_info->bad_password_length = true;
			return MHD_NO;
		}

		for (size_t i = 0; i < size; i++) {
			if (!isprint(data[i])) {
				con_info->password = NULL;
				con_info->bad_symbols_in_password = true;
				return MHD_NO;
			}
		}

		char * password;
		password = (char *)calloc(MAXPASSWORDSIZE, 1);
		if (!password) {
			con_info->server_error = true;
			return MHD_NO;
		}

		snprintf(password, MAXPASSWORDSIZE, "%s", data);
		con_info->password = password;
	}

	return MHD_YES;
}

void request_completed(
	void *cls,
	struct MHD_Connection * connection,
	void ** con_cls,
	enum MHD_RequestTerminationCode toe
) {
	struct connection_info * con_info = (struct connection_info *)(*con_cls);
	if (NULL == con_info) return;
	if (con_info->connection_type == POST) {
		MHD_destroy_post_processor(con_info->postprocessor);
		if (con_info->login) {
			free(con_info->login);
		}
		if (con_info->password) {
			free(con_info->password);
		}
	}

	free(con_info);
	*con_cls = NULL;
}

static MHD_Result serve_page (
	struct MHD_Connection * connection,
	const std::string page,
	int status_code
) {
	MHD_Result return_value;

	struct MHD_Response *response;

	response = MHD_create_response_from_buffer(
		page.size(),
		(void*)(page.c_str()),
		MHD_RESPMEM_MUST_COPY
	);

	if (!response){
		return MHD_NO;
	}

	return_value = MHD_queue_response(connection, status_code, response);

	return return_value;
}



static MHD_Result serve_page_and_set_cookie (
	struct MHD_Connection * connection,
	const std::string page,
	int status_code, char* cookie
) {
	MHD_Result return_value;

	struct MHD_Response *response;

	response = MHD_create_response_from_buffer(
		page.size(),
		(void*)(page.c_str()),
		MHD_RESPMEM_MUST_COPY
	);

	if (!response){
		return MHD_NO;
	}


	MHD_add_response_header(
		response,
		MHD_HTTP_HEADER_SET_COOKIE,
		cookie
	);

	return_value = MHD_queue_response(connection, status_code, response);
	return return_value;
}

static enum MHD_Result answer_to_connection(
	void * cls,
	struct MHD_Connection * connection,
	const char * url,
	const char * method,
	const char * version,
	const char * upload_data,
	size_t * upload_data_size,
	void ** con_cls
) {
	if(NULL == *con_cls){
		struct connection_info * con_info;
		con_info = (struct connection_info *) malloc(sizeof (struct connection_info));

		if (NULL == con_info) return MHD_NO;
		con_info->login = NULL;
		con_info->password = NULL;

		if (0 == strcmp(method, "POST")) {
			con_info->postprocessor = MHD_create_post_processor(
				connection,
				POSTBUFFERSIZE,
				iterate_post,
				(void*) con_info
			);

			if (con_info->postprocessor == NULL) {
				free(con_info);
				return MHD_NO;
			}

			con_info->connection_type = POST;
		} else {
			con_info->connection_type = GET;
		}

		*con_cls = (void*) con_info;
		return MHD_YES;
	}

	struct MHD_Response * response;

	// log data if needed
	//printf("New request\n Method: %s\n URL: %s\n Version: %s\n", method, url, version);
	//MHD_get_connection_values(connection, MHD_HEADER_KIND, &print_key, NULL);
	
	auto return_code = MHD_HTTP_OK;

	// here we want to retrieve user if possible,
	// to automatically "login" them

	dcon::user_id current_user{};
	const char * session;

	session = MHD_lookup_connection_value(
		connection,
		MHD_COOKIE_KIND,
		"SESSION"
	);
	
	if (session) {
		std::string session_string = session;
		auto iterator = session_to_user.find(session_string);
		if (iterator != session_to_user.end()){
			current_user = iterator->second;
		}
	}	

	if (0 == strcmp(method, "GET")) {
		if (0 != *upload_data_size) {
			return MHD_NO;
		}
		*con_cls = NULL;
		if (0 == strcmp(url, "/")) {
			if (current_user) {
				return serve_page(
					connection, 
					create_character_page, 
					MHD_HTTP_OK
				);
			}
			return serve_page(connection, login_page, MHD_HTTP_OK);
		} else if (0 == strcmp(url, "/css")) {
			response = MHD_create_response_from_buffer (
				main_css_file.size(),
				(void*) main_css_file.c_str(),
				MHD_RESPMEM_PERSISTENT
			);
			
			return MHD_queue_response(
				connection, 
				MHD_HTTP_OK, 
				response
			);
		} else if (0 == strncmp(url, "/img/", 5)) {
			auto fd = open((static_prefix + url).c_str(), O_RDONLY);

			bool failed = false;
			struct stat sbuf;

			if (fd == -1) {
				failed = true;
			}

			if (!failed && 0 != fstat(fd, &sbuf)) {
				failed = true;
			}
			
			if (failed) {
				response = MHD_create_response_from_buffer(
					error_page.size(),
					(void*) error_page.c_str(),
					MHD_RESPMEM_PERSISTENT
				);
				if (!response) return MHD_NO;
				return_code = MHD_HTTP_INTERNAL_SERVER_ERROR;
				return serve_page(connection, error_page, return_code);
			} else {
				response = MHD_create_response_from_fd_at_offset64(
					sbuf.st_size, fd, 0
				);
				MHD_add_response_header(
						response, "Content-Type", "IMAGE/PNG"
				);
			}

			return MHD_queue_response(connection, MHD_HTTP_OK, response);
		} else {
			return MHD_NO;
		}
	} else if (0 == strcmp(method, "POST")) {
		struct connection_info * con_info = (struct connection_info *) *con_cls;

		if (*upload_data_size != 0) {
			MHD_post_process(
				con_info->postprocessor,
				upload_data,
				* upload_data_size
			);
			*upload_data_size = 0;

			return MHD_YES;
		} else if (NULL == con_info->login) {
			return serve_page(connection, bad_login_page, MHD_HTTP_OK);
		} else if (NULL == con_info->password) {
			return serve_page(connection, bad_password_page, MHD_HTTP_OK);
		} else {
			// both password and login are sound
			// so we can login/register user
			// and generate session for them

			auto candidate = find_user_by_login(con_info->login);
			printf("%d\n", candidate.value);			
			uint8_t hash[HASHSIZE];


			argon2i_hash_raw(
				2, 1 << 8, 1, 
				con_info->password, MAXPASSWORDSIZE, 
				salt_string.c_str(), salt_string.size(),
				hash, HASHSIZE
			);


			if (candidate) {
				if (!compare_hash(candidate, hash)) {
					printf("FAILED\n");
					return serve_page(
						connection, 
						wrong_login_or_password_page, 
						MHD_HTTP_OK
					);		
				}
			}

			if (!candidate) {
				candidate = create_user(con_info->login, hash);
			}
			auto session = generate_session(candidate);
			char key_value[SESSIONSIZE+16];
			snprintf(
				key_value, sizeof(key_value),
				"%s=%s",
				"SESSION",
				session.c_str()
			);
			printf(key_value);
			
			return serve_page_and_set_cookie(
				connection, create_character_page, MHD_HTTP_OK,
				key_value
			);
		}
	}

	return serve_page(connection, error_page, MHD_HTTP_BAD_REQUEST);
}

extern "C" LEAN_EXPORT uint32_t increase_c_counter(uint32_t t) {
    auto new_user = state.create_user();
    return new_user.index();
}

extern "C" int bootstrap_lean();
extern "C" uint32_t create_user();

struct game_loop_argument {
	float random_value = 0.f;
};


void * game_loop(void * args) {
	int64_t game_step = 0;
	while (true) {
		game_step++;
		timespec sleep_duration = {
			0, 10000
		};

		auto res = nanosleep(&sleep_duration, NULL);

		//if (game_step % 10000 == 0) {
		//	printf("step %d\n", game_step);
		//}

		if (res != 0) {
			break;
		}
	}

	return 0;
}

int main(
	int argc,
	char ** argv
) {
	// establish state
	state.user_resize_password_hash(HASHSIZE);
	state.user_resize_login(MAXLOGINSIZE);
	state.user_resize_session(SESSIONSIZE);

	bootstrap_lean();
	printf("LEAN4 STARTED\n");

	pthread_t game_loop_thread;
	game_loop_argument loop_args {};
	
	pthread_attr_t game_loop_attribute;
	{
		auto res = pthread_attr_init(&game_loop_attribute);
		if (res != 0) {
			printf("UNABLE TO INIT ATTRIBUTE, ERROR CODE: %d\n", res);
			return 1;
		}
	}

	{
		auto res = pthread_attr_setdetachstate(
			&game_loop_attribute, 
			PTHREAD_CREATE_DETACHED
		);
		if (res != 0) {
			printf("UNABLE TO SET DETACHED ATTRIBUTE, ERROR CODE: %d\n", res);
			return 1;
		}
	}

	pthread_create(
		& game_loop_thread, 
		& game_loop_attribute, 
		game_loop, 
		(void *) & loop_args
	);


	//uint32_t user1 = create_user();
	//uint32_t user2 = create_user();

	//printf("USER1: %d\n", user1);
	//printf("USER2: %d\n", user2);

	struct MHD_Daemon * d;
	if (argc != 2) {
		printf(
			"%s PORT\n",
			argv[0]
		);
    		return 1;
	}
	
	auto login_page = 

	d = MHD_start_daemon(
		MHD_USE_THREAD_PER_CONNECTION,
		atoi(argv[1]),
		NULL,
		NULL,
		& answer_to_connection,
		NULL,
		MHD_OPTION_NOTIFY_COMPLETED,
		&request_completed,
		NULL,
		MHD_OPTION_END
  	);
	if (d == NULL)
		return 1;
	
	(void) getc (stdin);
	
	MHD_stop_daemon(d);
	return 0;
}
