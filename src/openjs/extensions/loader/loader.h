/* openjs -- XML Scripting Preprosessor
 * $Id: loader.h 10463 2009-12-31 18:00:16Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_LOADER_H
#define OPENJS_EXTENSIONS_LOADER_H 1

#include "openjs/core/extension.h"

namespace openjs {
	namespace extensions {
		/** */
		class loader : public openjs::core::extension {
		public:
			loader(const Settings& a_settings);
			void init(openjs::core::extension_context& context);
			std::string name() const;
			std::string version() const;
			
		private:
			
		}; // end of loader
		
	} // end of openjs::extensions
} // end of openjs

#endif
