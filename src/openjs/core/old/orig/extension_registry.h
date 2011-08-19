/* XSP -- XML Scripting Preprosessor
 * $Id: extension_registry.h 10385 2009-12-22 08:18:01Z jheusala $
 * XSP Extension Registry
 */

#ifndef SENDANOR_XSP_CORE_EXTENSION_REGISTRY_H
#define SENDANOR_XSP_CORE_EXTENSION_REGISTRY_H 1

#include <vector>
#include "extension.h"
#include "extension_context.h"

namespace xsp {
  namespace core {
	
	/** Global extension registry */
	class extension_registry {
	public:
		
		/** Get extension registry */
		static extension_registry& ref();
		
		/** Destructor */
		virtual ~extension_registry();
		
		/** Initialize uninitialized extensions */
		void init(extension_context& extcontext);
		
	private:
		
		/** Constructor */
		extension_registry();
		
		/** All initialized extensions */
		std::vector<extension*> m_extensions;
		
	};
	
  }
}

#endif
