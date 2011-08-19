/* OPENJS -- XML Scripting Preprosessor
 * $Id: extension_context.h 10465 2009-12-31 18:18:53Z jheusala $
 */

#ifndef SENDANOR_OPENJS_CORE_EXTENSION_CONTEXT_H
#define SENDANOR_OPENJS_CORE_EXTENSION_CONTEXT_H 1

#include <ostream>                       // for std::ostream
#include <vector>                        // for std::vector
#include <glibmm/ustring.h>              // for Glib::ustring
#include "v8.h"                          // for v8::*
#include "env.h"                         // for openjs::core::environ_type
#include "Modular/Modular.h"             // for Modular::ModuleRegister
//#include <plugin/plugin.hpp>      // for plugin
#include "config.h"                      // for openjs::config

namespace openjs {
  namespace core {
	
	class extension;
	
	class extension_context {
	public:
		
		/** Constructor */
		inline extension_context();
		
		/** Destructor */
		inline virtual ~extension_context();
		
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
		typedef openjs::core::environ_type environ_type;
		environ_type m_environ;
		
		/** Pointer to extension register. */
		Modular::ModuleRegister<openjs::core::extension>* m_register;
		
		openjs::configuration* m_config;
		
	private:
		
	};
	
	typedef Modular::LoadedModule<openjs::core::extension> LoadedExtension;
	
  }
}


/* The Source Implementation */

/* Constructor */
inline openjs::core::extension_context::extension_context() 
 : m_config(0)
/* : m_out(0), m_err(0), m_in(0) */
/*: m_plugin_loader(0)*/ {
}

/* Destructor */
inline openjs::core::extension_context::~extension_context() { }

#endif
/* EOF */
