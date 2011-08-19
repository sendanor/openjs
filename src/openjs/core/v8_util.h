/* OPENJS -- XML Scripting Preprosessor
 * $Id: v8_util.h 10465 2009-12-31 18:18:53Z jheusala $
 */

#ifndef SENDANOR_OPENJS_CORE_V8_UTIL_H
#define SENDANOR_OPENJS_CORE_V8_UTIL_H 1

#include <v8/v8.h>                // for v8::*
#include <sendanor/logger.h>      // for SENDANOR_LOGGER_FUNCTION
#include <sendanor/exception.h>   // for RUNTIME_ERROR
#include "convert.h"              // for openjs::convert
#include <glibmm/ustring.h>       // for Glib::ustring
#include <glibmm/exception.h>     // for Glib::Exception
#include <string>

namespace openjs {
	
	/* Utility function that extracts the C++ ostream pointer from a wrapper object. */
	template<class T>
	inline T* unwrap(v8::Handle<v8::Object> obj, const int internal_field=0);
	
	/* Generic function template builder */
	template<class function_template_t>
	inline void v8_init_function_template(function_template_t& fun_template);
	
	/* Generic object template builder */
	template<class function_template_t, class object_template_t>
	inline void v8_init_object_template(function_template_t& fun_template, object_template_t& obj_template);
	
	/* Generic object builder */
	template<class function_template_t, class object_t>
	inline void v8_init_object(function_template_t& fun_template, object_t& obj);
	
	/** Create v8 exception */
	//template<class v8_exception_t>
	extern inline v8::Handle<v8::Value> js_throw_exception_ustring(const Glib::ustring& str);
	
	/** Create v8 exception */
	//template<class v8_exception_t>
	extern inline v8::Handle<v8::Value> js_throw_exception(const std::string& str);
	
	/* Exception handler */
	extern inline v8::Handle<v8::Value> cxx_to_v8_exception_handler();
}

/** Utility function that extracts the C++ ostream pointer from a wrapper object. */
template<class T>
inline T* openjs::unwrap(v8::Handle<v8::External> field) {
	SENDANOR_LOGGER_FUNCTION("unwrap", "field" );
	void* ptr = field->Value();
	return static_cast<T*>(ptr);
}

/** Utility function that extracts the C++ ostream pointer from a wrapper object. */
template<class T>
inline T* openjs::unwrap(v8::Handle<v8::Object> obj, const int internal_field=0) {
	SENDANOR_LOGGER_FUNCTION("unwrap", "obj, internal_field=" << internal_field );
	v8::Handle<v8::External> field = v8::Handle<v8::External>::Cast(obj->GetInternalField(internal_field));
	void* ptr = field->Value();
	return static_cast<T*>(ptr);
}

/** Generic function template builder */
template<class function_template_t>
inline void openjs::v8_init_function_template(function_template_t& fun_template) {
	SENDANOR_LOGGER_FUNCTION("v8_init_function_template()", "");
	//v8::HandleScope handle_scope;
	if(fun_template.IsEmpty()) {
		v8::Handle<v8::FunctionTemplate> tmp = v8::FunctionTemplate::New();
		if(tmp.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		fun_template = v8::Persistent<v8::FunctionTemplate>::New(tmp);
	}
}

/** Generic object template builder */
template<class function_template_t, class object_template_t>
inline void openjs::v8_init_object_template(function_template_t& fun_template, object_template_t& obj_template) {
	SENDANOR_LOGGER_FUNCTION("v8_init_object_template()", "");
	//v8::HandleScope handle_scope;
	if(obj_template.IsEmpty()) {
		openjs::v8_init_function_template(fun_template);
		if(fun_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		v8::Handle<v8::ObjectTemplate> tmp = fun_template->InstanceTemplate();
		obj_template = v8::Persistent<v8::ObjectTemplate>::New(tmp);
	}
}

/** Generic object builder */
template<class function_template_t, class object_t>
inline void openjs::v8_init_object(function_template_t& fun_template, object_t& obj) {
	SENDANOR_LOGGER_FUNCTION("v8_init_object", "");
	SENDANOR_LOGGER_DEBUG("1");
	if(obj.IsEmpty()) {
		SENDANOR_LOGGER_DEBUG("2");
		if(fun_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		SENDANOR_LOGGER_DEBUG("3");
		v8::Handle<v8::Object> tmp = fun_template->GetFunction()->NewInstance();
		SENDANOR_LOGGER_DEBUG("4");
		if(tmp.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		SENDANOR_LOGGER_DEBUG("5");
		obj = v8::Persistent<v8::Object>::New(tmp);
		SENDANOR_LOGGER_DEBUG("6");
		if(obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	}
}

/** Create v8 exception */
//template<class v8_exception_t>
inline v8::Handle<v8::Value> openjs::js_throw_exception_ustring(const Glib::ustring& ustr) {
	return v8::ThrowException( v8::Exception::Error(openjs::convert<v8::Handle<v8::Value> >(ustr)->ToString()) );
}

/** Create v8 exception */
//template<class v8_exception_t>
inline v8::Handle<v8::Value> openjs::js_throw_exception(const std::string& str) {
	return v8::ThrowException( v8::Exception::Error(v8::String::New(str.c_str())) );
}

/** C++ Exception to v8 catcher */
inline v8::Handle<v8::Value> openjs::cxx_to_v8_exception_handler() {
	try {
		throw;
	} catch(const Glib::Exception& e) {
		return openjs::js_throw_exception_ustring( std::string("Glib exception caught: ") + e.what());
	} catch(std::exception& e) {
		const sendanor::backtraceable* be = dynamic_cast<const sendanor::backtraceable*>(&e);
		if(be) { SENDANOR_LOGGER_INFO( be->trace() ); }
		return openjs::js_throw_exception(std::string("Exception caught: ")+e.what());
	} catch(...) {
		return openjs::js_throw_exception("Unknown exception caught.");
	}
}

#endif
/* EOF */
