/* openjs basicstream Extensions
 * $Id: basicstream.cc 10217 2009-11-18 11:32:10Z jheusala $
 */

#include "../../core/convert.h"            // for openjs::convert
#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/v8_util.h"            // for openjs::unwrap
#include "../../core/pointer_helpers.h"    // for openjs::ptr_to_v8 etc

#include <sendanor/logger.h>             // for SENDANOR_LOGGER_FUNCTION
#include <glibmm/ustring.h>              // for Glib::ustring
#include <sendanor/exception.h>          // for sendanor::exception
#include <boost/filesystem.hpp>          // for boost::stream
#include <boost/filesystem/fstream.hpp>  // for boost::stream::ifstream
namespace fs = boost::filesystem;
#include <algorithm>                     // for std::fill
#include <ostream>              // for std::ostream
#include <istream>              // for std::istream
#include "basicstream.h"                      // for openjs::extensions::basicstream::*
#include "basicstream_v8.h"                      // for openjs::extensions::do_*

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::basicstream );

std::string openjs::extensions::basicstream::name() const { return "basicstream"; }
std::string openjs::extensions::basicstream::version() const { return "0.0.20100804"; }

/* StringStream.close */
v8::Handle<v8::Value> do_v8_sstream_close(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_sstream_close", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		
		v8::Handle<v8::Object> pointer_obj = v8::Handle<v8::Object>::Cast(internal_obj->Get(v8::String::New("pointer")));
		if(!pointer_obj->Has(v8::String::New("type"))) throw RUNTIME_ERROR("!pointer_obj.Has('type')");
		std::string type = openjs::convert<std::string>( pointer_obj->Get(v8::String::New("type")) );
		
		if(type == "std::iostream*") {
			std::stringstream* stream = (std::stringstream*)openjs::ptr_from_v8(pointer_obj, "std::iostream*");
			internal_obj->Delete(v8::String::New("pointer"));
			delete stream;
		} else if(type == "std::istream*") {
			std::istringstream* istream = (std::istringstream*)openjs::ptr_from_v8(pointer_obj, "std::istream*");
			internal_obj->Delete(v8::String::New("pointer"));
			delete istream;
		} else if(type == "std::ostream*") {
			std::ostringstream* ostream = (std::ostringstream*)openjs::ptr_from_v8(pointer_obj, "std::ostream*");
			internal_obj->Delete(v8::String::New("pointer"));
			delete ostream;
		} else {
			throw RUNTIME_ERROR(std::string("unknown pointer type: ") + type);
		}
		
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* StringStream.str */
v8::Handle<v8::Value> do_v8_sstream_str(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_sstream_str", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		// Argument 1 -- stream
		bool use_value = false;
		std::string value;
		if(0<args.Length()) {
			value = openjs::convert<std::string>(args[0]);
			use_value = true;
		}
		
		// Internal object
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		
		v8::Handle<v8::Object> pointer_obj = v8::Handle<v8::Object>::Cast(internal_obj->Get(v8::String::New("pointer")));
		if(!pointer_obj->Has(v8::String::New("type"))) throw RUNTIME_ERROR("!pointer_obj.Has('type')");
		std::string type = openjs::convert<std::string>( pointer_obj->Get(v8::String::New("type")) );
		
		bool use_ret = false;
		std::string ret;
		if(type == "std::iostream*") {
			std::stringstream* stream = (std::stringstream*)openjs::ptr_from_v8(pointer_obj, "std::iostream*");
			if(use_value) { stream->str(value);
			} else {
				ret = stream->str();
				use_ret = true;
			}
		} else if(type == "std::istream*") {
			std::istringstream* stream = (std::istringstream*)openjs::ptr_from_v8(pointer_obj, "std::istream*");
			if(use_value) { stream->str(value);
			} else {
				ret = stream->str();
				use_ret = true;
			}
		} else if(type == "std::ostream*") {
			std::ostringstream* stream = (std::ostringstream*)openjs::ptr_from_v8(pointer_obj, "std::ostream*");
			if(use_value) { stream->str(value);
			} else {
				ret = stream->str();
				use_ret = true;
			}
		} else {
			throw RUNTIME_ERROR(std::string("unknown pointer type: ") + type);
		}
		
		if(use_ret) return handle_scope.Close( openjs::convert<v8::Handle<v8::Value> >(ret)->ToString() );
		return handle_scope.Close( v8::Undefined() );
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/* V8 filesystem stream init function
 */
v8::Handle<v8::Value> do_v8_sstream_init(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_filesystem_stream_init", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		
		// Initial value argument
		std::string initial_value;
		
		// Argument 1 -- stream
		v8::Handle<v8::Object> obj = v8::Handle<v8::Object>::Cast(args[0]);
		if(obj.IsEmpty()) throw RUNTIME_ERROR("obj is empty");
		
		// Argument 2 -- build_args
		v8::Handle<v8::Object> build_args = v8::Handle<v8::Object>::Cast(args[1]);
		if(!build_args.IsEmpty()) {
			if(build_args->Has(v8::String::New("str"))) {
				initial_value = openjs::convert<std::string>(build_args->Get(v8::String::New("str")));
			}
		}
		
		// 
		const Glib::ustring mode = openjs::convert<Glib::ustring>(obj->Get(v8::String::New("mode")));
		SENDANOR_LOGGER_DEBUG( "mode=`" << mode );
		
		const bool mode_r = mode.find_first_of("r")!=Glib::ustring::npos;
		const bool mode_w = mode.find_first_of("w")!=Glib::ustring::npos;
		SENDANOR_LOGGER_DEBUG( "mode_r=" << mode_r << ", mode_w=" << mode_w );
		
		if(mode_r && mode_w) {
			//sios = new fs::fstream(file);
			std::iostream* sio = new std::stringstream(initial_value);
			if(!sio) throw RUNTIME_ERROR("!sio");
			obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_iostream_internal(sio) );
		} else if(mode_r) {
			//sios = new fs::ifstream(file);
			std::istream* sin = new std::istringstream(initial_value);
			if(!sin) throw RUNTIME_ERROR("!sin");
			obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_istream_internal(sin) );
		} else if(mode_w) {
			//sios = new fs::ofstream(file);
			std::ostream* sout = new std::ostringstream(initial_value);
			if(!sout) throw RUNTIME_ERROR("!sout");
			obj->Set(v8::String::New("internal"), openjs::extensions::do_v8_ostream_internal(sout) );
		} else {
			SENDANOR_LOGGER_WARNING( "file stream init used without correct mode flag (mode=`" << mode << "')" );
			return handle_scope.Close(openjs::js_throw_exception( "No correct mode setting for file stream" ));
		}
		
		obj->Set(v8::String::New("close"), v8::FunctionTemplate::New(do_v8_sstream_close)->GetFunction() );
		obj->Set(v8::String::New("str"), v8::FunctionTemplate::New(do_v8_sstream_str)->GetFunction() );
		return handle_scope.Close( v8::Undefined() );

	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}







