/* Basic Openjs Thread Extension
 * $Id: thread.cc 10463 2009-12-31 18:00:16Z jheusala $
 */

#include <glibmm/ustring.h>                // for Glib::ustring
#include <boost/filesystem.hpp>            // for boost::filesystem
#include <boost/filesystem/fstream.hpp>    // for boost::filesystem::ifstream
#include <boost/thread/thread.hpp>

#include "../../core/convert.h"            // for openjs::convert
#include "../../core/v8_util.h"            // for openjs::unwrap
#include "../../core/pointer_helpers.h"    // for ptr_from_v8
#include "../../core/log.h"                // for SENDANOR_LOG_JS_EXCEPTION

#include "basicthread.h"                        // for openjs::extensions::basicthread::*

namespace js {
	namespace thread {
		
		typedef boost::thread internal_type;
		const char internal_name[] = "boost::thread*";
		
		v8::Handle<v8::Value> constructor(const v8::Arguments& args);
		v8::Handle<v8::Value> destructor(const v8::Arguments& args);
		v8::Handle<v8::Value> join(const v8::Arguments& args);
		v8::Handle<v8::Value> joinable(const v8::Arguments& args);
		v8::Handle<v8::Value> timedJoin(const v8::Arguments& args);
		v8::Handle<v8::Value> interrupt(const v8::Arguments& args);
		v8::Handle<v8::Value> detach(const v8::Arguments& args);
		v8::Handle<v8::Value> hardwareConcurrency(const v8::Arguments& args);
		v8::Handle<v8::Value> sleep(const v8::Arguments& args);
		v8::Handle<v8::Value> yield(const v8::Arguments& args);
		
		v8::Handle<v8::Value> start_preemption(const v8::Arguments& args);
		v8::Handle<v8::Value> stop_preemption(const v8::Arguments& args);
		
		struct thread {
			thread(v8::Handle<v8::Context> c, v8::Handle<v8::Object> obj, v8::Handle<v8::Function> f);
		    void operator()();
		private:
			v8::Persistent<v8::Context> m_context;
			v8::Persistent<v8::Object> m_obj;
			v8::Persistent<v8::Function> m_fun;
		};
		
	}
}

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::basicthread );

