/* openjs fastcgi Extensions
 * $Id: cfcgi.cc 10066 2009-11-13 19:56:42Z jheusala $
 */

/**
 * @todo Implement FCGX_OpenSocket
 */

#include "../../core/convert.h"            // for openjs::convert
#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/v8_util.h"            // for openjs::unwrap etc
#include "../../core/pointer_helpers.h"    // for openjs::ptr_to_v8 etc
#include "cfcgi.h"                         // for openjs::fastcgi::*
#include <sendanor/logger.h>               // for SENDANOR_LOGGER_FUNCTION
#include <fcgi_config.h>            // for FCGX_Request
#include <fcgio.h>                  // for FCGX_*
#include "../basicstream/basicstream_v8.h"    // for openjs::basicsys::*
#include "streams.h"    // for openjs::out_fcgi_istream and openjs::out_fcgi_ostream

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::cfcgi );

std::string openjs::extensions::cfcgi::name() const { return "cfcgi"; }
std::string openjs::extensions::cfcgi::version() const { return "0.0.20100112"; }

/** Constructor */
openjs::extensions::cfcgi::cfcgi(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("cfcgi", "");
}

/** Destructor */
openjs::extensions::cfcgi::~cfcgi() {
	SENDANOR_LOGGER_FUNCTION("~cfcgi", "");
}

