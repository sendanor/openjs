/* OpenJS cURL Extension
 * Copyright 2010 Jaakko-Heikki Heusala <jhh@jhh.me>
 * $Id: ccurl.cc 10066 2009-11-13 19:56:42Z jheusala $
 */

#include "ccurl.h"                         // for openjs::ccurl::*
#include "../../core/convert.h"            // for openjs::convert
#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/v8_util.h"            // for v8_init_object_template etc
#include "../../core/pointer_helpers.h"    // for openjs::ptr_to_v8 etc
#include <sendanor/logger.h>               // for SENDANOR_LOGGER_FUNCTION
#include <curl/curl.h>

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::ccurl );

/* ccurl module settings */
std::string openjs::extensions::ccurl::name() const { return "ccurl"; }
std::string openjs::extensions::ccurl::version() const { return "0.0.20101016"; }
openjs::extensions::ccurl::ccurl(const Settings& a_settings) : extension(a_settings) { }
openjs::extensions::ccurl::~ccurl() { }

/* Pre declarations for init() */
extern v8::Handle<v8::Value> __curl_global_init(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_init(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_VERBOSE(const v8::Arguments&/* args*/);
//extern v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_POSTFIELDS(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_URL(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_USERAGENT(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_HTTPHEADER(const v8::Arguments&/* args*/);
//extern v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_WRITEFUNCTION(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_perform_post_write(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_perform_write(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_perform(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_cleanup(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_global_cleanup(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_slist_constructor(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_slist_append(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_slist_free_all(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_strerror(const v8::Arguments&/* args*/);
extern v8::Handle<v8::Value> __curl_easy_reset(const v8::Arguments&/* args*/);

/** Module initializer */
void openjs::extensions::ccurl::init(openjs::core::extension_context& a_context) {
	SENDANOR_LOGGER_FUNCTION("init", "");
	//v8::HandleScope handle_scope;
	//try {
		
		/* Data */
		static v8::Persistent<v8::FunctionTemplate> function_template;
		static v8::Persistent<v8::ObjectTemplate> object_template;
		static v8::Persistent<v8::Object> obj;
		
		if(object_template.IsEmpty()) {
			v8_init_object_template(function_template, object_template);
		}
		
		if(object_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		// Functions
		object_template->Set(v8::String::New("__curl_global_init")                 , v8::FunctionTemplate::New(__curl_global_init));
		object_template->Set(v8::String::New("__curl_easy_init")                   , v8::FunctionTemplate::New(__curl_easy_init));
		object_template->Set(v8::String::New("__curl_easy_setopt_CURLOPT_VERBOSE")         , v8::FunctionTemplate::New(__curl_easy_setopt_CURLOPT_VERBOSE));
		//object_template->Set(v8::String::New("__curl_easy_setopt_CURLOPT_POSTFIELDS")      , v8::FunctionTemplate::New(__curl_easy_setopt_CURLOPT_POSTFIELDS));
		object_template->Set(v8::String::New("__curl_easy_setopt_CURLOPT_URL")             , v8::FunctionTemplate::New(__curl_easy_setopt_CURLOPT_URL));
		object_template->Set(v8::String::New("__curl_easy_setopt_CURLOPT_USERAGENT")       , v8::FunctionTemplate::New(__curl_easy_setopt_CURLOPT_USERAGENT));
		object_template->Set(v8::String::New("__curl_easy_setopt_CURLOPT_HTTPHEADER")      , v8::FunctionTemplate::New(__curl_easy_setopt_CURLOPT_HTTPHEADER));
		//object_template->Set(v8::String::New("__curl_easy_setopt_CURLOPT_WRITEFUNCTION")   , v8::FunctionTemplate::New(__curl_easy_setopt_CURLOPT_WRITEFUNCTION));
		object_template->Set(v8::String::New("__curl_easy_perform_post_write")             , v8::FunctionTemplate::New(__curl_easy_perform_post_write));
		object_template->Set(v8::String::New("__curl_easy_perform_write")                  , v8::FunctionTemplate::New(__curl_easy_perform_write));
		object_template->Set(v8::String::New("__curl_easy_perform")                , v8::FunctionTemplate::New(__curl_easy_perform));
		object_template->Set(v8::String::New("__curl_easy_cleanup")                , v8::FunctionTemplate::New(__curl_easy_cleanup));
		object_template->Set(v8::String::New("__curl_global_cleanup")              , v8::FunctionTemplate::New(__curl_global_cleanup));
		object_template->Set(v8::String::New("__curl_slist_constructor")           , v8::FunctionTemplate::New(__curl_slist_constructor));
		object_template->Set(v8::String::New("__curl_slist_append")                , v8::FunctionTemplate::New(__curl_slist_append));
		object_template->Set(v8::String::New("__curl_slist_free_all")              , v8::FunctionTemplate::New(__curl_slist_free_all));
		object_template->Set(v8::String::New("__curl_easy_strerror")               , v8::FunctionTemplate::New(__curl_easy_strerror));
		object_template->Set(v8::String::New("__curl_easy_reset")                  , v8::FunctionTemplate::New(__curl_easy_reset));
		
		// Object
		v8_init_object(function_template, obj);
		if(obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		obj->Set(v8::String::New("CURL_GLOBAL_ALL"), v8::Integer::New(CURL_GLOBAL_ALL) );
		obj->Set(v8::String::New("CURL_GLOBAL_SSL"), v8::Integer::New(CURL_GLOBAL_SSL) );
		obj->Set(v8::String::New("CURL_GLOBAL_WIN32"), v8::Integer::New(CURL_GLOBAL_WIN32) );
		obj->Set(v8::String::New("CURL_GLOBAL_NOTHING"), v8::Integer::New(CURL_GLOBAL_NOTHING) );
		
		#include "curle.cc"
		
		a_context.m_v8_context->Global()->Set(v8::String::New("ccurl"), obj );
		
		//a_context.m_v8_context->Global()->Set(v8::String::New("getccurlRequest"), v8::FunctionTemplate::New(do_v8_ccurl_request_constructor)->GetFunction() );
		//v8::Handle<v8::Object> proto = v8::Object::Cast(a_context.v8_context->Global()->GetPrototype());
		//proto->Set(v8::String::New("accept"), v8::FunctionTemplate::New(do_v8_ccurl_accept));
	
	//} catch(...) {
	//	return openjs::cxx_to_v8_exception_handler();
	//}
}

/** Assert CURLcode is OK, otherwise throw an exception. */
inline void assert_ok(const CURLcode num) {
	if(num == CURLE_OK) return;
	const char * error = curl_easy_strerror(num);
	throw RUNTIME_ERROR(std::string(error, strlen(error)));
}

/** */
v8::Handle<v8::Value> __curl_global_init(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_global_init", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() == 0) throw RUNTIME_ERROR("no arguments");
		long flags = args[0]->ToInt32()->Value();
		CURLcode res;
		{
			v8::Unlocker unlocker;
			res = curl_global_init(flags);
		}
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_easy_init(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_init", "args[...]");
	v8::HandleScope handle_scope;
	try {
		CURL* curl;
		{
			v8::Unlocker unlocker;
			curl = curl_easy_init();
			if(!curl) throw RUNTIME_ERROR("!curl");
		}
		return handle_scope.Close( openjs::ptr_to_v8((int_pointer_type)curl, "CURL*") );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_VERBOSE(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_setopt_CURLOPT_VERBOSE", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 2) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		long value = args[1]->ToInt32()->Value();
		CURLcode res;
		{
			v8::Unlocker unlocker;
			res = curl_easy_setopt(curl, CURLOPT_VERBOSE, value );
		}
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

#if 0
/** */
v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_POSTFIELDS(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_setopt_CURLOPT_POSTFIELDS", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 2) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		std::string value = openjs::convert<std::string>(args[1]);
		long value_size = value.size();
		CURLcode res;
		{
			v8::Unlocker unlocker;
			res = curl_easy_setopt(curl, CURLOPT_POSTFIELDS, value.c_str() );
			if(res != CURLE_OK) return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
			res = curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, value_size );
		}
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}
#endif

/** */
v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_URL(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_setopt_CURLOPT_URL", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 2) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		std::string value = openjs::convert<std::string>(args[1]);
		CURLcode res;
		{
			v8::Unlocker unlocker;
			res = curl_easy_setopt(curl, CURLOPT_URL, value.c_str());
		}
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_USERAGENT(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_setopt_CURLOPT_USERAGENT", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 2) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		std::string value = openjs::convert<std::string>(args[1]);
		CURLcode res;
		{
			v8::Unlocker unlocker;
			res = curl_easy_setopt(curl, CURLOPT_USERAGENT, value.c_str());
		}
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_HTTPHEADER(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_setopt_CURLOPT_HTTPHEADER", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 2) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		struct curl_slist* headers = (struct curl_slist*)openjs::ptr_from_v8(args[1], "curl_slist*");
		CURLcode res;
		{
			v8::Unlocker unlocker;
			res = curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
		}
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

#if 0
/* .... Unimplemented part of the source code .... */

/* Callback declarations */
extern size_t callback_WRITEFUNCTION(void *buffer, size_t size, size_t nmemb, void *userp);

struct callback_data {
	v8::Persistent<v8::Context> m_context;
	v8::Persistent<v8::Object> m_obj;
	v8::Persistent<v8::Function> m_fun;
};

/** */
v8::Handle<v8::Value> __curl_easy_setopt_CURLOPT_WRITEFUNCTION(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_setopt_CURLOPT_WRITEFUNCTION", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 1) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		//fun = ;
		callback_data data;
		
		CURLcode res;
		{
			v8::Unlocker unlocker;
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callback_WRITEFUNCTION);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
		}
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
size_t callback_WRITEFUNCTION(void *buffer, size_t size, size_t nmemb, void *userp) {
	
	// Read data
	std::vector<char> v;
	const size_t realsize = size * nmemb;
	if(realsize >= 1) {
		v.resize(realsize, 0);
		memcpy(&(v[0]), buffer, realsize);
	}
	
	// Call JavaScript callback
	v8::Locker locker;
	v8::HandleScope handle_scope;
	callback_data* data = (callback_data*)userp;
	v8::Context::Scope context_scope(data->m_context);
	if(!v8::Context::InContext()) throw RUNTIME_ERROR("v8 is not in the context");
	try {
		SENDANOR_LOGGER_DEBUG("Calling data->m_fun->Call(data->m_obj, 0, NULL)...");
		int argc = 0;
		Handle<Value> argv[1];
		argv[0] = 
		m_fun->Call(data->m_obj, argc, argv);
	} catch(const Glib::Exception& e) {
		SENDANOR_LOGGER_ERROR("Exception caught: Glib: " << e.what());
	} catch(const std::exception& e) {
		SENDANOR_LOGGER_ERROR("Exception caught: " << e.what());
		const sendanor::backtraceable* be = dynamic_cast<const sendanor::backtraceable*>(&e);
		if(be) {
			SENDANOR_LOGGER_INFO( be->trace() );
		}
	} catch(...) {
		SENDANOR_LOGGER_ERROR("Unknown exception caught!");
	}
}
#endif

/* Callback to write received data from the server */
extern size_t write_data_to_vector(void *buffer, size_t size, size_t nmemb, void *userp);

/** */
v8::Handle<v8::Value> __curl_easy_perform_write(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_perform_write", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 2) throw RUNTIME_ERROR("too few arguments");
		
		if(!args[1]->IsArray()) throw RUNTIME_ERROR("second variable is not argument");
		
		std::vector<char> data;
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		v8::Handle<v8::Array> sink = v8::Handle<v8::Array>::Cast(args[1]);
		CURLcode res;
		{
			v8::Unlocker unlocker;
			res = curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data_to_vector);
			if(res != CURLE_OK) return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
			res = curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
			if(res != CURLE_OK) return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
			res = curl_easy_perform(curl);
		}
		std::string output(&(data[0]), data.size());
		v8::Handle<v8::Value> v_out = openjs::convert<v8::Handle<v8::Value> >(output);
		sink->Set(sink->Length(), v_out);
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_easy_perform_post_write(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_perform_post_write", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 3) throw RUNTIME_ERROR("too few arguments");
		
		if(!args[1]->IsArray()) throw RUNTIME_ERROR("second variable is not argument");
		
		std::vector<char> data;
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		v8::Handle<v8::Array> sink = v8::Handle<v8::Array>::Cast(args[1]);
		std::string value = openjs::convert<std::string>(args[2]);
		long value_size = value.size();
		CURLcode res;
		{
			v8::Unlocker unlocker;
			
			res = curl_easy_setopt(curl, CURLOPT_POSTFIELDS, value.c_str() );
			if(res != CURLE_OK) return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
			res = curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, value_size );
			if(res != CURLE_OK) return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
			
			res = curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data_to_vector);
			if(res != CURLE_OK) return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
			res = curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
			if(res != CURLE_OK) return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
			res = curl_easy_perform(curl);
		}
		std::string output(&(data[0]), data.size());
		v8::Handle<v8::Value> v_out = openjs::convert<v8::Handle<v8::Value> >(output);
		sink->Set(sink->Length(), v_out);
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Callback to write received data from the server */
size_t write_data_to_vector(void *buffer, size_t size, size_t nmemb, void *userp) {
    const size_t realsize = size * nmemb;
    if(realsize < 1) return 0;
    std::vector<char>* data = (std::vector<char>*)userp;
    if(!data) return 0;
    const size_t prev_total_size = data->size();
    const size_t next_total_size = prev_total_size + realsize;
    data->resize(next_total_size, 0);
    if(data->size() != next_total_size) return 0;
    memcpy(&((*data)[prev_total_size]), buffer, realsize);
    return realsize;
}

/** */
v8::Handle<v8::Value> __curl_easy_perform(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_perform", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 1) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		CURLcode res;
		{
			v8::Unlocker unlocker;
			res = curl_easy_perform(curl);
		}
		return handle_scope.Close( v8::Integer::NewFromUnsigned(res) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_easy_cleanup(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_cleanup", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 1) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		{
			v8::Unlocker unlocker;
			curl_easy_cleanup(curl);
		}
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_global_cleanup(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("__curl_global_cleanup", "args[...]");
	v8::HandleScope handle_scope;
	try {
		{
			v8::Unlocker unlocker;
			curl_global_cleanup();
		}
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_slist_constructor(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("__curl_slist_constructor", "args[...]");
	v8::HandleScope handle_scope;
	try {
		struct curl_slist* headers = NULL;
		return handle_scope.Close( openjs::ptr_to_v8((int_pointer_type)headers, "curl_slist*") );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_slist_append(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_slist_append", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 2) throw RUNTIME_ERROR("too few arguments");
		struct curl_slist* headers = (struct curl_slist*)openjs::ptr_from_v8(args[0], "curl_slist*");
		std::string value = openjs::convert<std::string>(args[1]);
		{
			v8::Unlocker unlocker;
			headers = curl_slist_append(headers, value.c_str());
		}
		return handle_scope.Close( openjs::ptr_to_v8((int_pointer_type)headers, "curl_slist*") );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_slist_free_all(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_slist_free_all", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 1) throw RUNTIME_ERROR("too few arguments");
		struct curl_slist* headers = (struct curl_slist*)openjs::ptr_from_v8(args[0], "curl_slist*");
		{
			v8::Unlocker unlocker;
			curl_slist_free_all(headers);
		}
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_easy_strerror(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_strerror", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 1) throw RUNTIME_ERROR("too few arguments");
		CURLcode errornum = static_cast<CURLcode>(args[0]->ToUint32()->Value());
		std::string ret;
		{
			v8::Unlocker unlocker;
			const char* cret = curl_easy_strerror(errornum);
			ret = std::string(cret, std::strlen(cret));
		}
		return handle_scope.Close( openjs::convert<v8::Handle<v8::Value> >(ret) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** */
v8::Handle<v8::Value> __curl_easy_reset(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("__curl_easy_reset", "args[...]");
	v8::HandleScope handle_scope;
	try {
		if(args.Length() < 1) throw RUNTIME_ERROR("too few arguments");
		CURL* curl = (CURL*)openjs::ptr_from_v8(args[0], "CURL*");
		if(!curl) throw RUNTIME_ERROR("!curl");
		{
			v8::Unlocker unlocker;
			curl_easy_reset(curl);
		}
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* EOF */
