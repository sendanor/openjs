/* openjs Extensions -- Loader
 * $Id: loader.cc 10463 2009-12-31 18:00:16Z jheusala $
 */

//#include "../../core/extension.h"          // for openjs::core::extension
//#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/convert.h"            // for openjs::convert
#include "../../core/v8_util.h"            // for openjs::unwrap
#include "../../core/pointer_helpers.h"    // for ptr_from_v8
//#include <sendanor/logger.h>             // for SENDANOR_LOGGER_FUNCTION
#include <glibmm/ustring.h>                // for Glib::ustring
//#include <sendanor/exception.h>          // for sendanor::exception
//#include <vector>                        // for std::vector
//#include <sendanor/exec.h>               // for sendanor::exec
#include "loader.h"                         // for openjs::extensions::loader::*

#include "../../core/log.h"                // for SENDANOR_LOG_JS_EXCEPTION
#include <boost/filesystem.hpp>            // for boost::filesystem
#include <boost/filesystem/fstream.hpp>    // for boost::filesystem::ifstream
namespace fs = boost::filesystem;

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::loader );

/** Load dynamic library extension */
v8::Handle<v8::Value> v8_openjs_extension_load_dl(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_openjs_extension_load_dl", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		// Arguments for action
		openjs::core::extension_context* ext_context = (openjs::core::extension_context*)openjs::ptr_from_v8(args[0], "openjs::core::extension_context*");
		Modular::ModuleRegister<openjs::core::extension>* extensions = ext_context->m_register;
		
		std::string file = openjs::convert<std::string>(args[1]);
		
		// Action
		openjs::core::LoadedExtension* mod = extensions->load(file, *(ext_context->m_config) );
		if(!mod) throw RUNTIME_ERROR("Could not load module: " + file);
		mod->module()->init(*ext_context);
		
		SENDANOR_LOGGER_INFO(file << ": Dynamic library loaded" );
		
		// Return value
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)mod
			, "openjs::core::LoadedExtension*");
		return handle_scope.Close( v_ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Get count of extensions in the registry */
/*
v8::Handle<v8::Value> v8_openjs_extension_registry_size(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_openjs_extension_registry_size", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		std::size_t ret = openjs::core::extension_registry::size();
		v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
		return handle_scope.Close( v_ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}
*/

/** Get pointer to extension from the registry by ID */
/*
v8::Handle<v8::Value> v8_openjs_extension_registry_get(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_openjs_extension_registry_get", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		std::size_t id = args[1]->Uint32Value();
		openjs::core::extension* ext_ptr = openjs::core::extension_registry::get(id);
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)ext_ptr, "extension*");
		return handle_scope.Close( v_ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}
*/

/** Init extension */
v8::Handle<v8::Value> v8_openjs_extension_init(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_openjs_extension_init", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		openjs::core::extension* ext = (openjs::core::extension*)openjs::ptr_from_v8(args[0], "openjs::core::extension*");
		openjs::core::extension_context* ext_context = (openjs::core::extension_context*)openjs::ptr_from_v8(args[1], "openjs::core::extension_context*");
		ext->init(*ext_context);
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Get extension id */
v8::Handle<v8::Value> v8_openjs_extension_id(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_openjs_extension_id", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		openjs::core::LoadedExtension* ext = (openjs::core::LoadedExtension*)openjs::ptr_from_v8(args[0]
			, "openjs::core::LoadedExtension*");
		std::size_t id = ext->id();
		v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(id);
		return handle_scope.Close( v_ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Get extension name */
v8::Handle<v8::Value> v8_openjs_extension_name(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_openjs_extension_name", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		openjs::core::LoadedExtension* ext = (openjs::core::LoadedExtension*)openjs::ptr_from_v8(args[0]
			, "openjs::core::LoadedExtension*");
		std::string name = ext->module()->name();
		v8::Handle<v8::Value> v_ret = openjs::convert<v8::Handle<v8::Value> >(name);
		return handle_scope.Close( v_ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Get extension version */
v8::Handle<v8::Value> v8_openjs_extension_version(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_openjs_extension_version", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		openjs::core::LoadedExtension* ext = (openjs::core::LoadedExtension*)openjs::ptr_from_v8(args[0]
			, "openjs::core::LoadedExtension*");
		std::string version = ext->module()->version();
		v8::Handle<v8::Value> v_ret = openjs::convert<v8::Handle<v8::Value> >(version);
		return handle_scope.Close( v_ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/** v8 read file */
v8::Handle<v8::Value> do_v8_read_dep_file(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_readfile", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		fs::ifstream input(file);
		
		v8::Handle<v8::Array> ret = v8::Array::New();
		unsigned int r = 0;
		std::string linebuf;
		while(std::getline(input, linebuf)) {
			v8::Handle<v8::Integer> id = v8::Integer::NewFromUnsigned(r);
			v8::Handle<v8::String> row = openjs::convert<v8::Handle<v8::Value> >(linebuf)->ToString();
			ret->Set(id, row);
			r++;
		}
		return handle_scope.Close( ret );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/* Calls from basicfilesystem.cc */

/** V8 wrapper for fs::exists */
v8::Handle<v8::Value> do_v8_file_exists(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_file_exists", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const fs::path file = openjs::convert<std::string>(args[0]);
		const bool ret = fs::exists(file);
		return handle_scope.Close( v8::Boolean::New(ret) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* V8 load function for JS files */
v8::Handle<v8::Value> do_v8_load_js(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fs_load_js", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		const std::string file = openjs::convert<std::string>(args[0]);
		SENDANOR_LOGGER_DEBUG(file << ": Loading source library" );
		
		const fs::path libfile(file);
		
		// Get source code
		fs::ifstream include_input(libfile);
		Glib::ustring include_source_code;
		std::string include_linebuf;
		while(std::getline(include_input, include_linebuf)) include_source_code += include_linebuf + "\n";
		//SENDANOR_LOGGER_DEBUG("source code = `" << include_source_code << "'" );
	
		// Create a string containing the JavaScript source code.
		v8::Handle<v8::String> source = openjs::convert<v8::Handle<v8::Value> >(include_source_code)->ToString();
		
		// Create origin
		v8::ScriptOrigin origin( openjs::convert<v8::Handle<v8::Value> >(libfile.string())
		    , v8::Integer::New(0), v8::Integer::New(0) );
		
		// Compile
		v8::TryCatch try_catch;
		v8::Handle<v8::Script> script = v8::Script::Compile(source, &origin);
		
		// Check errors during compilation
		if(script.IsEmpty()) {
			v8::Handle<v8::Value> e = try_catch.Exception();
			const Glib::ustring str = openjs::convert<Glib::ustring>(e);
			SENDANOR_LOG_JS_EXCEPTION(try_catch);
			return handle_scope.Close( v8::Boolean::New(false) );
		}
		
		v8::Handle<v8::Value> result = script->Run();
		
		// Check erros during execution
		if(result.IsEmpty()) {
			v8::Handle<v8::Value> e = try_catch.Exception();
			const Glib::ustring str = openjs::convert<Glib::ustring>(e);
			SENDANOR_LOG_JS_EXCEPTION(try_catch);
			return handle_scope.Close( v8::Boolean::New(false) );
		}
		
		SENDANOR_LOGGER_INFO(libfile << ": Source library loaded" );
		return handle_scope.Close( v8::Boolean::New(true) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/* Class openjs::extensions::loader */

std::string openjs::extensions::loader::name() const { return "loader"; }
std::string openjs::extensions::loader::version() const { return "0.0.20100112"; }

/** Constructor */
openjs::extensions::loader::loader(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("loader", "");
}

/* Module initializer */
void openjs::extensions::loader::init(openjs::core::extension_context& a_context) {
	
	SENDANOR_LOGGER_FUNCTION("init", "");
	v8::HandleScope handle_scope;
	
	/* Data */
	v8::Handle<v8::FunctionTemplate> m_function_template;
	v8::Handle<v8::ObjectTemplate> m_template;
	v8::Persistent<v8::Object> m_obj;
	
	//do_init_template();
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	m_template->Set(v8::String::New("read_dep_file"), v8::FunctionTemplate::New(do_v8_read_dep_file));
	m_template->Set(v8::String::New("file_exists"), v8::FunctionTemplate::New(do_v8_file_exists));
	m_template->Set(v8::String::New("load_js"), v8::FunctionTemplate::New(do_v8_load_js));
	m_template->Set(v8::String::New("extension_load_dl"), v8::FunctionTemplate::New(v8_openjs_extension_load_dl));
	//m_template->Set(v8::String::New("extension_load_js"), v8::FunctionTemplate::New(v8_openjs_extension_load_js));

	//m_template->Set(v8::String::New("dlopen"), v8::FunctionTemplate::New(v8_dlopen));
	//m_template->Set(v8::String::New("dlclose"), v8::FunctionTemplate::New(v8_dlclose));
	//m_template->Set(v8::String::New("extension_registry_size"), v8::FunctionTemplate::New(v8_openjs_extension_registry_size));
	//m_template->Set(v8::String::New("extension_registry_get"), v8::FunctionTemplate::New(v8_openjs_extension_registry_get));
	//m_template->Set(v8::String::New("extension_init"), v8::FunctionTemplate::New(v8_openjs_extension_init));
	m_template->Set(v8::String::New("extension_id"), v8::FunctionTemplate::New(v8_openjs_extension_id));
	m_template->Set(v8::String::New("extension_name"), v8::FunctionTemplate::New(v8_openjs_extension_name));
	m_template->Set(v8::String::New("extension_version"), v8::FunctionTemplate::New(v8_openjs_extension_version));
	
	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	m_obj->Set(v8::String::New("EXTENSION_PATH"),     v8::String::New(PLUGIN_PATH "/" EXTENSION_DIR) );
	m_obj->Set(v8::String::New("EXTENSION_SUFFIX"),     v8::String::New(EXTENSION_SUFFIX) );
	
	//m_obj->Set(v8::String::New("RTLD_LAZY"),      v8::Integer::New(RTLD_LAZY) );
	//m_obj->Set(v8::String::New("RTLD_NOW"),      v8::Integer::New(RTLD_NOW) );
	//m_obj->Set(v8::String::New("RTLD_GLOBAL"),   v8::Integer::New(RTLD_GLOBAL) );
	//m_obj->Set(v8::String::New("RTLD_LOCAL"),    v8::Integer::New(RTLD_LOCAL) );
	//m_obj->Set(v8::String::New("RTLD_NODELETE"), v8::Integer::New(RTLD_NODELETE) );
	//m_obj->Set(v8::String::New("RTLD_NOLOAD"),   v8::Integer::New(RTLD_NOLOAD) );
	//m_obj->Set(v8::String::New("RTLD_DEEPBIND"), v8::Integer::New(RTLD_DEEPBIND) );
	
	// Set Loader.config.libraries
	v8::Handle<v8::Object> config_obj = v8::Object::New();
	v8::Handle<v8::Array> libraries = v8::Array::New();
	openjs::configuration config = *(a_context.m_config);
	unsigned int r = 0;
	for(std::vector<std::string>::const_iterator i = config.libraries.begin(); i!=config.libraries.end(); ++i) {
		v8::Handle<v8::Integer> id = v8::Integer::NewFromUnsigned(r);
		v8::Handle<v8::String> row = openjs::convert<v8::Handle<v8::Value> >(*i)->ToString();
		libraries->Set(id, row);
		r++;
	}
	config_obj->Set(v8::String::New("libraries"), libraries);
	m_obj->Set(v8::String::New("config"), config_obj);
	
	// Set extension_context
	m_obj->Set(v8::String::New("extension_context"), openjs::ptr_to_v8((int_pointer_type)&a_context, "openjs::core::extension_context*") );
	
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	a_context.m_v8_context->Global()->Set(v8::String::New("Loader"), m_obj);
}

/* EOF */