/** JavaScript callback for FCGX_IsCGI */
v8::Handle<v8::Value> do_v8_cfcgi_IsCGI(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_IsCGI", "args[...]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_IsCGI()");
		int ret = FCGX_IsCGI();
		return handle_scope.Close( v8::Integer::New(ret) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** JavaScript callback for FCGX_Init */
v8::Handle<v8::Value> do_v8_cfcgi_Init(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_Init", "args[...]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_Init()");
		int ret = FCGX_Init();
		return handle_scope.Close( v8::Integer::New(ret) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* JavaScript callback for FCGX_OpenSocket here */

/** JavaScript callback for FCGX_InitRequest(request,sock,flags) */
v8::Handle<v8::Value> do_v8_cfcgi_InitRequest(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_InitRequest", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(args[0], "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		int sock = args[1]->Int32Value();
		int flags = args[2]->Int32Value();
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_InitRequest(" << (int_pointer_type)request << ", " << sock << ", " << flags << ")");
		int ret = FCGX_InitRequest(request, sock, flags);
		return handle_scope.Close( v8::Integer::New(ret) );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** JavaScript callback for FCGX_Accept_r(request) */
v8::Handle<v8::Value> do_v8_cfcgi_Accept_r(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_Accept_r", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(args[0], "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_Accept_r(" << (int_pointer_type)request << ")");
		const int ret = FCGX_Accept_r(request);
		return handle_scope.Close( v8::Integer::New(ret) );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** JavaScript callback for FCGX_Finish_r(request) */
v8::Handle<v8::Value> do_v8_cfcgi_Finish_r(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_Finish_r", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(args[0], "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_Finish_r(" << (int_pointer_type)request << ")");
		FCGX_Finish_r( request );
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** Javascript callback for void FCGX_Free (FCGX_Request * request, int close) */
v8::Handle<v8::Value> do_v8_cfcgi_Free(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_Free", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(args[0], "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		int close = args[1]->Int32Value();
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_Free(" << (int_pointer_type)request << ", " << close << ")");
		FCGX_Free(request, close);
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* Javascript callback for int FCGX_Accept (in, out, err, envp) */
/* Javascript callback for void FCGX_Finish (void) */
/* Javascript callback for int FCGX_StartFilterData (stream) */

/** Javascript callback for void FCGX_SetExitStatus (status, stream) */
v8::Handle<v8::Value> do_v8_cfcgi_SetExitStatus(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_SetExitStatus", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		int status = args[0]->Int32Value();
		FCGX_Stream* stream = (FCGX_Stream*)openjs::ptr_from_v8(args[1], "FCGX_Stream*");
		if(!stream) throw RUNTIME_ERROR("!stream");
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_SetExitStatus(" << status << ", " << (int_pointer_type)stream << ")");
		FCGX_SetExitStatus(status, stream);
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* Javascript callback for FCGX_GetParam */

/* Javascript callback for int FCGX_GetChar(FCGX_Stream *stream) */

/* Javascript callback for int FCGX_UnGetChar(int c, FCGX_Stream *stream) */

/* Javascript callback for int FCGX_GetStr(char *str, int n, FCGX_Stream *stream) */

/* Javascript callback for char *FCGX_GetLine(char *str, int n, FCGX_Stream *stream) */

/* Javascript callback for int FCGX_HasSeenEOF(FCGX_Stream *stream) */

/* Javascript callback for int FCGX_PutChar(int c, FCGX_Stream *stream) */

/* Javascript callback for int FCGX_PutStr(const char *str, int n, FCGX_Stream *stream) */
v8::Handle<v8::Value> do_v8_cfcgi_PutStr(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_PutStr", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		std::string mytmp0 = openjs::convert<std::string>(args[0]);
		const char* myarg0 = mytmp0.c_str();
		FCGX_Stream* stream = (FCGX_Stream*)openjs::ptr_from_v8(args[1], "FCGX_Stream*");
		if(!stream) throw RUNTIME_ERROR("!stream");
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_PutStr(" << mytmp0 << ", " << mytmp0.size() << ", " << (int_pointer_type)stream << ")");
		int ret = FCGX_PutStr(myarg0, mytmp0.size(), stream);
		SENDANOR_LOGGER_DEBUG("Calling: ...return value was " << ret);
		return handle_scope.Close( v8::Integer::New(ret) );
	} catch(...) {
		return handle_scope.Close(openjs::cxx_to_v8_exception_handler());
	}
}

/* Javascript callback for int FCGX_PutS(const char *str, FCGX_Stream *stream) */
/* Javascript callback for int FCGX_FPrintF(FCGX_Stream *stream, const char *format, ...) */
/* Javascript callback for int FCGX_VFPrintF(FCGX_Stream *stream, const char *format, va_list arg) */

/* Javascript callback for int FCGX_FFlush(FCGX_Stream *stream) */
/* Javascript callback for int FCGX_FClose(FCGX_Stream *stream) */

/* Javascript callback for int FCGX_GetError(FCGX_Stream *stream) */
v8::Handle<v8::Value> do_v8_cfcgi_GetError(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_GetError", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Stream* stream = (FCGX_Stream*)openjs::ptr_from_v8(args[0], "FCGX_Stream*");
		if(!stream) throw RUNTIME_ERROR("!stream");
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_GetError(" << (int_pointer_type)stream << ")");
		int ret = FCGX_GetError(stream);
		SENDANOR_LOGGER_DEBUG("Calling: ...return value was " << ret);
		return handle_scope.Close(v8::Integer::New(ret));
	} catch(...) {
		return handle_scope.Close(openjs::cxx_to_v8_exception_handler());
	}
}

/* Javascript callback for void FCGX_ClearError(FCGX_Stream *stream) */
/* Javascript callback for FCGX_CreateWriter */

/* Javascript callback for void FCGX_FreeStream(FCGX_Stream **stream) */

/** Javascript callback for void FCGX_ShutdownPending(void) */
v8::Handle<v8::Value> do_v8_cfcgi_ShutdownPending(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_ShutdownPending", "args[]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_ShutdownPending()");
		FCGX_ShutdownPending();
		return handle_scope.Close(v8::Undefined());
	} catch(...) {
		return handle_scope.Close(openjs::cxx_to_v8_exception_handler());
	}
}

/** FCGX_Request struct builder */
v8::Handle<v8::Value> do_v8_cfcgi_newRequest(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_newRequest", "args[]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("Calling: new FCGX_Request()");
		FCGX_Request* request = new FCGX_Request();
		SENDANOR_LOGGER_DEBUG("Calling: return was " << request);
		if(!request) throw RUNTIME_ERROR("!request");
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)request, "FCGX_Request*");
		return handle_scope.Close(v_ret);
	} catch(...) {
		v8::Handle<v8::Value> ret = openjs::cxx_to_v8_exception_handler();
		return handle_scope.Close(ret);
	}
}

/** FCGX_Request struct builder */
v8::Handle<v8::Value> do_v8_cfcgi_getRequestENV(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_getRequestENV", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(args[0], "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		
		char **env_pointer = request->envp;
		if(!env_pointer) throw RUNTIME_ERROR("!env_pointer");
		
		// Set request env
		openjs::core::environ_type envs;
		openjs::core::parse_environ(env_pointer, envs);
		
		int n = 0;
		SENDANOR_LOGGER_DEBUG("envs.size() == " << envs.size() );
		v8::Handle<v8::Array> env = v8::Array::New(envs.size());
		for(openjs::core::environ_type::iterator i=envs.begin(); i!=envs.end(); ++i) {
			SENDANOR_LOGGER_DEBUG("envs[" << n << "].first == '" << i->first << "'" );
			SENDANOR_LOGGER_DEBUG("envs[" << n << "].second == '" << i->second << "'" );
			env->Set(openjs::convert<v8::Handle<v8::Value> >(i->first)->ToString(), openjs::convert<v8::Handle<v8::Value> >(i->second)->ToString() );
			n++;
		}
		
		return handle_scope.Close(env);
	} catch(...) {
		v8::Handle<v8::Value> ret = openjs::cxx_to_v8_exception_handler();
		return handle_scope.Close(ret);
	}
}

/** Callback to fetch .in from FCGX_Request pointer */
v8::Handle<v8::Value> do_v8_cfcgi_getRequestIn(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_getRequestIn", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(args[0], "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		FCGX_Stream* pointer = request->in;
		if(!pointer) throw RUNTIME_ERROR("!pointer");
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)pointer, "FCGX_Stream*");
		return handle_scope.Close(v_ret);
	} catch(...) {
		v8::Handle<v8::Value> ret = openjs::cxx_to_v8_exception_handler();
		return handle_scope.Close(ret);
	}
}

