/* openjs -- Basic thread functionality
 * $Id: thread.h 10463 2009-12-31 18:00:16Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_BASICTHREAD_H
#define OPENJS_EXTENSIONS_BASICTHREAD_H 1

#include "openjs/core/extension.h"

namespace openjs {
	namespace extensions {
		/** */
		class basicthread : public openjs::core::extension {
		public:
			basicthread(const Settings& a_settings);
			void init(openjs::core::extension_context& context);
			std::string name() const;
			std::string version() const;
			
		private:
			
		}; // end of basicthread
		
	} // end of openjs::extensions
} // end of openjs

#endif
