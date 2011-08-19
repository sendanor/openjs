/* openjs-cgdome -- Gdome C API -- openjs Extension
 * $Id: mod_cgdome.cc 10131 2009-11-17 11:48:19Z jheusala $
 * $Date: 2009-11-17 13:48:19 +0200 (Tue, 17 Nov 2009) $
 */

#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/convert.h"            // for openjs::convert
#include "../../core/v8_util.h"            // for openjs::unwrap

#include <sendanor/logger.h>             // for SENDANOR_LOGGER_FUNCTION
#include <sendanor/exception.h>          // for sendanor::exception

#include "mod_cgdome.h"                     // for openjs::extensions::cgdome::*
#include "wrappers.h"
#include "cgate.h"

#include "wrappers.cc"
#include "gdome_extra.c"
#include "cgate.c"

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::cgdome );

struct call_undefined { };

/* */
v8::Local<v8::FunctionTemplate> call_template_factory(const std::string& key) {
	SENDANOR_LOGGER_FUNCTION("cgdome_call_get", "name, info" );
	SENDANOR_LOGGER_DEBUG("1");
	#include "auto-wrapper-fmap.cc"
	SENDANOR_LOGGER_DEBUG("2");
	throw call_undefined();
}

/* Get Interceptors */
v8::Handle<v8::Value> cgdome_call_get(v8::Local<v8::String> name, const v8::AccessorInfo& info) {
	SENDANOR_LOGGER_FUNCTION("cgdome_call_get", "name, info" );
	// Global function template cache
	//typedef std::map<std::string, v8::Local<v8::FunctionTemplate> > function_template_map_type;
	//function_template_map_type function_template_map;
	
	//v8::HandleScope handle_scope;
	SENDANOR_LOGGER_DEBUG("1");
	#ifdef DEBUG
	{
		v8::Handle<v8::Value> tmp = name;
		std::string key = openjs::convert<std::string>( tmp );
		SENDANOR_LOGGER_DEBUG("name = " << key);
	}
	#endif
	SENDANOR_LOGGER_DEBUG("2");
	try {
		//if(!info.Data()->IsUndefined()) return handle_scope.Close(info.Data());
		if(!info.Data()->IsUndefined()) return info.Data();
		
		//SENDANOR_LOGGER_DEBUG("5");
		//if(function_template_map.empty()) {
		//}
		
		SENDANOR_LOGGER_DEBUG("3");
		v8::Handle<v8::Value> tmpkey = name;
		SENDANOR_LOGGER_DEBUG("4");
		std::string key = openjs::convert<std::string>( tmpkey );
		SENDANOR_LOGGER_DEBUG("key=" << key);
		v8::Local<v8::FunctionTemplate> fun_temp;
		try {
			SENDANOR_LOGGER_DEBUG("5");
			fun_temp = call_template_factory(key);
		} catch(call_undefined e) {
			SENDANOR_LOGGER_DEBUG("5.1");
			return v8::Undefined();
		}
		SENDANOR_LOGGER_DEBUG("6");
		v8::Handle<v8::Function> call = fun_temp->GetFunction();
		SENDANOR_LOGGER_DEBUG("7");
		info.Holder()->ForceSet(name, call);
		SENDANOR_LOGGER_DEBUG("8");
		//return handle_scope.Close(call);
		return call;
		
	//} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
	//} catch(...) { return openjs::cxx_to_v8_exception_handler(); }
	} catch(const Glib::Exception& e) {
		SENDANOR_LOGGER_ERROR("Glib exception caught: " << e.what() );
	} catch(std::exception& e) {
		const sendanor::backtraceable* be = dynamic_cast<const sendanor::backtraceable*>(&e);
		if(be) { SENDANOR_LOGGER_INFO( be->trace() ); }
		SENDANOR_LOGGER_ERROR("Exception caught: " << e.what() );
	} catch(...) {
		SENDANOR_LOGGER_ERROR("Unknown exception caught.");
	}
	return v8::Undefined();
}

std::string openjs::extensions::cgdome::name() const { return "cgdome"; }
std::string openjs::extensions::cgdome::version() const { return "0.0.20100117"; }

/** Constructor */
openjs::extensions::cgdome::cgdome(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("cgdome", "");
}

/* Module initializer */
void openjs::extensions::cgdome::init(openjs::core::extension_context& a_context) {
	
	SENDANOR_LOGGER_FUNCTION("init", "");
	v8::HandleScope handle_scope;
	
	/* Data */
	static v8::Persistent<v8::FunctionTemplate> m_function_template;
	static v8::Persistent<v8::ObjectTemplate> m_template;
	static v8::Persistent<v8::Object> m_obj;
		
	//do_init_template();
	
	SENDANOR_LOGGER_DEBUG("1");
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	SENDANOR_LOGGER_DEBUG("2");
	//#include "auto-wrapper-fsets.cc"
	
	SENDANOR_LOGGER_DEBUG("3");
	v8_init_object(m_function_template, m_obj);
	
	SENDANOR_LOGGER_DEBUG("4");
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	SENDANOR_LOGGER_DEBUG("5");
	v8::Handle<v8::ObjectTemplate> call_obj_template = v8::ObjectTemplate::New();
	SENDANOR_LOGGER_DEBUG("6");
	call_obj_template->SetNamedPropertyHandler(cgdome_call_get);
	SENDANOR_LOGGER_DEBUG("7");
	v8::Handle<v8::Object> call_obj = call_obj_template->NewInstance();
	SENDANOR_LOGGER_DEBUG("8");
	m_obj->Set(v8::String::New("call"), call_obj);
	
	SENDANOR_LOGGER_DEBUG("9");
	#include "auto-constants-fsets.cc"
	
	SENDANOR_LOGGER_DEBUG("10");
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	SENDANOR_LOGGER_DEBUG("11");
	a_context.m_v8_context->Global()->Set(v8::String::New("CGDOME"), m_obj );
	
}

/* EOF */
