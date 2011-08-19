/* openjs-asio -- asio Database Support -- openjs Extension
 * $Id: asio.cc 7615 2009-04-17 15:58:06Z jheusala $
 * $Date: 2009-04-17 18:58:06 +0300 (Fri, 17 Apr 2009) $
 */

#include "../../core/extension.h"          // for openjs::core::extension
#include "../../core/extension_context.h"  // for openjs::core::extension_context
#include "../../core/convert.h"            // for openjs::convert
#include "../../core/v8_util.h"            // for openjs::unwrap
#include "../../core/pointer_helpers.h"    // for internal pointers
#include "../../core/v8.h"

#include <sendanor/logger.h>             // for SENDANOR_LOGGER_FUNCTION
#include <sendanor/time.h>               // for sendanor::strftime
#include <glibmm/ustring.h>              // for Glib::ustring
#include <sendanor/exception.h>          // for sendanor::exception
#include <vector>                        // for std::vector
#include <sendanor/exec.h>               // for sendanor::exec
#include <soci/soci.h>                   // for SOCI
#include <glibmm/ustring.h>              // for Glib::ustring
#include <glibmm/exception.h>            // for Glib::Exception
#include "asio.h"                         // for openjs::extensions::asio::*

#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>


/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::asio );

namespace js {
	
	namespace io_service {
		typedef boost::asio::io_service internal_type;
		const char internal_name[] = "boost::asio::io_service*";
		
		v8::Handle<v8::Value> constructor(const v8::Arguments& args);
		v8::Handle<v8::Value> destructor(const v8::Arguments& args);
	}
	
	namespace tcp_endpoint {
		typedef boost::asio::ip::tcp::endpoint internal_type;
		const char internal_name[] = "boost::asio::ip::tcp::endpoint*";
		
		v8::Handle<v8::Value> constructor(const v8::Arguments& args);
		v8::Handle<v8::Value> destructor(const v8::Arguments& args);
	}
	
	namespace tcp_acceptor {
		typedef boost::asio::ip::tcp::acceptor internal_type;
		const char internal_name[] = "boost::asio::ip::tcp::acceptor*";
		
		v8::Handle<v8::Value> constructor(const v8::Arguments& args);
		v8::Handle<v8::Value> destructor(const v8::Arguments& args);
		v8::Handle<v8::Value> accept(const v8::Arguments& args);
	}
	
	namespace streambuf {
		typedef boost::asio::streambuf internal_type;
		const char internal_name[] = "boost::asio::streambuf*";
		
		v8::Handle<v8::Value> constructor(const v8::Arguments& args);
		v8::Handle<v8::Value> destructor(const v8::Arguments& args);
	}
	
	namespace ssl_context {
		typedef boost::asio::ssl::context internal_type;
		const char internal_name[] = "boost::asio::ssl::context*";
		
		v8::Handle<v8::Value> constructor(const v8::Arguments& args);
		v8::Handle<v8::Value> destructor(const v8::Arguments& args);
		v8::Handle<v8::Value> setOptions(const v8::Arguments& args);
		v8::Handle<v8::Value> useCertificateChainFile(const v8::Arguments& args);
		v8::Handle<v8::Value> usePrivateKeyFile(const v8::Arguments& args);
		v8::Handle<v8::Value> useTmpDhFile(const v8::Arguments& args);
	}
	
	namespace ssl_tcp_stream {
		typedef boost::asio::ssl::stream<boost::asio::ip::tcp::socket> internal_type;
		const char internal_name[] = "boost::asio::ssl::stream<boost::asio::ip::tcp::socket>*";
		
		v8::Handle<v8::Value> constructor(const v8::Arguments& args);
		v8::Handle<v8::Value> destructor(const v8::Arguments& args);
		v8::Handle<v8::Value> handshake(const v8::Arguments& args);
		v8::Handle<v8::Value> read(const v8::Arguments& args);
		v8::Handle<v8::Value> readUntil(const v8::Arguments& args);
		v8::Handle<v8::Value> write(const v8::Arguments& args);
	}
	
} // end of namespace js

/*** io_service ***/