/* Constructor */
js::thread::thread::thread(v8::Handle<v8::Context> c, v8::Handle<v8::Object> obj, v8::Handle<v8::Function> f) 
: m_context(v8::Persistent<v8::Context>::New(c))
, m_obj(v8::Persistent<v8::Object>::New(obj))
, m_fun(v8::Persistent<v8::Function>::New(f))
 {
	if(m_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	if(m_fun.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
}

/* Implements the thread to call a JS callback */
void js::thread::thread::operator()() {
	SENDANOR_LOGGER_FUNCTION("js::thread::operator()", "" );
	v8::Locker locker;
	if(!v8::Context::InContext()) {
		SENDANOR_LOGGER_DEBUG("No v8 context here...");
	}
	v8::HandleScope m_handle_scope;
	if(!v8::Context::InContext()) {
		SENDANOR_LOGGER_DEBUG("And no context here either...");
	}
	v8::Context::Scope context_scope(m_context);
	if(!v8::Context::InContext()) throw RUNTIME_ERROR("v8 is not in the context");
	SENDANOR_LOGGER_DEBUG("Cool, there's context here after all!");
	try {
		SENDANOR_LOGGER_DEBUG("Calling m_fun->Call(m_obj, 0, NULL)...");
		m_fun->Call(m_obj, 0, NULL);
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

/** Load dynamic library extension */
v8::Handle<v8::Value> js::thread::constructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("v8_openjs_extension_load_dl", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		
		if(!args[0]->IsObject()) throw RUNTIME_ERROR("argument 1 is not object");
		v8::Handle<v8::Object> obj = v8::Handle<v8::Object>::Cast(args[0]);
		if(obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		if(!args[1]->IsFunction()) throw RUNTIME_ERROR("argument 2 is not object");
		v8::Handle<v8::Function> fun = v8::Handle<v8::Function>::Cast(args[1]);
		if(fun.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		
		boost::thread* p = new boost::thread(js::thread::thread(v8::Context::GetCalling(), obj, fun));
		if(!p) throw RUNTIME_ERROR("!p");
		v8::Handle<v8::Value> ret = openjs::ptr_to_v8((int_pointer_type)p, internal_name);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.destructor */
v8::Handle<v8::Value> js::thread::destructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::destructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		delete s;
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.join */
v8::Handle<v8::Value> js::thread::join(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::join", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		{
			v8::Unlocker unlocker;
			s->join();
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.joinable */
v8::Handle<v8::Value> js::thread::joinable(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::joinable", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = s->joinable();
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.timedJoin */
v8::Handle<v8::Value> js::thread::timedJoin(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::timedJoin", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		int wait_until = args[1]->Int32Value();
		bool ret;
		{
			v8::Unlocker unlocker;
			ret = s->timed_join( boost::posix_time::milliseconds(wait_until) );
		}
		return handle_scope.Close(v8::Boolean::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.detach */
v8::Handle<v8::Value> js::thread::detach(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::detach", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		{
			v8::Unlocker unlocker;
			s->detach();
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.interrupt */
v8::Handle<v8::Value> js::thread::interrupt(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::interrupt", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		{
			v8::Unlocker unlocker;
			s->interrupt();
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.interrupt */
v8::Handle<v8::Value> js::thread::hardwareConcurrency(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::hardwareConcurrency", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		unsigned ret;
		{
			v8::Unlocker unlocker;
			ret = s->hardware_concurrency();
		}
		return handle_scope.Close(v8::Integer::New(ret));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.sleep */
v8::Handle<v8::Value> js::thread::sleep(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::sleep", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		int abs_time = args[1]->Int32Value();
		{
			v8::Unlocker unlocker;
			boost::system_time const timeout=boost::get_system_time() + boost::posix_time::milliseconds(abs_time);
			s->sleep( timeout );
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.yield */
v8::Handle<v8::Value> js::thread::yield(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::yield", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		{
			v8::Unlocker unlocker;
			s->yield();
		}
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.start_preemption */
v8::Handle<v8::Value> js::thread::start_preemption(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::thread::start_preemption", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		int every_n_ms = args[0]->Int32Value();
		v8::Locker::StartPreemption(every_n_ms);
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* thread.stop_preemption */
v8::Handle<v8::Value> js::thread::stop_preemption(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("js::thread::stop_preemption", "args[]" );
	v8::HandleScope handle_scope;
	try {
		v8::Locker::StopPreemption();
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* Class openjs::extensions::basicthread */

std::string openjs::extensions::basicthread::name() const { return "basicthread"; }
std::string openjs::extensions::basicthread::version() const { return "0.0.20100807"; }

/** Constructor */
openjs::extensions::basicthread::basicthread(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("basicthread", "");
}

/* Module initializer */
void openjs::extensions::basicthread::init(openjs::core::extension_context& a_context) {
	SENDANOR_LOGGER_FUNCTION("init", "");
	
	/* Data */
	v8::Persistent<v8::FunctionTemplate> m_function_template;
	v8::Persistent<v8::ObjectTemplate> m_template;
	v8::Persistent<v8::Object> m_obj;
	
	v8::HandleScope handle_scope;
	
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	m_template->Set(v8::String::New("constructor"), v8::FunctionTemplate::New(js::thread::constructor) );
	m_template->Set(v8::String::New("destructor"), v8::FunctionTemplate::New(js::thread::destructor) );
	m_template->Set(v8::String::New("join"), v8::FunctionTemplate::New(js::thread::join) );
	m_template->Set(v8::String::New("joinable"), v8::FunctionTemplate::New(js::thread::joinable) );
	m_template->Set(v8::String::New("timedJoin"), v8::FunctionTemplate::New(js::thread::timedJoin) );
	m_template->Set(v8::String::New("interrupt"), v8::FunctionTemplate::New(js::thread::interrupt) );
	m_template->Set(v8::String::New("detach"), v8::FunctionTemplate::New(js::thread::detach) );
	m_template->Set(v8::String::New("hardwareConcurrency"), v8::FunctionTemplate::New(js::thread::hardwareConcurrency) );
	m_template->Set(v8::String::New("sleep"), v8::FunctionTemplate::New(js::thread::sleep) );
	m_template->Set(v8::String::New("yield"), v8::FunctionTemplate::New(js::thread::yield) );
	
	m_template->Set(v8::String::New("startPreemption"), v8::FunctionTemplate::New(js::thread::start_preemption) );
	m_template->Set(v8::String::New("stopPreemption"), v8::FunctionTemplate::New(js::thread::stop_preemption) );

	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	a_context.m_v8_context->Global()->Set(v8::String::New("basicthread"), m_obj );
	
}

/* EOF */
