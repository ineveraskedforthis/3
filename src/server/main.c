#include <microhttpd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lean/lean.h"

extern uint32_t create_user();
// see https://lean-lang.org/doc/reference/latest/find/?domain=Verso.Genre.Manual.section&name=ffi-initialization
extern void lean_initialize_runtime_module();
extern void lean_initialize();
extern void lean_io_mark_end_initialization();
extern lean_object * initialize_Game(uint8_t builtin, lean_object *);



#define PAGE "<html><head><title>libmicrohttpd demo</title>"\
             "</head><body>libmicrohttpd demo</body></html>"

static enum MHD_Result ahc_echo(
	void * cls,
	struct MHD_Connection * connection,
	const char * url,
	const char * method,
	const char * version,
	const char * upload_data,
	size_t * upload_data_size,
	void ** ptr
) {
	
	static int dummy;
	const char * page = cls;
	struct MHD_Response * response;
	int ret;

	if (0 != strcmp(method, "GET"))
		return MHD_NO; /* unexpected method */

	if (&dummy != *ptr) {
	/* The first time only the headers are valid,
         do not respond in the first round... */
		*ptr = &dummy;
		return MHD_YES;
	}

	if (0 != *upload_data_size)
		return MHD_NO; /* upload data in a GET!? */
	
	*ptr = NULL; /* clear context pointer */
  	
	response = MHD_create_response_from_buffer (
		strlen(page),
		(void*) page,
  		MHD_RESPMEM_PERSISTENT
	);

	ret = MHD_queue_response(
		connection,
		MHD_HTTP_OK,
		response
	);

	MHD_destroy_response(response);
	return ret;
}

static uint32_t counter = 0;

extern LEAN_EXPORT uint32_t increase_c_counter(uint32_t) {
    counter += 1;
    return counter;
}

int main(
	int argc,
	char ** argv
) {
	lean_initialize_runtime_module();
	lean_object * res;
	// use same default as for Lean executables
	uint8_t builtin = 1;
	res = initialize_Game(builtin, lean_io_mk_world());
	
	if (lean_io_result_is_ok(res)) {
		lean_dec_ref(res);
	} else {
		lean_io_result_show_error(res);
		lean_dec(res);
		return 1;  // do not access Lean declarations if initialization failed
  	}
	
	lean_io_mark_end_initialization();

	printf("LEAN4 STARTED\n");

	uint32_t user1 = create_user();
	uint32_t user2 = create_user();

	printf("USER1: %d\n", user1);
	printf("USER2: %d\n", user2);

	struct MHD_Daemon * d;
	if (argc != 2) {
		printf(
			"%s PORT\n",
			argv[0]
		);
    		return 1;
	}
	
	d = MHD_start_daemon(
		MHD_USE_THREAD_PER_CONNECTION,
		atoi(argv[1]),
		NULL,
		NULL,
		&ahc_echo,
		PAGE,
		MHD_OPTION_END
  	);
	if (d == NULL)
		return 1;
	
	(void) getc (stdin);
	
	MHD_stop_daemon(d);
	return 0;
}