/* io_service.constructor */
v8::Handle<v8::Value> js::io_service::constructor(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("js::io_service::constructor", "args[...]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* p = new internal_type();
		if(!p) throw RUNTIME_ERROR("!p");
		v8::Handle<v8::Value> ret = openjs::ptr_to_v8((int_pointer_type)p, internal_name);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* io_service.destructor */
v8::Handle<v8::Value> js::io_service::destructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::io_service::destructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		delete s;
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/*** tcp.endpoint ***/

/* tcp_endpoint.constructor */
v8::Handle<v8::Value> js::tcp_endpoint::constructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::tcp_endpoint::constructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		int port = args[0]->Int32Value();
		internal_type* p = new internal_type(boost::asio::ip::tcp::v4(), (short unsigned int)port);
		if(!p) throw RUNTIME_ERROR("!p");
		v8::Handle<v8::Value> ret = openjs::ptr_to_v8((int_pointer_type)p, internal_name);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* tcp_endpoint.destructor */
v8::Handle<v8::Value> js::tcp_endpoint::destructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::tcp_endpoint::destructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		delete s;
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/*** tcp.acceptor ***/

/* tcp_acceptor.constuctor */
v8::Handle<v8::Value> js::tcp_acceptor::constructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::tcp_acceptor::constructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		io_service::internal_type* io = (io_service::internal_type*)openjs::ptr_from_v8(args[0], io_service::internal_name);
		tcp_endpoint::internal_type* e = (tcp_endpoint::internal_type*)openjs::ptr_from_v8(args[1], tcp_endpoint::internal_name);
		internal_type* p = new internal_type(*io, *e);
		if(!p) throw RUNTIME_ERROR("!p");
		v8::Handle<v8::Value> ret = openjs::ptr_to_v8((int_pointer_type)p, internal_name);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* tcp_acceptor.destructor */
v8::Handle<v8::Value> js::tcp_acceptor::destructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::acceptor::destructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		delete s;
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* tcp.acceptor.accept */
v8::Handle<v8::Value> js::tcp_acceptor::accept(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::tcp_acceptor::accept", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		ssl_tcp_stream::internal_type* sock = (ssl_tcp_stream::internal_type*)openjs::ptr_from_v8(args[1], ssl_tcp_stream::internal_name);
		
		{
			v8::Unlocker unlocker;
			s->accept(sock->lowest_layer());
		}
		
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


/*** ssl.context ***/

/* ssl.context.constuctor
 * FIXME: Implement methods
 */
v8::Handle<v8::Value> js::ssl_context::constructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_context::constructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		io_service::internal_type* io = (io_service::internal_type*)openjs::ptr_from_v8(args[0], io_service::internal_name);
		internal_type* p = new internal_type(*io, boost::asio::ssl::context::sslv23);
		if(!p) throw RUNTIME_ERROR("!p");
		v8::Handle<v8::Value> ret = openjs::ptr_to_v8((int_pointer_type)p, internal_name);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.context.destructor */
v8::Handle<v8::Value> js::ssl_context::destructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_context::destructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		delete s;
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.context.setOptions */
v8::Handle<v8::Value> js::ssl_context::setOptions(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_context::setOptions", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		s->set_options( boost::asio::ssl::context::default_workarounds | boost::asio::ssl::context::no_sslv2 | boost::asio::ssl::context::single_dh_use );
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.context.useCertificateChainFile */
v8::Handle<v8::Value> js::ssl_context::useCertificateChainFile(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_context::useCertificateChainFile", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		const std::string file = openjs::convert<std::string>(args[1]);
		s->use_certificate_chain_file( file );
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.context.usePrivateKeyFile */
v8::Handle<v8::Value> js::ssl_context::usePrivateKeyFile(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_context::usePrivateKeyFile", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		const std::string file = openjs::convert<std::string>(args[1]);
		s->use_private_key_file( file, boost::asio::ssl::context::pem );
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.context.useTmpDhFile */
v8::Handle<v8::Value> js::ssl_context::useTmpDhFile(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_context::useTmpDhFile ", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		const std::string file = openjs::convert<std::string>(args[1]);
		s->use_tmp_dh_file( file );
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/*** ssl.tcp.stream ***/

/* ssl.tcp.stream.constuctor */
v8::Handle<v8::Value> js::ssl_tcp_stream::constructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_tcp_stream::constructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		io_service::internal_type* io = (io_service::internal_type*)openjs::ptr_from_v8(args[0], io_service::internal_name);
		ssl_context::internal_type* context = (ssl_context::internal_type*)openjs::ptr_from_v8(args[1], ssl_context::internal_name);
		internal_type* p = new internal_type(*io, *context);
		if(!p) throw RUNTIME_ERROR("!p");
		v8::Handle<v8::Value> ret = openjs::ptr_to_v8((int_pointer_type)p, internal_name);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.tcp.stream.destructor */
v8::Handle<v8::Value> js::ssl_tcp_stream::destructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_tcp_stream::destructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		delete s;
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.tcp.stream.handshake */
v8::Handle<v8::Value> js::ssl_tcp_stream::handshake(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_tcp_stream::handshake", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);

		{
			v8::Unlocker unlocker;
			s->handshake(boost::asio::ssl::stream_base::server);
		}
		
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* */
struct transfer_at_most {
	transfer_at_most(std::size_t limit) : m_limit(limit) { }
	std::size_t operator()(const boost::system::error_code&/* error*/, std::size_t bytes_transferred) {
		return (bytes_transferred >= m_limit) ? 0 : m_limit-bytes_transferred;
	}
private:
	std::size_t m_limit;
};

/* ssl.tcp.stream.read */
v8::Handle<v8::Value> js::ssl_tcp_stream::read(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_tcp_stream::read", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		streambuf::internal_type* sbuf = (streambuf::internal_type*)openjs::ptr_from_v8(args[1], streambuf::internal_name);
		std::size_t max_bytes = args[2]->Uint32Value();
		
		std::string data;
		{
			v8::Unlocker unlocker;
			
			/*
			boost::asio::streambuf::mutable_buffers_type bufs = sbuf->prepare(max_bytes);
			size_t bytes = boost::asio::read(*s, bufs, boost::asio::transfer_all());
			sbuf->commit(bytes);
			std::istream is(sbuf);
			std::vector<char> buffer(bytes, 0);
			is.read( &(buffer[0]), bytes );
			data = std::string(&(buffer[0]), bytes);
			*/
			
			/*
			size_t bytes = boost::asio::read(*s, *sbuf, transfer_at_most(max_bytes));
			if(bytes != 0) {
				std::istream is(sbuf);
				std::vector<char> buffer(bytes, 0);
				is.read( &(buffer[0]), bytes );
				data = std::string(&(buffer[0]), bytes);
			}
			*/
			
			std::size_t bytes_readed = sbuf->size();
			while(bytes_readed < max_bytes) {
				boost::asio::read(*s, *sbuf, transfer_at_most(max_bytes-bytes_readed));
				bytes_readed = sbuf->size();
			}
			
			std::istream is(sbuf);
			std::vector<char> buffer(max_bytes, 0);
			is.read( &(buffer[0]), max_bytes );
			data = std::string(&(buffer[0]), max_bytes);
			
		}
		
		return handle_scope.Close(openjs::convert<v8::Handle<v8::Value> >(data));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.tcp.stream.readUntil */
v8::Handle<v8::Value> js::ssl_tcp_stream::readUntil(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_tcp_stream::readUntil", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		streambuf::internal_type* sbuf = (streambuf::internal_type*)openjs::ptr_from_v8(args[1], streambuf::internal_name);
		const std::string until_str = openjs::convert<std::string>(args[2]);
		
		std::string str;
		{
			v8::Unlocker unlocker;
			std::size_t bytes = boost::asio::read_until(*s, *sbuf, until_str);
			if(bytes != 0) {
				std::istream is(sbuf);
				std::vector<char> buffer(bytes, 0);
				is.read( &(buffer[0]), bytes );
				str = std::string(&(buffer[0]), bytes);
			}
		}
		return handle_scope.Close(openjs::convert<v8::Handle<v8::Value> >(str));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* ssl.tcp.stream.write */
v8::Handle<v8::Value> js::ssl_tcp_stream::write(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::ssl_tcp_stream::write", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		const std::string data = openjs::convert<std::string>(args[1]);
		bool had_errors = true;
		{
			v8::Unlocker unlocker;
			boost::system::error_code error;
			boost::asio::write(*s, boost::asio::buffer(data), boost::asio::transfer_all(), error);
			had_errors = error;
		}
		return handle_scope.Close(v8::Boolean::New(had_errors));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** streambuf **/

/* streambuf.constructor */
v8::Handle<v8::Value> js::streambuf::constructor(const v8::Arguments&/* args*/) {
	SENDANOR_LOGGER_FUNCTION("js::streambuf::constructor", "args[...]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* p = new internal_type();
		if(!p) throw RUNTIME_ERROR("!p");
		v8::Handle<v8::Value> ret = openjs::ptr_to_v8((int_pointer_type)p, internal_name);
		return handle_scope.Close(ret);
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/* streambuf.destructor */
v8::Handle<v8::Value> js::streambuf::destructor(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::streambuf::destructor", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		internal_type* s = (internal_type*)openjs::ptr_from_v8(args[0], internal_name);
		delete s;
		return handle_scope.Close(v8::Undefined());
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/*** OpenJS extension asio ***/

std::string openjs::extensions::asio::name() const { return "asio"; }
std::string openjs::extensions::asio::version() const { return "0.0.20100806"; }

/** Constructor */
openjs::extensions::asio::asio(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("asio", "");
}

/* Module initializer */
void openjs::extensions::asio::init(openjs::core::extension_context& a_context) {

	/* Data */
	static v8::Persistent<v8::FunctionTemplate> m_function_template;
	static v8::Persistent<v8::ObjectTemplate> m_template;
	static v8::Persistent<v8::Object> m_obj;
		
	SENDANOR_LOGGER_FUNCTION("init", "");
	v8::HandleScope handle_scope;
	
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	m_template->Set(v8::String::New("io_service_constructor"), v8::FunctionTemplate::New(js::io_service::constructor) );
	m_template->Set(v8::String::New("io_service_destructor"), v8::FunctionTemplate::New(js::io_service::destructor) );
	m_template->Set(v8::String::New("tcp_endpoint_constructor"), v8::FunctionTemplate::New(js::tcp_endpoint::constructor) );
	m_template->Set(v8::String::New("tcp_endpoint_destructor"), v8::FunctionTemplate::New(js::tcp_endpoint::destructor) );
	m_template->Set(v8::String::New("tcp_acceptor_constructor"), v8::FunctionTemplate::New(js::tcp_acceptor::constructor) );
	m_template->Set(v8::String::New("tcp_acceptor_destructor"), v8::FunctionTemplate::New(js::tcp_acceptor::destructor) );
	m_template->Set(v8::String::New("tcp_acceptor_accept"), v8::FunctionTemplate::New(js::tcp_acceptor::accept) );
	m_template->Set(v8::String::New("ssl_context_constructor"), v8::FunctionTemplate::New(js::ssl_context::constructor) );
	m_template->Set(v8::String::New("ssl_context_destructor"), v8::FunctionTemplate::New(js::ssl_context::destructor) );
	m_template->Set(v8::String::New("ssl_context_setOptions"), v8::FunctionTemplate::New(js::ssl_context::setOptions) );
	m_template->Set(v8::String::New("ssl_context_useCertificateChainFile"), v8::FunctionTemplate::New(js::ssl_context::useCertificateChainFile) );
	m_template->Set(v8::String::New("ssl_context_usePrivateKeyFile"), v8::FunctionTemplate::New(js::ssl_context::usePrivateKeyFile) );
	m_template->Set(v8::String::New("ssl_context_useTmpDhFile"), v8::FunctionTemplate::New(js::ssl_context::useTmpDhFile) );
	m_template->Set(v8::String::New("ssl_tcp_stream_constructor"), v8::FunctionTemplate::New(js::ssl_tcp_stream::constructor) );
	m_template->Set(v8::String::New("ssl_tcp_stream_destructor"), v8::FunctionTemplate::New(js::ssl_tcp_stream::destructor) );
	m_template->Set(v8::String::New("ssl_tcp_stream_handshake"), v8::FunctionTemplate::New(js::ssl_tcp_stream::handshake) );
	m_template->Set(v8::String::New("ssl_tcp_stream_read"), v8::FunctionTemplate::New(js::ssl_tcp_stream::read) );
	m_template->Set(v8::String::New("ssl_tcp_stream_read_until"), v8::FunctionTemplate::New(js::ssl_tcp_stream::readUntil) );
	m_template->Set(v8::String::New("ssl_tcp_stream_write"), v8::FunctionTemplate::New(js::ssl_tcp_stream::write) );
	m_template->Set(v8::String::New("streambuf_constructor"), v8::FunctionTemplate::New(js::streambuf::constructor) );
	m_template->Set(v8::String::New("streambuf_destructor"), v8::FunctionTemplate::New(js::streambuf::destructor) );

	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	a_context.m_v8_context->Global()->Set(v8::String::New("asio"), m_obj );

}

/* EOF */
