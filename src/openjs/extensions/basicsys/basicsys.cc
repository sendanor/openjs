/* openjs basicsys Extensions
 * $Id: basicsys.cc 10378 2009-12-20 17:49:36Z jheusala $
 */

#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/convert.h"            // for openjs::convert
#include "../../core/v8_util.h"            // for openjs::unwrap, etc
#include "../../core/pointer_helpers.h"    // for ptr_from_v8
#include <sendanor/logger.h>               // for SENDANOR_LOGGER_FUNCTION
#include <glibmm/ustring.h>                // for Glib::ustring
#include <sendanor/exception.h>            // for sendanor::exception
#include <vector>                          // for std::vector
#include <sendanor/exec.h>                 // for sendanor::exec
#include "basicsys.h"                      // for openjs::extensions::basicsys::*
#include "../basicstream/basicstream_v8.h"    // for openjs::extensions::do_*
#include <cstdlib>                         // for exit

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::basicsys );

std::string openjs::extensions::basicsys::name() const { return "basicsys"; }
std::string openjs::extensions::basicsys::version() const { return "0.0.20100805"; }


namespace openjs {

  /* FIXME: This should be at the basicstream extension */
  std::ostream* get_internal_pointer_ostream(v8::Handle<v8::Value> arg);
	
  /* FIXME: This should be at the basicstream extension */
  std::istream* get_internal_pointer_istream(v8::Handle<v8::Value> arg);
	
  namespace extensions {
	
	/** Real write() function */
	void do_write(const Glib::ustring& msg, std::ostream& output);
	
	/** Real writeln() function */
	void do_writeln(const Glib::ustring& msg, std::ostream& output);
	
	/** V8 wrapper for real write function */
	v8::Handle<v8::Value> do_v8_write(const v8::Arguments& args);
	
	/** V8 wrapper for real write function */
	v8::Handle<v8::Value> do_v8_writeln(const v8::Arguments& args);
	
	/* V8 wrapper for exec function */
	v8::Handle<v8::Value> do_v8_exec(const v8::Arguments& args);
	
	/* V8 wrapper for exec function with input streams */
	v8::Handle<v8::Value> do_v8_exec3(const v8::Arguments& args);
	
	/** V8 wrapper for real exec function. Returns outputed data instead of writing it to output. */
	v8::Handle<v8::Value> do_v8_backtick(const v8::Arguments& args);
	
  } // end of openjs::extensions
  
} // end of openjs



/** Constructor */
openjs::extensions::basicsys::basicsys(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("basicsys", "");
}

