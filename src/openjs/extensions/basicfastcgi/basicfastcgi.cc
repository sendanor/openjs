/* openjs fastcgi Extensions
 * $Id: basicfastcgi.cc 10119 2009-11-16 19:55:22Z jheusala $
 */

/**
 * @todo Implement FCGX_IsCGI
 * @todo Implement FCGX_OpenSocket
 * @todo Implement FCGX_ShutdownPending
 */

#include "../../core/convert.h"            // for openjs::convert
#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/v8_util.h"            // for openjs::unwrap etc
#include "../../core/pointer_helpers.h"            // for openjs::ptr_to_v8 etc
#include "basicfastcgi.h"                         // for openjs::fastcgi::*
#include <sendanor/logger.h>               // for SENDANOR_LOGGER_FUNCTION
#include <fcgi_config.h>            // for FCGX_Request
#include <fcgio.h>                  // for FCGX_*
#include "../basicstream/basicstream_v8.h"    // for openjs::extensions::basicsys::*

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::basicfastcgi );

std::string openjs::extensions::basicfastcgi::name() const { return "basicfastcgi"; }
std::string openjs::extensions::basicfastcgi::version() const { return "0.0.20100112"; }

namespace openjs {
	
	/** FastCGI input stream */
	class fcgi_istream : public std::istream {
	public:
		fcgi_istream(FCGX_Stream* buf) : std::istream(&m_buf), m_buf(buf) { rdbuf(&m_buf); }
		virtual ~fcgi_istream() { }
	private:
		fcgi_streambuf m_buf;
	};
	
	/** FastCGI output stream */
	class fcgi_ostream : public std::ostream {
	public:
		fcgi_ostream(FCGX_Stream* buf) : std::ostream(&m_buf), m_buf(buf) { rdbuf(&m_buf); }
		virtual ~fcgi_ostream() { }
	private:
		fcgi_streambuf m_buf;
	};
	
	/* Request holding FastCGI request information
	 * @todo Change streams to be destroyed after every request. Maybe splitting this class into two.
	 */
	class fcgi_request {
	public:
		
		fcgi_request(FCGX_Request* r)
		 : in(0)
		 , out(0)
		 , err(0)
		 , m_request(r) {
			if(!r) throw RUNTIME_ERROR("!r");
			try {
				in  = new fcgi_istream(r->in);
				out = new fcgi_ostream(r->out);
				err = new fcgi_ostream(r->err);
			} catch (...) {
				delete in;
				delete out;
				delete err;
				throw;
			}
		}
		
		virtual ~fcgi_request() {
			delete in;
			delete out;
			delete err;
		}
		
		fcgi_istream* in;
		fcgi_ostream* out;
		fcgi_ostream* err;
		FCGX_Request* m_request;
	};

}


/* V8 standard stream init function */
const int cin_id = 0;
const int cout_id = 1;
const int cerr_id = 2;
template<int stream_id>
v8::Handle<v8::Value> do_v8_fastcgi_request_stream_init(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fastcgi_request_stream_init", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("part 1");
		v8::Handle<v8::Object> obj = v8::Handle<v8::Object>::Cast(args[0]);
		SENDANOR_LOGGER_DEBUG("part 2");
		if(obj.IsEmpty()) throw RUNTIME_ERROR("obj is empty");
		
		//v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(obj->Get(v8::String::New("internal")));
		
		SENDANOR_LOGGER_DEBUG("part 3");
		openjs::fcgi_request* request = (openjs::fcgi_request*)openjs::ptr_from_v8(args.Holder()->Get(v8::String::New("pointer")), "openjs::fcgi_request");
		SENDANOR_LOGGER_DEBUG("part 4");
		if(!request) throw RUNTIME_ERROR("!request");
		
		//SENDANOR_LOGGER_DEBUG("part 5");
		//std::ios* sios = 0;
		
		SENDANOR_LOGGER_DEBUG("part 5");
		switch(stream_id) {
		case cin_id: {
				SENDANOR_LOGGER_DEBUG("part 6.1");
				openjs::fcgi_istream* rin = request->in;
				SENDANOR_LOGGER_DEBUG("part 6.1.1");
				if(!rin) throw RUNTIME_ERROR("!rin");
				SENDANOR_LOGGER_DEBUG("part 6.1.2");
				std::istream* is = dynamic_cast<std::istream*>(rin);
				SENDANOR_LOGGER_DEBUG("part 6.1.3");
				if(is == 0) throw LOGIC_ERROR("stream unset");
				SENDANOR_LOGGER_DEBUG("part 6.1.4");
				obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_istream_internal(is) );
			}
			break;
		case cout_id: {
				SENDANOR_LOGGER_DEBUG("part 6.2");
				openjs::fcgi_ostream* rout = request->out;
				SENDANOR_LOGGER_DEBUG("part 6.2.1");
				if(!rout) throw RUNTIME_ERROR("!rout");
				SENDANOR_LOGGER_DEBUG("part 6.2.2");
				std::ostream* os = dynamic_cast<std::ostream*>(rout);
				SENDANOR_LOGGER_DEBUG("part 6.2.3");
				if(!os) throw LOGIC_ERROR("stream unset");
				SENDANOR_LOGGER_DEBUG("part 6.2.4");
				obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_ostream_internal(os) );
			}
			break;
		case cerr_id: {
				SENDANOR_LOGGER_DEBUG("part 6.3");
				openjs::fcgi_ostream* rout = request->err;
				SENDANOR_LOGGER_DEBUG("part 6.3.1");
				if(!rout) throw RUNTIME_ERROR("!rout");
				SENDANOR_LOGGER_DEBUG("part 6.3.2");
				std::ostream* os = dynamic_cast<std::ostream*>(rout);
				SENDANOR_LOGGER_DEBUG("part 6.3.3");
				if(!os) throw LOGIC_ERROR("stream unset");
				SENDANOR_LOGGER_DEBUG("part 6.3.4");
				obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_ostream_internal(os) );
			}
			break;
		default: 
			SENDANOR_LOGGER_DEBUG("part 6.4");
			throw LOGIC_ERROR("unknown stream id");
		}
		SENDANOR_LOGGER_DEBUG("part 7");
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		SENDANOR_LOGGER_DEBUG("part 10");
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** Stream write function for fastcgi streams.
 * For unknown reason do_v8_s_write() does not work and makes segmentation faults inside FCGI_Put.
 */