/** Constructor */
openjs::extensions::basicstream::basicstream(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("basicstream", "");
}

/* Get internal v8 string stream object */
v8::Handle<v8::Value> openjs::extensions::do_v8_iostream_internal(std::iostream* is) {
	SENDANOR_LOGGER_FUNCTION("do_v8_iostream_internal", "is=" << is);
	v8::HandleScope handle_scope;
	try {
		v8::Handle<v8::FunctionTemplate> internal_function_template;
		v8::Handle<v8::ObjectTemplate> internal_object_template;
		v8::Handle<v8::Object> internal_obj;
		v8_init_object_template(internal_function_template, internal_object_template);
		if(internal_object_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		//internal_object_template->SetInternalFieldCount(1);
		v8_init_object(internal_function_template, internal_obj);
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		internal_obj->Set(v8::String::New("pointer"), openjs::ptr_to_v8((int_pointer_type)is, "std::iostream*") );
		return handle_scope.Close( v8::Handle<v8::Value>(internal_obj) );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* Get internal v8 string stream object */
v8::Handle<v8::Value> openjs::extensions::do_v8_istream_internal(std::istream* is) {
	SENDANOR_LOGGER_FUNCTION("do_v8_istream_internal", "is=" << is);
	v8::HandleScope handle_scope;
	try {
		v8::Handle<v8::FunctionTemplate> internal_function_template;
		v8::Handle<v8::ObjectTemplate> internal_object_template;
		v8::Handle<v8::Object> internal_obj;
		v8_init_object_template(internal_function_template, internal_object_template);
		if(internal_object_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		//internal_object_template->SetInternalFieldCount(1);
		v8_init_object(internal_function_template, internal_obj);
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		internal_obj->Set(v8::String::New("pointer"), openjs::ptr_to_v8((int_pointer_type)is, "std::istream*") );
		return handle_scope.Close( v8::Handle<v8::Value>(internal_obj) );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* Get internal v8 string stream object */
v8::Handle<v8::Value> openjs::extensions::do_v8_ostream_internal(std::ostream* is) {
	SENDANOR_LOGGER_FUNCTION("do_v8_ostream_internal", "is=" << is);
	v8::HandleScope handle_scope;
	try {
		v8::Handle<v8::FunctionTemplate> internal_function_template;
		v8::Handle<v8::ObjectTemplate> internal_object_template;
		v8::Handle<v8::Object> internal_obj;
		v8_init_object_template(internal_function_template, internal_object_template);
		if(internal_object_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		//internal_object_template->SetInternalFieldCount(1);
		v8_init_object(internal_function_template, internal_obj);
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
		internal_obj->Set(v8::String::New("pointer"), openjs::ptr_to_v8((int_pointer_type)is, "std::ostream*") );
		return handle_scope.Close( v8::Handle<v8::Value>(internal_obj) );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** Stream type settings */
namespace mode_type {
	typedef int flag_t;
	const flag_t read_flag = 1;
	const flag_t write_flag = 2;
	const flag_t close_flag = 4;
};

/* V8 wrapper for open function */
// stream_t was fs::ifstream
v8::Handle<v8::Value> do_v8_s_read(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_read", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		int size = 1;
		if(0<args.Length()) {
			const std::string size_str = openjs::convert<std::string>(args[0]);
			size = boost::lexical_cast<int>(size_str);
		}
		
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		
		////std::ios* sios = openjs::unwrap<std::ios>(internal_obj, 0);
		//std::ios* sios = (std::ios*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::ios*");
		//if(!sios) throw RUNTIME_ERROR("stream is not set!");
		//std::istream* sin = dynamic_cast<std::istream*>(sios);
		std::istream* sin = (std::istream*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::istream*");
		if(!sin) throw RUNTIME_ERROR("stream is not set!");
		
		//std::istream* file = openjs::unwrap<std::istream>(args.Holder(), 0);
		//if(!file) throw RUNTIME_ERROR("file is not set!");
		
		std::string strbuf;
		{
			v8::Unlocker unlocker;
			char buf[size];
			std::fill(buf, buf+size, 0);
			sin->read(buf, size);
			size = sin->gcount();
			SENDANOR_LOGGER_DEBUG( "readed " << size << " bytes, buf=`" << buf << "'" );
			strbuf = std::string(buf, size);
		}
		
		//SENDANOR_LOGGER_DEBUG( "strbuf=`" << strbuf << "'" );
		//Glib::ustring ustrbuf = openjs::convert<Glib::ustring>(strbuf);
		//SENDANOR_LOGGER_DEBUG( "ustrbuf=`" << ustrbuf << "'" );
		return handle_scope.Close( openjs::convert<v8::Handle<v8::Value> >(strbuf)->ToString() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* Reads data until EOF from a stream */
v8::Handle<v8::Value> do_v8_s_read_until_eof(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_read_until_eof", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		
		////std::ios* sios = openjs::unwrap<std::ios>(internal_obj, 0);
		//std::ios* sios = (std::ios*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::ios*");
		//if(!sios) throw RUNTIME_ERROR("stream is not set!");
		//std::istream* sin = dynamic_cast<std::istream*>(sios);
		std::istream* sin = (std::istream*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::istream*");
		if(!sin) throw RUNTIME_ERROR("stream is not set!");
		
		//std::istream* file = openjs::unwrap<std::istream>(args.Holder(), 0);
		//if(!file) throw RUNTIME_ERROR("file is not set!");
		
		std::string strbuf;
		{
			v8::Unlocker unlocker;
			
			const std::size_t buf_size = 1024;
			char buf[buf_size];
			//std::fill(buf, buf+buf_size, 0);
			std::size_t size = 0;
			do {
				sin->read(buf, buf_size);
				size = sin->gcount();
				SENDANOR_LOGGER_DEBUG( "readed " << size << " bytes, buf=`" << buf << "'" );
				if(size != 0) strbuf += std::string(buf, size);
			} while(buf_size == size);
		}
		
		//SENDANOR_LOGGER_DEBUG( "strbuf=`" << strbuf << "'" );
		//Glib::ustring ustrbuf = openjs::convert<Glib::ustring>(strbuf);
		//SENDANOR_LOGGER_DEBUG( "ustrbuf=`" << ustrbuf << "'" );
		return handle_scope.Close( openjs::convert<v8::Handle<v8::Value> >(strbuf)->ToString() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* V8 wrapper for open function
 * FIXME: Delimiter cannot be multibyte char or a string
 */
// stream_t was fs::ifstream
v8::Handle<v8::Value> do_v8_s_getline(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_getline", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		const std::string delim_str = (0<args.Length()) ? openjs::convert<std::string>(args[0]) : "\n";
		if(delim_str.size() != 1) throw RUNTIME_ERROR( "The delimiting string (" + delim_str + " is not a single character.");
		const char delim = delim_str[0];
		
		const bool discard_delimiter = (1<args.Length()) ? args[1]->ToBoolean()->Value() : true;
		
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");

		////std::ios* sios = openjs::unwrap<std::ios>(internal_obj, 0);
		//std::ios* sios = (std::ios*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::ios*");
		//if(!sios) throw RUNTIME_ERROR("stream is not set!");
		//std::istream* sin = dynamic_cast<std::istream*>(sios);
		std::istream* sin = (std::istream*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::istream*");
		if(!sin) throw RUNTIME_ERROR("stream is not set!");
		
		std::string strbuf;
		{
			v8::Unlocker unlocker;
			if(!std::getline(*sin, strbuf, delim)) {
				if(strbuf.empty()) return handle_scope.Close( v8::Undefined() );
			} else {
				if(!discard_delimiter) strbuf += delim;
			}
			
			SENDANOR_LOGGER_DEBUG( "strbuf=`" << strbuf << "'" );
		}
		
		//Glib::ustring ustrbuf = openjs::convert<Glib::ustring>(strbuf);
		//SENDANOR_LOGGER_DEBUG( "ustrbuf=`" << ustrbuf << "'" );
		return handle_scope.Close( openjs::convert<v8::Handle<v8::Value> >(strbuf)->ToString() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** V8 wrapper for real write function */
v8::Handle<v8::Value> do_v8_s_write(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_s_write", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		SENDANOR_LOGGER_DEBUG("part 1");
		const std::string value = openjs::convert<std::string>(args[0]);
		//SENDANOR_LOGGER_DEBUG("value = '" << value << "'");
		SENDANOR_LOGGER_DEBUG("part 2");
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		SENDANOR_LOGGER_DEBUG("part 3");
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		SENDANOR_LOGGER_DEBUG("part 4");
		std::ostream* sout = (std::ostream*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::ostream*");
		if(!sout) throw RUNTIME_ERROR("stream is not set!");
		SENDANOR_LOGGER_DEBUG("part 8");
		{
			v8::Unlocker unlocker;
			(*sout).write(value.c_str(), value.size());
		}
		SENDANOR_LOGGER_DEBUG("part 9");
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		SENDANOR_LOGGER_DEBUG("part 10");
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** V8 flush function */
v8::Handle<v8::Value> do_v8_s_flush(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_s_flush", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		
		////std::ios* sios = openjs::unwrap<std::ios>(internal_obj, 0);
		//std::ios* sios = (std::ios*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::ios*");
		//if(!sios) throw RUNTIME_ERROR("stream is not set!");
		//std::ostream* sout = dynamic_cast<std::ostream*>(sios);
		std::ostream* sout = (std::ostream*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::ostream*");
		if(!sout) throw RUNTIME_ERROR("stream is not set!");
		{
			v8::Unlocker unlocker;
			(*sout).flush();
		}
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/** V8 sync function */
v8::Handle<v8::Value> do_v8_s_sync(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("do_v8_s_sync", "args[" << args.Length() << "]");
	v8::HandleScope handle_scope;
	try {
		v8::Handle<v8::Object> internal_obj = v8::Handle<v8::Object>::Cast(args.Holder()->Get(v8::String::New("internal")));
		if(internal_obj.IsEmpty()) throw RUNTIME_ERROR("internal_obj is not set!");
		std::istream* s = (std::istream*)openjs::ptr_from_v8(internal_obj->Get(v8::String::New("pointer")), "std::istream*");
		if(!s) throw RUNTIME_ERROR("stream is not set!");
		{
			v8::Unlocker unlocker;
			(*s).sync();
		}
		return handle_scope.Close( v8::Undefined() );
	} catch(...) {
		return handle_scope.Close( openjs::cxx_to_v8_exception_handler() );
	}
}

/* Module initializer */
void openjs::extensions::basicstream::init(openjs::core::extension_context& a_context) {
	SENDANOR_LOGGER_FUNCTION("init", "");
		
	/* Data */
	static v8::Persistent<v8::FunctionTemplate> m_function_template;
	static v8::Persistent<v8::ObjectTemplate> m_template;
	static v8::Persistent<v8::Object> m_obj;
	
	v8::HandleScope handle_scope;
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	//do_init_template();
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	//m_template->SetInternalFieldCount(1); // for ostream pointer
	m_template->Set(v8::String::New("read"), v8::FunctionTemplate::New(do_v8_s_read) );
	m_template->Set(v8::String::New("readUntilEOF"), v8::FunctionTemplate::New(do_v8_s_read_until_eof) );
	m_template->Set(v8::String::New("write"), v8::FunctionTemplate::New(do_v8_s_write) );
	m_template->Set(v8::String::New("flush"), v8::FunctionTemplate::New(do_v8_s_flush) );
	m_template->Set(v8::String::New("sync"), v8::FunctionTemplate::New(do_v8_s_sync) );
	m_template->Set(v8::String::New("getLine"), v8::FunctionTemplate::New(do_v8_s_getline) );
	
	m_template->Set(v8::String::New("StringStreamBuilder"), v8::FunctionTemplate::New(do_v8_sstream_init) );
	
	//m_template->Set(v8::String::New("close"), v8::FunctionTemplate::New(do_v8_s_close) );
	//m_template->Set(v8::String::New("create"), v8::FunctionTemplate::New(v8_stream_constructor) );
	
	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	a_context.m_v8_context->Global()->Set(v8::String::New("BasicStream"), m_obj );
	
}

/* EOF */