/* V8 standard stream init function */
const int cin_id = 0;
const int cout_id = 1;
const int cerr_id = 2;
template<int stream_id>
v8::Handle<v8::Value> do_v8_standard_stream_init(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_standard_stream_init", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		
		// Argument 1 -- stream object
		v8::Handle<v8::Object> obj = v8::Handle<v8::Object>::Cast(args[0]);
		if(obj.IsEmpty()) throw RUNTIME_ERROR("obj is empty");
		
		// Argument 2 -- builder arguments
		/*
		v8::Handle<v8::Object> builder_args = v8::Handle<v8::Object>::Cast(args[1]);
		if(builder_args.IsEmpty()) throw RUNTIME_ERROR("builder_args is empty");
		*/
		
		//v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(obj->Get(v8::String::New("internal")));
		//std::ios* sios = openjs::unwrap<std::ios>(internal_obj, 0);
		//if(sios) throw RUNTIME_ERROR("stream is set already!");
		switch(stream_id) {
		case cin_id: {
				std::istream* in = &std::cin;
				obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_istream_internal(in) );
			}
			break;
		case cout_id: {
				std::ostream* out = &std::cout;
				obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_ostream_internal(out) );
			}
			break;
		case cerr_id: {
				std::ostream* out = &std::cerr;
				obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_ostream_internal(out) );
			}
			break;
		default:
			throw LOGIC_ERROR("unknown stream id");
		}
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* V8 wrapper for exit function */
v8::Handle<v8::Value> do_v8_exit(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_exit", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const int status = int(args[0]->ToInteger()->Value());
		exit(status);
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Get internal pointer */
std::ostream* openjs::get_internal_pointer_ostream(v8::Handle<v8::Value> arg) {
	if(!arg->IsObject()) throw RUNTIME_ERROR("!arg->IsObject()");
	v8::Handle<v8::Object> arg_obj = v8::Handle<v8::Object>::Cast(arg);
	v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(arg_obj->Get(v8::String::New("internal")));
	if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
	if(!internal_obj->IsObject()) throw RUNTIME_ERROR("!internal_obj->IsObject()");
	v8::Handle<v8::Value> v8_pointer = internal_obj->Get(v8::String::New("pointer"));
	std::ostream* output = (std::ostream*)openjs::ptr_from_v8(v8_pointer, "std::ostream*");
	if(!output) throw RUNTIME_ERROR("output is not set!");
	return output;
}

/** Get internal pointer */
std::istream* openjs::get_internal_pointer_istream(v8::Handle<v8::Value> arg) {
	if(!arg->IsObject()) throw RUNTIME_ERROR("!arg->IsObject()");
	v8::Handle<v8::Object> arg_obj = v8::Handle<v8::Object>::Cast(arg);
	v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(arg_obj->Get(v8::String::New("internal")));
	if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
	if(!internal_obj->IsObject()) throw RUNTIME_ERROR("!internal_obj->IsObject()");
	v8::Handle<v8::Value> v8_pointer = internal_obj->Get(v8::String::New("pointer"));
	std::istream* input = (std::istream*)openjs::ptr_from_v8(v8_pointer, "std::istream*");
	if(!input) throw RUNTIME_ERROR("input is not set!");
	return input;
}

/* V8 wrapper for real exec function */
v8::Handle<v8::Value> openjs::extensions::do_v8_exec(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_exec", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		//std::ostream* output = openjs::unwrap<std::ostream>(args.Holder(), 0);
		//if(!output) throw RUNTIME_ERROR("output is not set!");
		SENDANOR_LOGGER_DEBUG("1");
		std::ostream* output = get_internal_pointer_ostream(args[0]);
		//std::ostream* err = openjs::unwrap<std::ostream>(args.Holder(), 2);
		//if(!err) throw RUNTIME_ERROR("err is not set!");
		SENDANOR_LOGGER_DEBUG("2");
		std::ostream* err = get_internal_pointer_ostream(args[1]);
		
		SENDANOR_LOGGER_DEBUG("3");
		if(!args[2]->IsString()) throw RUNTIME_ERROR("!args[2]->IsString()");
		const Glib::ustring value = openjs::convert<Glib::ustring>(args[2]);
		
		SENDANOR_LOGGER_DEBUG("4");
		if(!args[3]->IsArray()) throw RUNTIME_ERROR("!args[3]->IsArray()");
		v8::Handle<v8::Array> arg_args = v8::Handle<v8::Array>::Cast(args[3]);
		
		SENDANOR_LOGGER_DEBUG("5");
		std::vector<Glib::ustring> cmdargs;
		for(unsigned int i=0; i<arg_args->Length(); ++i) {
			SENDANOR_LOGGER_DEBUG("for i=" << i);
			cmdargs.push_back(openjs::convert<Glib::ustring>(arg_args->Get(v8::Integer::NewFromUnsigned(i))));
		}
		
		SENDANOR_LOGGER_DEBUG("6");
		return handle_scope.Close( v8::Integer::New(sendanor::exec(value, cmdargs, *output, *err)) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* V8 wrapper for input exec function */
v8::Handle<v8::Value> openjs::extensions::do_v8_exec3(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_exec3", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		// Argument 0
		SENDANOR_LOGGER_DEBUG("1.0");
		std::istream* input = get_internal_pointer_istream(args[0]);
		
		// Argument 1
		SENDANOR_LOGGER_DEBUG("1.1");
		std::ostream* output = get_internal_pointer_ostream(args[1]);
		
		// Argument 2
		SENDANOR_LOGGER_DEBUG("1.2");
		std::ostream* err = get_internal_pointer_ostream(args[2]);
		
		// Argument 3
		SENDANOR_LOGGER_DEBUG("1.3");
		if(!args[3]->IsString()) throw RUNTIME_ERROR("!args[3]->IsString()");
		const Glib::ustring value = openjs::convert<Glib::ustring>(args[3]);
		
		// Argument 4
		SENDANOR_LOGGER_DEBUG("1.4");
		if(!args[4]->IsArray()) throw RUNTIME_ERROR("!args[4]->IsArray()");
		v8::Handle<v8::Array> arg_args = v8::Handle<v8::Array>::Cast(args[4]);
		
		// Prepare cmdargs
		SENDANOR_LOGGER_DEBUG("2");
		std::vector<Glib::ustring> cmdargs;
		for(unsigned int i=0; i<arg_args->Length(); ++i) {
			SENDANOR_LOGGER_DEBUG("2: for i=" << i);
			cmdargs.push_back(openjs::convert<Glib::ustring>(arg_args->Get(v8::Integer::NewFromUnsigned(i))));
		}
		
		// Execute
		SENDANOR_LOGGER_DEBUG("3");
		return handle_scope.Close( v8::Integer::New(sendanor::exec(value, cmdargs, *output, *err, *input)) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** V8 wrapper for real exec function. Returns outputed data instead of writing it to output. */
v8::Handle<v8::Value> openjs::extensions::do_v8_backtick(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_backtick", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
	
		//std::ostream* err = openjs::unwrap<std::ostream>(args.Holder(), 2);
		//if(!err) throw RUNTIME_ERROR("err is not set!");
		std::ostream* err = get_internal_pointer_ostream(args[0]);
		
		const Glib::ustring value = openjs::convert<Glib::ustring>(args[1]);
		
		v8::Handle<v8::Array> arg_args = v8::Handle<v8::Array>::Cast(args[2]);
		std::vector<Glib::ustring> cmdargs;
		for(unsigned int i=0; i < arg_args->Length(); ++i) {
			cmdargs.push_back(openjs::convert<Glib::ustring>(arg_args->Get(v8::Integer::NewFromUnsigned(i))));
		}
		
		std::ostringstream buf;
		sendanor::exec(value, cmdargs, buf, *err);
		//return v8::String::New(buf.str().c_str());
		Glib::ustring bufstr = openjs::convert<Glib::ustring>(buf.str());
		return handle_scope.Close( openjs::convert<v8::Handle<v8::Value> >(bufstr) );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Real write() function */
void openjs::extensions::do_write(const Glib::ustring& msg, std::ostream& output) {
	SENDANOR_LOGGER_FUNCTION("do_write", "msg=`" << msg << "', output=`" << output << "'");
	output << msg;
	output.flush();
}

/** Real writeln() function */
void openjs::extensions::do_writeln(const Glib::ustring& msg, std::ostream& output) {
	SENDANOR_LOGGER_FUNCTION("do_writeln", "msg=`" << msg << "', output=`" << output << "'");
	output << msg << std::endl;
}

/** V8 wrapper for real write function */
v8::Handle<v8::Value> openjs::extensions::do_v8_write(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_write", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		//std::ostream* output = unwrap<std::ostream>(args.Holder(), 0);
		//if(!output) throw RUNTIME_ERROR("output is not set!");
		std::ostream* output = get_internal_pointer_ostream(args[0]);
		const Glib::ustring value = openjs::convert<Glib::ustring>(args[1]);
		do_write(value, *output);
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** V8 wrapper for real write function */
v8::Handle<v8::Value> openjs::extensions::do_v8_writeln(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_writeln", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		//std::ostream* output = unwrap<std::ostream>(args.Holder(), 0);
		//if(!output) throw RUNTIME_ERROR("output is not set!");
		std::ostream* output = get_internal_pointer_ostream(args[0]);
		const Glib::ustring value = openjs::convert<Glib::ustring>(args[1]);
		do_writeln(value, *output);
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* Module initializer */
void openjs::extensions::basicsys::init(openjs::core::extension_context& a_context) {

	/* Data */
	static v8::Persistent<v8::FunctionTemplate> m_function_template;
	static v8::Persistent<v8::ObjectTemplate> m_template;
	static v8::Persistent<v8::Object> m_obj;
	
	static v8::Persistent<v8::Array> m_args;
	static v8::Persistent<v8::Array> m_env;
		
	SENDANOR_LOGGER_FUNCTION("init", "");
	v8::HandleScope handle_scope;
	
	//do_init_template();
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	//m_template->SetInternalFieldCount(3); // for ostream pointer
	m_template->Set(v8::String::New("initStdinStream"), v8::FunctionTemplate::New(do_v8_standard_stream_init<cin_id>));
	m_template->Set(v8::String::New("initStdoutStream"), v8::FunctionTemplate::New(do_v8_standard_stream_init<cout_id>));
	m_template->Set(v8::String::New("initStderrStream"), v8::FunctionTemplate::New(do_v8_standard_stream_init<cerr_id>));
	m_template->Set(v8::String::New("exit"), v8::FunctionTemplate::New(do_v8_exit));
	m_template->Set(v8::String::New("exec"), v8::FunctionTemplate::New(do_v8_exec));
	m_template->Set(v8::String::New("exec3"), v8::FunctionTemplate::New(do_v8_exec3));
	m_template->Set(v8::String::New("getexec"), v8::FunctionTemplate::New(do_v8_backtick)); // FIXME: there might be better name for getexec
	
	
	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	a_context.m_v8_context->Global()->Set(v8::String::New("BasicSys"), m_obj);
	
	// Set output ptr
	/*
	v8::Handle<v8::External> basicsys_output_ptr = v8::External::New(a_context.m_out);
	if(basicsys_output_ptr.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	m_obj->SetInternalField(0, basicsys_output_ptr);
	*/
	
	// Set error ptr
	/*
	v8::Handle<v8::External> basicsys_err_ptr = v8::External::New(a_context.m_err);
	if(basicsys_err_ptr.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	m_obj->SetInternalField(1, basicsys_err_ptr);
	*/
	
	// Set input ptr
	/*
	v8::Handle<v8::External> basicsys_input_ptr = v8::External::New(a_context.m_in);
	if(basicsys_input_ptr.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	m_obj->SetInternalField(2, basicsys_input_ptr);
	*/

	// Set args
	int n = 0;
	SENDANOR_LOGGER_DEBUG("a_context.m_args.size() == " << a_context.m_args.size() );
	v8::Handle<v8::Array> args = v8::Array::New(a_context.m_args.size());
	m_args = v8::Persistent<v8::Array>::New( args );
	for(openjs::core::extension_context::args_type::iterator i=a_context.m_args.begin();
	    i!=a_context.m_args.end();
	    ++i) {
		SENDANOR_LOGGER_DEBUG("a_context.m_args[" << n << "] == " << *i );
		v8::Handle<v8::Integer> id = v8::Integer::New(n);
		m_args->Set(id, openjs::convert<v8::Handle<v8::Value> >(*i)->ToString() );
		n++;
	}
	m_obj->Set(v8::String::New("args"), m_args );
	
	// Set env
	n = 0;
	SENDANOR_LOGGER_DEBUG("a_context.m_environ.size() == " << a_context.m_environ.size() );
	v8::Handle<v8::Array> env = v8::Array::New(a_context.m_environ.size());
	m_env = v8::Persistent<v8::Array>::New( env );
	for(openjs::core::extension_context::environ_type::iterator i=a_context.m_environ.begin();
	    i!=a_context.m_environ.end();
	    ++i) {
		SENDANOR_LOGGER_DEBUG("a_context.m_environ[" << n << "].first == '" << i->first << "'" );
		SENDANOR_LOGGER_DEBUG("a_context.m_environ[" << n << "].second == '" << i->second << "'" );
		m_env->Set(openjs::convert<v8::Handle<v8::Value> >(i->first)->ToString(), openjs::convert<v8::Handle<v8::Value> >(i->second)->ToString() );
		n++;
	}
	m_obj->Set(v8::String::New("env"), m_env );
	
}

/* EOF */
