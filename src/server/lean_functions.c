#include "lean/lean.h"

extern "C" uint32_t create_user();
extern "C" void lean_initialize_runtime_module();
extern "C" void lean_initialize();
extern "C" void lean_io_mark_end_initialization();
extern "C" lean_object * initialize_Game(uint8_t builtin, lean_object *);

extern "C" int bootstrap_lean() {
	lean_initialize_runtime_module();
	lean_object * res;
	uint8_t builtin = 1;
	res = initialize_Game(builtin, lean_io_mk_world());
	if(lean_io_result_is_ok(res)) {
		lean_dec_ref(res);
	} else {
		lean_io_result_show_error(res);
		lean_dec(res);
		return 1;
	}
	lean_io_mark_end_initialization();
	return 0;
}

extern LEAN_EXPORT uint32_t increase_c_counter(uint32_t);

//int main() {
//	bootstrap_lean();
//}
