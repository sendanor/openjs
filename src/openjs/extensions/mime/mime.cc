/* openjs-mime -- mime Database Support -- openjs Extension
 * $Id: mime.cc 7615 2009-04-17 15:58:06Z jheusala $
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
#include <gmime/gmime-encodings.h>                 // for gmime
#include "mime.h"                         // for openjs::extensions::mime::*

/* Register this module */
OPENJS_REGISTER_EXTENSION( openjs::extensions::mime );

namespace js {
	v8::Handle<v8::Value> decode_quoted_printable(const v8::Arguments& args);
} // end of namespace js

/* ssl.tcp.stream.read */
v8::Handle<v8::Value> js::decode_quoted_printable(const v8::Arguments& args) {
	SENDANOR_LOGGER_FUNCTION("js::decode_quoted_printable", "args[" << args.Length() << "]" );
	v8::HandleScope handle_scope;
	try {
		std::string input_data = openjs::convert<std::string>(args[0]);
		
		std::string data;
		{
			v8::Unlocker unlocker;
			
			std::vector<unsigned char> input_buffer(input_data.begin(), input_data.end());
			std::vector<unsigned char> output_buffer(input_data.size(), 0);
			
			int state = 0;
			guint32 save = 0;
			size_t bytes = g_mime_encoding_quoted_decode_step(
			                   &input_buffer[0], input_buffer.size(), &output_buffer[0], &state, &save);
			if(bytes != 0) data = std::string(output_buffer.begin(), output_buffer.begin()+bytes);
		}
		
		return handle_scope.Close(openjs::convert<v8::Handle<v8::Value> >(data));
	} catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/*** OpenJS extension mime ***/

std::string openjs::extensions::mime::name() const { return "mime"; }
std::string openjs::extensions::mime::version() const { return "0.0.20100814"; }

/** Constructor */
openjs::extensions::mime::mime(const Settings& a_settings)
 : extension(a_settings) {
	SENDANOR_LOGGER_FUNCTION("mime", "");
}

/* Module initializer */
void openjs::extensions::mime::init(openjs::core::extension_context& a_context) {

	/* Data */
	static v8::Persistent<v8::FunctionTemplate> m_function_template;
	static v8::Persistent<v8::ObjectTemplate> m_template;
	static v8::Persistent<v8::Object> m_obj;
		
	SENDANOR_LOGGER_FUNCTION("init", "");
	v8::HandleScope handle_scope;
	
	v8_init_object_template(m_function_template, m_template);
	if(m_template.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	m_template->Set(v8::String::New("decodeQP"), v8::FunctionTemplate::New(js::decode_quoted_printable) );

	v8_init_object(m_function_template, m_obj);
	if(m_obj.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	
	if(a_context.m_v8_context.IsEmpty()) throw RUNTIME_ERROR("IsEmpty()");
	a_context.m_v8_context->Global()->Set(v8::String::New("mime"), m_obj );

}

/* EOF */
