/* basicjsxmlpp -- jsxmlpp support -- OpenJS Extension
 * $Id: jsxmlpp.cc 7615 2009-04-17 15:58:06Z jheusala $
 * $Date: 2009-04-17 18:58:06 +0300 (Fri, 17 Apr 2009) $
 */

#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/convert.h"            // for openjs::convert
#include "../../core/v8_util.h"            // for openjs::unwrap
#include "../../core/pointer_helpers.h"    // for openjs::ptr_to_v8 etc
#include "../../core/log.h"                // for SENDANOR_LOG_JS_EXCEPTION

#include "../basicsys/basicsys.h"         // for get_internal_pointer_ostream

#include "sendanor/logger.h"             // for SENDANOR_LOGGER_FUNCTION
//#include <sendanor/time.h>               // for sendanor::strftime
//#include <glibmm/ustring.h>              // for Glib::ustring
//#include <sendanor/exception.h>          // for sendanor::exception
//#include <vector>                        // for std::vector
//#include <sendanor/exec.h>               // for sendanor::exec
//#include <soci/soci.h>                   // for SOCI
//#include <glibmm/ustring.h>              // for Glib::ustring
//#include <glibmm/exception.h>            // for Glib::Exception

#include "jsxmlpp/jsxmlpp.h"                         // for jsxmlpp::*

#include "basicjsxmlpp.h"                         // for openjs::extensions::basicjsxmlpp::*

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::basicjsxmlpp );

std::string openjs::extensions::basicjsxmlpp::name() const { return "basicjsxmlpp"; }
std::string openjs::extensions::basicjsxmlpp::version() const { return "0.0.20100425"; }

