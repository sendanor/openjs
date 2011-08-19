/* XSP -- XML Scripting Preprosessor
 * $Id: extension_context.h 10378 2009-12-20 17:49:36Z jheusala $
 */

#ifndef SENDANOR_XSP_CORE_EXTENSION_CONTEXT_H
#define SENDANOR_XSP_CORE_EXTENSION_CONTEXT_H 1

#include <ostream>                       // for std::ostream
#include <vector>                        // for std::vector
#include <glibmm/ustring.h>              // for Glib::ustring
#include "v8.h"                          // for v8::*
#include "env.h"                         // for xsp::core::environ_type
#include <plugin/plugin.hpp>      // for plugin

namespace xsp {
  namespace core {
	
	class extension_context {
	public:
		
		/** Constructor */
		extension_context();
		
		/** Destructor */
		virtual ~extension_context();
		
		/** V8 context object */
		v8::Persistent<v8::Context> m_v8_context;
		
		/** Command line arguments */
		typedef std::vector<Glib::ustring> args_type;
		args_type m_args;
		
		/* Standard output stream */
		//std::ostream* m_out;

		/* Standard error stream */
		//std::ostream* m_err;

		/* Standard input stream */
		//std::istream* m_in;
		
		/** System environment */
		typedef xsp::core::environ_type environ_type;
		environ_type m_environ;
		
		/** Pointer to plugin loader. */
		plugin::loader* m_plugin_loader;
		
	private:
		
	};
	
  }
}

#endif
