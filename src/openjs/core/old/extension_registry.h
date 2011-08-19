/* XSP -- XML Scripting Preprosessor
 * $Id$
 * XSP Extension Registry
 */

#ifndef SENDANOR_XSP_CORE_EXTENSION_REGISTRY_H
#define SENDANOR_XSP_CORE_EXTENSION_REGISTRY_H 1

#include <dlfcn.h>              // for dlopen
#include <vector>
#include "extension.h"
#include "extension_context.h"
#include <sendanor/exception.h> // for RUNTIME_ERROR

namespace xsp {
  namespace core {
	
	/** Global extension registry */
	class extension_registry {
	public:
		
		/** Destructor */
		virtual ~extension_registry();
		
		/** Initialize uninitialized extensions */
		//void init(extension_context& extcontext);
		
		/** Load extension into the registry */
		static std::size_t load(extension* ext);
		
		/** Unload extension from the registry */
		static void unload(const std::size_t id);
		
		/** Get extension by id */
		static extension* get(const std::size_t id);
		
		/** Get latest extension id */
		static std::size_t size();
		
	private:
		
		/** Get extension registry */
		static extension_registry& self();
		
		/** Constructor */
		extension_registry();
		
		/** All initialized extensions */
		std::vector<extension*> m_extensions;
		
	}; // class extension_registry
	
	/** Scope-based extension loader */
	template<class extension_type>
	class scoped_extension_loader {
	public:
		
		/** */
		scoped_extension_loader(const settings& s) : m_lib_id(0) {
			extension* lib = new extension_type(s);
			if(!lib) throw RUNTIME_ERROR("!lib");
			try {
				m_lib_id = extension_registry::load(lib);
			} catch(...) {
				delete lib;
				throw;
			}
		}
		
		/** */
		~scoped_extension_loader() {
			extension_registry::unload(m_lib_id);
		}
		
	private:
		
		std::size_t m_lib_id;
		
	}; // class scoped_extension_loader

  } // namespace xsp::core
} // namespace xsp

#endif