/* Process object constructor */
v8::Handle<v8::Value> do_v8_jsxmlpp_constructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_jsxmlpp_constructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		
		// Parse query string
		const std::string command = openjs::convert<std::string>(args[0]);
		SENDANOR_LOGGER_DEBUG("command=`" << command << "'" );
		
		jsxmlpp::process* mod = new jsxmlpp::process(command);
		if(!mod) throw RUNTIME_ERROR("!mod");
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)mod, "jsxmlpp::process*");
		return handle_scope.Close(v_ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* Process object start */
v8::Handle<v8::Value> do_v8_jsxmlpp_start(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_jsxmlpp_start", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		jsxmlpp::process* mod = (jsxmlpp::process*)openjs::ptr_from_v8(args[0], "jsxmlpp::process*");
		if(!mod) throw RUNTIME_ERROR("!mod");
		mod->start();
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* Our callback */
std::string run_code(const std::string& code) {
	SENDANOR_LOGGER_FUNCTION("run_code", "code='" << code << "'");

	// Create a string containing the JavaScript source code.
	SENDANOR_LOGGER_DEBUG("1");
	v8::Handle<v8::String> source = openjs::convert<v8::Handle<v8::Value> >(code)->ToString();
	
	// Create origin
	SENDANOR_LOGGER_DEBUG("2");
	v8::ScriptOrigin origin( v8::String::New("jsxmlpp"), v8::Integer::New(0), v8::Integer::New(0) );
	
	// Compile
	SENDANOR_LOGGER_DEBUG("3");
	v8::TryCatch try_catch;
	v8::Handle<v8::Script> script = v8::Script::Compile(source, &origin);
	
	// Check compile errors
	if(script.IsEmpty()) {
		SENDANOR_LOGGER_DEBUG("3.1");
		v8::Handle<v8::Value> e = try_catch.Exception();
		SENDANOR_LOGGER_DEBUG("3.2");
		const Glib::ustring str = openjs::convert<Glib::ustring>(e);
		SENDANOR_LOGGER_DEBUG("3.3");
		SENDANOR_LOG_JS_EXCEPTION(try_catch);
		return "";
	}
	
	
	SENDANOR_LOGGER_DEBUG("4");
	v8::Handle<v8::Value> result = script->Run();
	
	// Check runtime errors
	if(result.IsEmpty()) {
		SENDANOR_LOGGER_DEBUG("5");
		v8::Handle<v8::Value> e = try_catch.Exception();
		SENDANOR_LOGGER_DEBUG("6");
		const Glib::ustring str = openjs::convert<Glib::ustring>(e);
		SENDANOR_LOGGER_DEBUG("7");
		SENDANOR_LOG_JS_EXCEPTION(try_catch);
		return "";
	}
	
	SENDANOR_LOGGER_DEBUG("8");
	const std::string result_str = openjs::convert<std::string>(result);
	SENDANOR_LOGGER_DEBUG("9");
	return result_str;
}

/* Process object stop */
v8::Handle<v8::Value> do_v8_jsxmlpp_run(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_jsxmlpp_run", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		jsxmlpp::process* mod = (jsxmlpp::process*)openjs::ptr_from_v8(args[0], "jsxmlpp::process*");
		if(!mod) throw RUNTIME_ERROR("!mod");
		
		std::ostream* output = openjs::get_internal_pointer_ostream(args[1]);
		if(!output) throw RUNTIME_ERROR("!output");
		const std::string file = openjs::convert<std::string>(args[2]);
		//jsxmlpp::get_data_callback* call = (jsxmlpp::get_data_callback*)openjs::ptr_from_v8(args[3], "jsxmlpp::get_data_callback*");
		//if(!call) throw RUNTIME_ERROR("!call");
		mod->run(*output, file, run_code);
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* Process object stop */
v8::Handle<v8::Value> do_v8_jsxmlpp_stop(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_jsxmlpp_stop", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		jsxmlpp::process* mod = (jsxmlpp::process*)openjs::ptr_from_v8(args[0], "jsxmlpp::process*");
		if(!mod) throw RUNTIME_ERROR("!mod");
		mod->stop();
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* is_running */
v8::Handle<v8::Value> do_v8_jsxmlpp_is_running(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_jsxmlpp_is_running", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		jsxmlpp::process* mod = (jsxmlpp::process*)openjs::ptr_from_v8(args[0], "jsxmlpp::process*");
		if(!mod) throw RUNTIME_ERROR("!mod");
		const bool ret = mod->is_running();
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* Process object stop */
v8::Handle<v8::Value> do_v8_jsxmlpp_write_errors(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_jsxmlpp_write_errors", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		jsxmlpp::process* mod = (jsxmlpp::process*)openjs::ptr_from_v8(args[0], "jsxmlpp::process*");
		if(!mod) throw RUNTIME_ERROR("!mod");
		std::ostream* output = openjs::get_internal_pointer_ostream(args[1]);
		if(!output) throw RUNTIME_ERROR("!output");
		mod->write_errors(*output);
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Constructor */
openjs::extensions::basicjsxmlpp::basicjsxmlpp(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("basicjsxmlpp", "");
}

/* Module initializer */
void openjs::extensions::basicjsxmlpp::init(openjs::core::extension_context& a_context) {

	SENDANOR_LOGGER_FUNCTION("init", "");
	v8::HandleScope handle_scope;
	
	static v8::Persistent<v8::FunctionTemplate> m_function_template;
	static v8::Persistent<v8::ObjectTemplate> m_template;
	static v8::Persistent<v8::Object> m_obj;
		
	//do_init_template();
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	//m_template->SetInternalFieldCount(3); // for ostream pointer
	m_template->Set(v8::String::New("constructor"), v8::FunctionTemplate::New(do_v8_jsxmlpp_constructor) );
	m_template->Set(v8::String::New("start"), v8::FunctionTemplate::New(do_v8_jsxmlpp_start) );
	m_template->Set(v8::String::New("run"), v8::FunctionTemplate::New(do_v8_jsxmlpp_run) );
	m_template->Set(v8::String::New("writeErrors"), v8::FunctionTemplate::New(do_v8_jsxmlpp_write_errors) );
	m_template->Set(v8::String::New("stop"), v8::FunctionTemplate::New(do_v8_jsxmlpp_stop) );
	m_template->Set(v8::String::New("isRunning"), v8::FunctionTemplate::New(do_v8_jsxmlpp_is_running) );
	
	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	a_context.m_v8_context->Global()->Set(v8::String::New("basicjsxmlpp"), m_obj );

}

/* EOF */
