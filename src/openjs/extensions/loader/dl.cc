/* openjs Extensions -- Loader
 * $Id: loader.cc 10463 2009-12-31 18:00:16Z jheusala $
 */

/** Open dynamic library */
v8::Handle<v8::Value> v8_dlopen(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_dlopen", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		v8::Handle<v8::Value> v_ret;
		std::string file = openjs::convert<std::string>(args[0]);
		int flag = args[1]->Int32Value();
		void* lib = dlopen(file.c_str(), flag);
		if (!lib) throw RUNTIME_ERROR(dlerror());
		try {
			v_ret = openjs::ptr_to_v8((int_pointer_type)lib, "void*");
		} catch(...) {
			dlclose(lib);
			throw;
		}
		return handle_scope.Close( v_ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Close dynamic library */
v8::Handle<v8::Value> v8_dlclose(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_dlclose", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		void* lib = (void*)openjs::ptr_from_v8(args[0], "void*");
		int ret = dlclose(lib);
		v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
		return handle_scope.Close( v_ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* EOF */
