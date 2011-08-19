/* openjs::basicstream
 * $Id: basicstream.h 10034 2009-11-12 00:24:46Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_BASICSTREAM_H
#define OPENJS_EXTENSIONS_BASICSTREAM_H 1

#include "../../core/extension.h"

namespace openjs {
  namespace extensions {
	
	/** */
	class basicstream : public openjs::core::extension {
	public:
		basicstream(const Settings& a_settings);
		void init(openjs::core::extension_context& context);
		std::string name() const;
		std::string version() const;
	};
	
  }
  
}

#endif
