/* openjs basicfilesystem Extensions
 * $Id: basicfilesystem.cc 10129 2009-11-17 11:25:34Z jheusala $
 */

#include "../../core/convert.h"            // for openjs::convert
#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/v8_util.h"            // for openjs::unwrap
#include "../../core/pointer_helpers.h"    // for openjs::ptr_to_v8 etc
#include "../../core/log.h"                // for SENDANOR_LOG_JS_EXCEPTION
#include <sendanor/logger.h>               // for SENDANOR_LOGGER_FUNCTION
#include <glibmm/ustring.h>                // for Glib::ustring
#include <sendanor/exception.h>            // for sendanor::exception
#include <vector>                          // for std::vector
#include <boost/filesystem.hpp>            // for boost::filesystem
#include <boost/filesystem/fstream.hpp>    // for boost::filesystem::ifstream
namespace fs = boost::filesystem;
#include <algorithm>                       // for std::fill
#include "basicfilesystem.h"               // for openjs::extensions::basicfilesystem::*
#include "../basicstream/basicstream_v8.h"                      // for openjs::extensions::do_*
#include <sys/stat.h>                      // for chmod

/* Register this module */
OPENJS_REGISTER_EXTENSION(openjs::extensions::basicfilesystem );


/* Non portable or other special functions */


/* V8 wrapper for close function */
v8::Handle<v8::Value> do_v8_fs_close(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_close", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		
		v8::Handle<v8::Object> pointer_obj = v8::Handle<v8::Object>::Cast(internal_obj->Get(v8::String::New("pointer")));
		if(!pointer_obj->Has(v8::String::New("type"))) throw RUNTIME_ERROR("!pointer_obj.Has('type')");
		std::string type = openjs::convert<std::string>( pointer_obj->Get(v8::String::New("type")) );
		
		if(type == "std::iostream*") {
			std::fstream* file = (std::fstream*)openjs::ptr_from_v8(pointer_obj, "std::iostream*");
			{
				v8::Unlocker unlocker;
				file->close();
			}
			internal_obj->Delete(v8::String::New("pointer"));
			delete file;
		} else if(type == "std::istream*") {
			std::ifstream* ifile = (std::ifstream*)openjs::ptr_from_v8(pointer_obj, "std::istream*");
			{
				v8::Unlocker unlocker;
				ifile->close();
			}
			internal_obj->Delete(v8::String::New("pointer"));
			delete ifile;
		} else if(type == "std::ostream*") {
			std::ofstream* ofile = (std::ofstream*)openjs::ptr_from_v8(pointer_obj, "std::ostream*");
			{
				v8::Unlocker unlocker;
				ofile->close();
			}
			internal_obj->Delete(v8::String::New("pointer"));
			delete ofile;
		} else {
			throw RUNTIME_ERROR(std::string("unknown pointer type: ") + type);
		}
		
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/* V8 filesystem stream init function
 */
v8::Handle<v8::Value> do_v8_filesystem_stream_init(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_filesystem_stream_init", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		// Argument 1 -- stream
		v8::Handle<v8::Object> obj = v8::Handle<v8::Object>::Cast(args[0]);
		if(obj.IsEmpty()) throw RUNTIME_ERROR("obj is empty");
		
		// Argument 2 -- build_args
		v8::Handle<v8::Object> build_args = v8::Handle<v8::Object>::Cast(args[1]);
		if(build_args.IsEmpty()) throw RUNTIME_ERROR("build_args is empty");
		
		// 
		const Glib::ustring mode = openjs::convert<Glib::ustring>(obj->Get(v8::String::New("mode")));
		SENDANOR_LOGGER_DEBUG( "mode=`" << mode );
		
		const bool mode_r = mode.find_first_of("r")!=Glib::ustring::npos;
		const bool mode_w = mode.find_first_of("w")!=Glib::ustring::npos;
		SENDANOR_LOGGER_DEBUG( "mode_r=" << mode_r << ", mode_w=" << mode_w );
		
		const std::string file = openjs::convert<std::string>(build_args->Get(v8::String::New("filename")));
		SENDANOR_LOGGER_DEBUG( "file=" << file );
		
		if(mode_r && mode_w) {
			//sios = new fs::fstream(file);
			std::iostream* sio;
			{
				v8::Unlocker unlocker;
				sio = new fs::fstream(file);
				if(!sio) throw RUNTIME_ERROR("!sio");
			}
			obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_iostream_internal(sio) );
		} else if(mode_r) {
			//sios = new fs::ifstream(file);
			std::istream* sin;
			{
				v8::Unlocker unlocker;
				sin = new fs::ifstream(file);
				if(!sin) throw RUNTIME_ERROR("!sin");
			}
			obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_istream_internal(sin) );
		} else if(mode_w) {
			//sios = new fs::ofstream(file);
			std::ostream* sout;
			{
				v8::Unlocker unlocker;
				sout = new fs::ofstream(file);
				if(!sout) throw RUNTIME_ERROR("!sout");
			}
			obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_ostream_internal(sout) );
		} else {
			SENDANOR_LOGGER_WARNING( "file stream init used without correct mode flag (mode=`" << mode << "')" );
			return handle_scope.Close(openjs::js_throw_exception( "No correct mode setting for file stream" ));
		}
		
		obj->Set(v8::String::New("close"), v8::FunctionTemplate::New(do_v8_fs_close)->GetFunction() );
		return handle_scope.Close( v8::Undefined() );

	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* V8 chmod function implementation
 * FIXME: This is not portable.
 */