v8::Handle<v8::Value> do_v8_fastcgi_direct_write(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_s_write", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("part 1");
		const std::string value = openjs::convert<std::string>(args[0]);
		SENDANOR_LOGGER_DEBUG("value = '" << value << "'");
		SENDANOR_LOGGER_DEBUG("part 2");
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		SENDANOR_LOGGER_DEBUG("part 3");
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		SENDANOR_LOGGER_DEBUG("part 4");
		std::ostream* sout = (std::ostream*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::ostream*");
		if(!sout) throw RUNTIME_ERROR("!sout");
		SENDANOR_LOGGER_DEBUG("part 8");
		openjs::fcgi_ostream* fsout = dynamic_cast<openjs::fcgi_ostream*>(sout);
		SENDANOR_LOGGER_DEBUG("part 9");
		if(!fsout) throw RUNTIME_ERROR("!fsout");
		SENDANOR_LOGGER_DEBUG("part 10");
		fcgi_ostream* out = fsout->out;
		if(!out) throw RUNTIME_ERROR("!fsout");
		SENDANOR_LOGGER_DEBUG("part 10");
		(*fsout) << value;
		SENDANOR_LOGGER_DEBUG("part 11");
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		SENDANOR_LOGGER_DEBUG("part 12");
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** Stream write function for fastcgi streams.
 * For unknown reason do_v8_s_write() does not work and makes segmentation faults inside FCGI_Put.
 */
v8::Handle<v8::Value> do_v8_fastcgi_s_write(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_s_write", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("part 1");
		const std::string value = openjs::convert<std::string>(args[0]);
		SENDANOR_LOGGER_DEBUG("value = '" << value << "'");
		SENDANOR_LOGGER_DEBUG("part 2");
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		SENDANOR_LOGGER_DEBUG("part 3");
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		SENDANOR_LOGGER_DEBUG("part 4");
		std::ostream* sout = (std::ostream*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::ostream*");
		if(!sout) throw RUNTIME_ERROR("!sout");
		SENDANOR_LOGGER_DEBUG("part 8");
		openjs::fcgi_ostream* fsout = dynamic_cast<openjs::fcgi_ostream*>(sout);
		SENDANOR_LOGGER_DEBUG("part 9");
		if(!fsout) throw RUNTIME_ERROR("!fsout");
		SENDANOR_LOGGER_DEBUG("part 10");
		(*fsout) << value;
		SENDANOR_LOGGER_DEBUG("part 11");
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		SENDANOR_LOGGER_DEBUG("part 12");
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* FastCGIRequest.init */
v8::Handle<v8::Value> do_v8_fastcgi_init(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fastcgi_init", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_Init()");
		if(FCGX_Init() != 0) return openjs::js_throw_exception("FCGX_Init() failed");
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* FastCGIRequest.initRequest
 * @todo Implement support for other arguments
 * @todo Implement check that there is no pointer already set
 */
v8::Handle<v8::Value> do_v8_fastcgi_init_request(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fastcgi_init_request", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		// Check that there is no pointer already
		
		// Create FCGX_Request
		SENDANOR_LOGGER_DEBUG("Calling: new FCGX_Request()");
		FCGX_Request* raw = new FCGX_Request();
		SENDANOR_LOGGER_DEBUG("Calling: return was " << raw);
		if(!raw) throw RUNTIME_ERROR("!raw");
		openjs::fcgi_request* r = new openjs::fcgi_request(raw);
		if(!r) throw RUNTIME_ERROR("!r");
		
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_InitRequest(" << raw << ", 0, 0)");
		if(FCGX_InitRequest(raw, 0, 0) != 0) { throw RUNTIME_ERROR("FCGX_InitRequest() failed"); }
		
		// Set pointer to SQL object
		//v8::Handle<v8::External> ptr = v8::External::New(r);
		//if(ptr.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		//obj->SetInternalField(0, ptr);
		
		args.Holder()->Set(v8::String::New("pointer"), openjs::ptr_to_v8((int_pointer_type)r, "openjs::fcgi_request") );
		
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* FastCGIRequest.accept */
v8::Handle<v8::Value> do_v8_fastcgi_request_accept(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fastcgi_request_accept", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("part 1");
		//openjs::fcgi_request* r = openjs::unwrap<openjs::fcgi_request>(args.Holder(), 0);
		openjs::fcgi_request* r = (openjs::fcgi_request*)openjs::ptr_from_v8(args.Holder()->Get(v8::String::New("pointer")), "openjs::fcgi_request");
		SENDANOR_LOGGER_DEBUG("part 2");
		if(!r) throw RUNTIME_ERROR("!r");
		SENDANOR_LOGGER_DEBUG("part 3");
		FCGX_Request* raw = r->m_request;
		SENDANOR_LOGGER_DEBUG("part 4");
		if(!raw) throw RUNTIME_ERROR("!raw");
		SENDANOR_LOGGER_DEBUG("part 5");
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_Accept_r(" << raw << ")");
		const bool ret_value = FCGX_Accept_r( raw ) == 0;
		
		SENDANOR_LOGGER_DEBUG("part 6");
		if(ret_value) {
			// Set request env
			SENDANOR_LOGGER_DEBUG("Setup request environment array");
			openjs::core::environ_type envs;
			SENDANOR_LOGGER_DEBUG("part 7");
			openjs::core::parse_environ(raw->envp, envs);
			
			SENDANOR_LOGGER_DEBUG("part 8");
			int n = 0;
			SENDANOR_LOGGER_DEBUG("envs.size() == " << envs.size() );
			v8::Handle<v8::Array> env = v8::Array::New(envs.size());
			for(openjs::core::environ_type::iterator i=envs.begin(); i!=envs.end(); ++i) {
				SENDANOR_LOGGER_DEBUG("envs[" << n << "].first == '" << i->first << "'" );
				SENDANOR_LOGGER_DEBUG("envs[" << n << "].second == '" << i->second << "'" );
				env->Set(openjs::convert<v8::Handle<v8::Value> >(i->first)->ToString(), openjs::convert<v8::Handle<v8::Value> >(i->second)->ToString() );
				n++;
			}
			SENDANOR_LOGGER_DEBUG("part 9");
			args.Holder()->Set(v8::String::New("env"), env );
		} else {
			SENDANOR_LOGGER_DEBUG("part 10");
			args.Holder()->Set(v8::String::New("env"), v8::Undefined() );
		}
		
		SENDANOR_LOGGER_DEBUG("part 11");
		return handle_scope.Close( v8::Boolean::New(ret_value) );
	} catch(...) {
		SENDANOR_LOGGER_DEBUG("part 12");
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* FastCGIRequest.finish */
v8::Handle<v8::Value> do_v8_fastcgi_request_finish(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fastcgi_request_finish", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		//openjs::fcgi_request* r = openjs::unwrap<openjs::fcgi_request>(args.Holder(), 0);
		openjs::fcgi_request* r = (openjs::fcgi_request*)openjs::ptr_from_v8(args.Holder()->Get(v8::String::New("pointer")), "openjs::fcgi_request");
		if(!r) throw RUNTIME_ERROR("!r");
		FCGX_Request* raw = r->m_request;
		if(!raw) throw RUNTIME_ERROR("!raw");
		SENDANOR_LOGGER_DEBUG("Calling: FCGX_Finish_r(" << raw << ")");
		FCGX_Finish_r( r->m_request );
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* FastCGIRequest.close */
v8::Handle<v8::Value> do_v8_fastcgi_request_close(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fastcgi_finish", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		//openjs::fcgi_request* r = openjs::unwrap<openjs::fcgi_request>(args.Holder(), 0);
		openjs::fcgi_request* r = (openjs::fcgi_request*)openjs::ptr_from_v8(args.Holder()->Get(v8::String::New("pointer")), "openjs::fcgi_request");
		if(!r) throw RUNTIME_ERROR("!r");
		if(!(r->m_request)) throw RUNTIME_ERROR("!(r->m_request)");
		delete r->m_request;
		delete r;
		r = 0;
		//v8::Handle<v8::External> ptr = v8::External::New(r);
		//if(ptr.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		//args.Holder()->SetInternalField(0, ptr);
		
		args.Holder()->Set(v8::String::New("pointer"), v8::Undefined() );
		
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* FastCGIRequest constructor */
v8::Handle<v8::Value> do_v8_fastcgi_request_constructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_fastcgi_request_constructor", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		// Create function template
		static v8::Persistent<v8::FunctionTemplate> function_template;
		if(function_template.IsEmpty()) {
			v8::Handle<v8::FunctionTemplate> tmp = v8::FunctionTemplate::New();
			if(tmp.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
			function_template = v8::Persistent<v8::FunctionTemplate>::New(tmp);
		}
		
		// Create object template
		static v8::Persistent<v8::ObjectTemplate> obj_template;
		if(obj_template.IsEmpty()) {
			v8::Handle<v8::ObjectTemplate> tmp = function_template->InstanceTemplate();
			obj_template = v8::Persistent<v8::ObjectTemplate>::New(tmp);
			//obj_template->SetInternalFieldCount(1);
			obj_template->Set(v8::String::New("init"), v8::FunctionTemplate::New(do_v8_fastcgi_init_request));
			obj_template->Set(v8::String::New("accept"), v8::FunctionTemplate::New(do_v8_fastcgi_request_accept));
			obj_template->Set(v8::String::New("finish"), v8::FunctionTemplate::New(do_v8_fastcgi_request_finish));
			obj_template->Set(v8::String::New("close"), v8::FunctionTemplate::New(do_v8_fastcgi_request_close));
			obj_template->Set(v8::String::New("initStdinStream"), v8::FunctionTemplate::New(do_v8_fastcgi_request_stream_init<cin_id>));
			obj_template->Set(v8::String::New("initStdoutStream"), v8::FunctionTemplate::New(do_v8_fastcgi_request_stream_init<cout_id>));
			obj_template->Set(v8::String::New("initStderrStream"), v8::FunctionTemplate::New(do_v8_fastcgi_request_stream_init<cerr_id>));
		}
		
		// Create object
		v8::Handle<v8::Object> obj = function_template->GetFunction()->NewInstance();
		
		return handle_scope.Close(obj);
	} catch(...) {
		return handle_scope.Close(openjs::cxx_to_v8_exception_handler());
	}
}

/** Constructor */
openjs::extensions::basicfastcgi::basicfastcgi(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("basicfastcgi", "");
//	if(FCGX_Init() != 0) {
//		SENDANOR_LOGGER_WARNING("FCGX_Init() failed");
//	}
}

/** Destructor */
openjs::extensions::basicfastcgi::~basicfastcgi() {
	SENDANOR_LOGGER_FUNCTION("~basicfastcgi", "");
	/*
	std::vector<FCGX_Request*>& requests = openjs::extensions::basicfastcgi::requests();
	for(std::vector<FCGX_Request*>::iterator i=m_requests.begin(); i!=m_requests.end(); i++) {
		FCGX_Request* r = *i;
		delete r;
	}
	*/
}

/* Module initializer */
void openjs::extensions::basicfastcgi::init(openjs::core::extension_context& a_context) {
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
		object_template->Set(v8::String::New("init"), v8::FunctionTemplate::New(do_v8_fastcgi_init));
		object_template->Set(v8::String::New("write"), v8::FunctionTemplate::New(do_v8_fastcgi_s_write));
		object_template->Set(v8::String::New("getRequest"), v8::FunctionTemplate::New(do_v8_fastcgi_request_constructor));
		
		v8_init_object(function_template, obj);
		if(obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		a_context.m_v8_context->Global()->Set(v8::String::New("BasicFastCGI"), obj );
		
		//a_context.m_v8_context->Global()->Set(v8::String::New("getBasicFastCGIRequest"), v8::FunctionTemplate::New(do_v8_fastcgi_request_constructor)->GetFunction() );
		//v8::Handle<v8::Object> proto = v8::Object::Cast(a_context.v8_context->Global()->GetPrototype());
		//proto->Set(v8::String::New("accept"), v8::FunctionTemplate::New(do_v8_fastcgi_accept));
	
	//} catch(...) {
	//	return openjs::cxx_to_v8_exception_handler();
	//}
}

/* EOF */