/** Callback to fetch .out from FCGX_Request pointer */
v8::Handle<v8::Value> do_v8_cfcgi_getRequestOut(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_getRequestOut", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(args[0], "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		FCGX_Stream* pointer = request->out;
		if(!pointer) throw RUNTIME_ERROR("!pointer");
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)pointer, "FCGX_Stream*");
		return handle_scope.Close(v_ret);
	} catch(...) {
		v8::Handle<v8::Value> ret = openjs::cxx_to_v8_exception_handler();
		return handle_scope.Close(ret);
	}
}

/** Callback to fetch .err from FCGX_Request pointer */
v8::Handle<v8::Value> do_v8_cfcgi_getRequestErr(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_getRequestErr", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(args[0], "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		FCGX_Stream* pointer = request->err;
		if(!pointer) throw RUNTIME_ERROR("!pointer");
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)pointer, "FCGX_Stream*");
		return handle_scope.Close(v_ret);
	} catch(...) {
		v8::Handle<v8::Value> ret = openjs::cxx_to_v8_exception_handler();
		return handle_scope.Close(ret);
	}
}

/** FCGX_Request pointer deleter */
v8::Handle<v8::Value> do_v8_cfcgi_deleteRequest(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_deleteRequest", "args[" << args.Length() << "]");
	try {
		if(!args[0]->IsObject()) throw RUNTIME_ERROR("!args[0].IsObject()");
		v8::Handle<v8::Object> obj = args[0]->ToObject();
		FCGX_Request* request = (FCGX_Request*)openjs::ptr_from_v8(obj, "FCGX_Request*");
		if(!request) throw RUNTIME_ERROR("!request");
		delete request;
		obj->Delete(v8::String::New("address") );
		return v8::Handle<v8::Value>(v8::Undefined());
	} catch(...) {
		return openjs::cxx_to_v8_exception_handler();
	}
}