v8::Handle<v8::Value> do_v8_chmod(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_chmod", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file( openjs::convert<std::string>(args[0]) );
		SENDANOR_LOGGER_DEBUG( "file=`" << file << "'" );
		const int mode = int(args[1]->ToInteger()->Value());
		SENDANOR_LOGGER_DEBUG( "mode=`" << mode << "'" );
		int ret;
		{
			v8::Unlocker unlocker;
			ret = chmod(file.string().c_str(), mode);
		}
		return handle_scope.Close(v8::Integer::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* List files in a directory */
v8::Handle<v8::Value> do_v8_list_files(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_list_files", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path dir( openjs::convert<std::string>(args[0]) );
		
		int r = 0;
		v8::Handle<v8::Array> ret = v8::Array::New();
		
		if (fs::is_directory(dir)) {
			for (fs::directory_iterator i(dir); i!=fs::directory_iterator(); ++i) {
				std::string file = i->path().filename();
				v8::Handle<v8::Integer> ret_id = v8::Integer::New(r);
				v8::Handle<v8::Value> ret_value = openjs::convert<v8::Handle<v8::Value> >(file);
				ret->Set(ret_id, ret_value);
				r++;
			}
		}
		
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/* Predicate functions */


/* V8 wrapper for fs::exists */
v8::Handle<v8::Value> do_v8_fs_exists(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_exists", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::exists(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* */
v8::Handle<v8::Value> do_v8_fs_is_directory(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_is_directory", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::is_directory(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* */
v8::Handle<v8::Value> do_v8_fs_is_regular_file(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_is_regular_file", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::is_regular_file(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* isSymlink */
v8::Handle<v8::Value> do_v8_fs_is_symlink(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_is_symlink", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::is_symlink(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* isOther */
v8::Handle<v8::Value> do_v8_fs_is_other(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_is_other", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::is_other(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* isEmpty */
v8::Handle<v8::Value> do_v8_fs_is_empty(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_is_empty", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::is_empty(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* equivalent */
v8::Handle<v8::Value> do_v8_fs_equivalent(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_equivalent", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file_a = openjs::convert<std::string>(args[0]);
		const fs::path file_b = openjs::convert<std::string>(args[1]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::equivalent(file_a, file_b);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/* Attribute functions */


/* V8 wrapper for initial_path */
v8::Handle<v8::Value> do_v8_fs_initial_path(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_initial_path", "args[...]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = fs::initial_path();
		std::string ret_str;
		{
			v8::Unlocker unlocker;
			ret_str = file.file_string();
		}
		v8::Handle<v8::Value> ret = openjs::convert<v8::Handle<v8::Value> >(ret_str);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* V8 wrapper for current_path */
v8::Handle<v8::Value> do_v8_fs_current_path(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_current_path", "args[...]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = fs::current_path();
		std::string ret_str;
		{
			v8::Unlocker unlocker;
			ret_str = file.file_string();
		}
		v8::Handle<v8::Value> ret = openjs::convert<v8::Handle<v8::Value> >(ret_str);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* V8 wrapper for file size */
v8::Handle<v8::Value> do_v8_fs_file_size(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_file_size", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		uintmax_t ret;
		{
			v8::Unlocker unlocker;
			ret = fs::file_size(file);
		}
		return handle_scope.Close(v8::Number::New(double(ret)));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* V8 wrapper for last write time */
v8::Handle<v8::Value> do_v8_fs_last_write_time(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_last_write_time", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		std::time_t ret;
		{
			v8::Unlocker unlocker;
			ret = fs::last_write_time(file);
		}
		return handle_scope.Close(v8::Integer::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}



/* Other operations functions */


/* */
v8::Handle<v8::Value> do_v8_fs_create_directory(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_create_directory", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::create_directory(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* createHardLink */
v8::Handle<v8::Value> do_v8_fs_create_hard_link(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_create_hard_link", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file_a = openjs::convert<std::string>(args[0]);
		const fs::path file_b = openjs::convert<std::string>(args[1]);
		{
			v8::Unlocker unlocker;
			fs::create_hard_link(file_a, file_b);
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* createSymlink */
v8::Handle<v8::Value> do_v8_fs_create_symlink(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_create_symlink", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file_a = openjs::convert<std::string>(args[0]);
		const fs::path file_b = openjs::convert<std::string>(args[1]);
		{
			v8::Unlocker unlocker;
			fs::create_symlink(file_a, file_b);
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* */
v8::Handle<v8::Value> do_v8_fs_remove(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_remove", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::remove(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* removeAll */
v8::Handle<v8::Value> do_v8_fs_remove_all(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_remove_all", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		unsigned long ret;
		{
			v8::Unlocker unlocker;
			ret = fs::remove_all(file);
		}
		return handle_scope.Close(v8::Integer::NewFromUnsigned(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* rename */
v8::Handle<v8::Value> do_v8_fs_rename(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_rename", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file_a = openjs::convert<std::string>(args[0]);
		const fs::path file_b = openjs::convert<std::string>(args[1]);
		{
			v8::Unlocker unlocker;
			fs::rename(file_a, file_b);
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* copyFile */
v8::Handle<v8::Value> do_v8_fs_copy_file(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_copy_file", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file_a = openjs::convert<std::string>(args[0]);
		const fs::path file_b = openjs::convert<std::string>(args[1]);
		{
			v8::Unlocker unlocker;
			fs::copy_file(file_a, file_b);
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/* Convenience functions */


/* createDirectories */
v8::Handle<v8::Value> do_v8_fs_create_directories(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_create_directories", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = fs::create_directories(file);
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/* Class basicfilesystem */


std::string openjs::extensions::basicfilesystem::name() const { return "basicfilesystem"; }
std::string openjs::extensions::basicfilesystem::version() const { return "0.0.20100321"; }

/** Constructor */
openjs::extensions::basicfilesystem::basicfilesystem(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("basicfilesystem", "");
}

/* Module initializer */
void openjs::extensions::basicfilesystem::init(openjs::core::extension_context& a_context) {
	
	SENDANOR_LOGGER_FUNCTION("init", "");
	v8::HandleScope handle_scope;
	
	static v8::Persistent<v8::FunctionTemplate> m_function_template;
	static v8::Persistent<v8::ObjectTemplate> m_template;
	static v8::Persistent<v8::Object> m_obj;
		
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	//m_template->Set(v8::String::New("loadJS"), v8::FunctionTemplate::New(do_v8_load_js)); // Moved to Loader extension
	
	// Non portable or other special functions
	m_template->Set(v8::String::New("initStream"), v8::FunctionTemplate::New(do_v8_filesystem_stream_init));
	m_template->Set(v8::String::New("chmod"), v8::FunctionTemplate::New(do_v8_chmod));
	m_template->Set(v8::String::New("list"), v8::FunctionTemplate::New(do_v8_list_files));
	
	// Predicate functions
	m_template->Set(v8::String::New("exists"), v8::FunctionTemplate::New(do_v8_fs_exists));
	m_template->Set(v8::String::New("isRegularFile"), v8::FunctionTemplate::New(do_v8_fs_is_regular_file));
	m_template->Set(v8::String::New("isDirectory"), v8::FunctionTemplate::New(do_v8_fs_is_directory));
	m_template->Set(v8::String::New("isSymlink"), v8::FunctionTemplate::New(do_v8_fs_is_symlink));
	m_template->Set(v8::String::New("isOther"), v8::FunctionTemplate::New(do_v8_fs_is_other));
	m_template->Set(v8::String::New("isEmpty"), v8::FunctionTemplate::New(do_v8_fs_is_empty));
	m_template->Set(v8::String::New("equivalent"), v8::FunctionTemplate::New(do_v8_fs_equivalent));
	
	// Attribute functions
	m_template->Set(v8::String::New("initialPath"), v8::FunctionTemplate::New(do_v8_fs_initial_path));
	m_template->Set(v8::String::New("currentPath"), v8::FunctionTemplate::New(do_v8_fs_current_path));
	m_template->Set(v8::String::New("size"), v8::FunctionTemplate::New(do_v8_fs_file_size));
	m_template->Set(v8::String::New("lastWriteTime"), v8::FunctionTemplate::New(do_v8_fs_last_write_time));
	
	// Other operations functions
	m_template->Set(v8::String::New("createDirectory"), v8::FunctionTemplate::New(do_v8_fs_create_directory));
	m_template->Set(v8::String::New("createHardLink"), v8::FunctionTemplate::New(do_v8_fs_create_hard_link));
	m_template->Set(v8::String::New("createSymlink"), v8::FunctionTemplate::New(do_v8_fs_create_symlink));
	m_template->Set(v8::String::New("remove"), v8::FunctionTemplate::New(do_v8_fs_remove));
	m_template->Set(v8::String::New("removeAll"), v8::FunctionTemplate::New(do_v8_fs_remove_all));
	m_template->Set(v8::String::New("rename"), v8::FunctionTemplate::New(do_v8_fs_rename));
	m_template->Set(v8::String::New("copy"), v8::FunctionTemplate::New(do_v8_fs_copy_file));
	
	// Convenience functions
	m_template->Set(v8::String::New("createDirectories"), v8::FunctionTemplate::New(do_v8_fs_create_directories));
	
	// 
	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	a_context.m_v8_context->Global()->Set(v8::String::New("BasicFilesystem"), m_obj);
	
}

/* EOF */