/** our_fcgi_istream pointer builder */
v8::Handle<v8::Value> do_v8_cfcgi_newIStream(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_newStream", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Stream* fcgi_pointer = (FCGX_Stream*)openjs::ptr_from_v8(args[0], "FCGX_Stream*");;
		SENDANOR_LOGGER_DEBUG("Calling: new openjs::our_fcgi_istream()");
		openjs::our_fcgi_istream* our_pointer = new openjs::our_fcgi_istream(fcgi_pointer);
		SENDANOR_LOGGER_DEBUG("Calling: return was " << our_pointer);
		if(!our_pointer) throw RUNTIME_ERROR("!our_pointer");
		std::istream* std_pointer = dynamic_cast<std::istream*>(our_pointer);
		if(!std_pointer) throw RUNTIME_ERROR("!std_pointer");
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)std_pointer, "std::istream*");
		return handle_scope.Close(v_ret);
	} catch(...) {
		return handle_scope.Close(openjs::cxx_to_v8_exception_handler());
	}
}

/** our_fcgi_ostream pointer builder */
v8::Handle<v8::Value> do_v8_cfcgi_newOStream(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_newStream", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		FCGX_Stream* fcgi_pointer = (FCGX_Stream*)openjs::ptr_from_v8(args[0], "FCGX_Stream*");;
		SENDANOR_LOGGER_DEBUG("Calling: new openjs::our_fcgi_ostream()");
		openjs::our_fcgi_ostream* our_pointer = new openjs::our_fcgi_ostream(fcgi_pointer);
		SENDANOR_LOGGER_DEBUG("Calling: return was " << our_pointer);
		if(!our_pointer) throw RUNTIME_ERROR("!our_pointer");
		std::ostream* std_pointer = dynamic_cast<std::ostream*>(our_pointer);
		if(!std_pointer) throw RUNTIME_ERROR("!std_pointer");
		v8::Handle<v8::Value> v_ret = openjs::ptr_to_v8((int_pointer_type)std_pointer, "std::ostream*");
		return handle_scope.Close(v_ret);
	} catch(...) {
		return handle_scope.Close(openjs::cxx_to_v8_exception_handler());
	}
}

/** our_fcgi_istream or our_fcgi_ostream pointer deleter */
v8::Handle<v8::Value> do_v8_cfcgi_deleteStream(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_cfcgi_deleteStream", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		if(!args[0]->IsObject()) throw RUNTIME_ERROR("!args[0].IsObject()");
		v8::Handle<v8::Object> obj = args[0]->ToObject();
		std::string type = openjs::convert<std::string>( obj->Get(v8::String::New("type")) );
		
		// istream
		if(type == "std::istream*") {
			std::istream* std_pointer = (std::istream*)openjs::ptr_from_v8(obj, "std::istream*");
			if(!std_pointer) throw RUNTIME_ERROR("!std_pointer");
			openjs::our_fcgi_istream* our_pointer = dynamic_cast<openjs::our_fcgi_istream*>(std_pointer);
			if(!our_pointer) throw RUNTIME_ERROR("!our_pointer");
			delete our_pointer;
		// ostream
		} else {
			std::ostream* std_pointer = (std::ostream*)openjs::ptr_from_v8(obj, "std::ostream*");
			if(!std_pointer) throw RUNTIME_ERROR("!std_pointer");
			openjs::our_fcgi_ostream* our_pointer = dynamic_cast<openjs::our_fcgi_ostream*>(std_pointer);
			if(!our_pointer) throw RUNTIME_ERROR("!our_pointer");
			delete our_pointer;
		}
		
		obj->Delete(v8::String::New("address"));
		return handle_scope.Close(v8::Handle<v8::Value>(v8::Undefined()));
	} catch(...) {
		return handle_scope.Close(openjs::cxx_to_v8_exception_handler());
	}
}


/** Module initializer */
void openjs::extensions::cfcgi::init(openjs::core::extension_context& a_context) {
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
		
		// Functions/methods
		if(object_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		object_template->Set(v8::String::New("IsCGI")           , v8::FunctionTemplate::New(do_v8_cfcgi_IsCGI));
		object_template->Set(v8::String::New("Init")            , v8::FunctionTemplate::New(do_v8_cfcgi_Init));
		object_template->Set(v8::String::New("InitRequest")     , v8::FunctionTemplate::New(do_v8_cfcgi_InitRequest));
		object_template->Set(v8::String::New("Accept_r")        , v8::FunctionTemplate::New(do_v8_cfcgi_Accept_r));
		object_template->Set(v8::String::New("Finish_r")        , v8::FunctionTemplate::New(do_v8_cfcgi_Finish_r));
		object_template->Set(v8::String::New("Free")            , v8::FunctionTemplate::New(do_v8_cfcgi_Free));
		object_template->Set(v8::String::New("SetExitStatus")   , v8::FunctionTemplate::New(do_v8_cfcgi_SetExitStatus));
		object_template->Set(v8::String::New("PutStr")          , v8::FunctionTemplate::New(do_v8_cfcgi_PutStr));
		object_template->Set(v8::String::New("GetError")        , v8::FunctionTemplate::New(do_v8_cfcgi_GetError));
		object_template->Set(v8::String::New("ShutdownPending") , v8::FunctionTemplate::New(do_v8_cfcgi_ShutdownPending));
		object_template->Set(v8::String::New("newRequest")      , v8::FunctionTemplate::New(do_v8_cfcgi_newRequest));
		object_template->Set(v8::String::New("getRequestENV")   , v8::FunctionTemplate::New(do_v8_cfcgi_getRequestENV));
		object_template->Set(v8::String::New("getRequestIn")    , v8::FunctionTemplate::New(do_v8_cfcgi_getRequestIn));
		object_template->Set(v8::String::New("getRequestOut")   , v8::FunctionTemplate::New(do_v8_cfcgi_getRequestOut));
		object_template->Set(v8::String::New("getRequestErr")   , v8::FunctionTemplate::New(do_v8_cfcgi_getRequestErr));
		object_template->Set(v8::String::New("deleteRequest")   , v8::FunctionTemplate::New(do_v8_cfcgi_deleteRequest));
		
		object_template->Set(v8::String::New("newIStream")      , v8::FunctionTemplate::New(do_v8_cfcgi_newIStream));
		object_template->Set(v8::String::New("newOStream")      , v8::FunctionTemplate::New(do_v8_cfcgi_newOStream));
		object_template->Set(v8::String::New("deleteStream")      , v8::FunctionTemplate::New(do_v8_cfcgi_deleteStream));
		
		//object_template->Set(v8::String::New("initStdinStream"), v8::FunctionTemplate::New(do_v8_cfcgi_request_stream_init<cin_id>));
		//object_template->Set(v8::String::New("initStdoutStream"), v8::FunctionTemplate::New(do_v8_cfcgi_request_stream_init<cout_id>));
		//object_template->Set(v8::String::New("initStderrStream"), v8::FunctionTemplate::New(do_v8_cfcgi_request_stream_init<cerr_id>));
		
		v8_init_object(function_template, obj);
		if(obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		a_context.m_v8_context->Global()->Set(v8::String::New("CFCGI"), obj );
		
		//a_context.m_v8_context->Global()->Set(v8::String::New("getcfcgiRequest"), v8::FunctionTemplate::New(do_v8_cfcgi_request_constructor)->GetFunction() );
		//v8::Handle<v8::Object> proto = v8::Object::Cast(a_context.v8_context->Global()->GetPrototype());
		//proto->Set(v8::String::New("accept"), v8::FunctionTemplate::New(do_v8_cfcgi_accept));
	
	//} catch(...) {
	//	return openjs::cxx_to_v8_exception_handler();
	//}
}

/* EOF */
