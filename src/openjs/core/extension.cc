/* OpenJS -- XML Scripting Preprosessor
 * $Id: extension.cc 10465 2009-12-31 18:18:53Z jheusala $
 */

#include "extension.h"
#include "extension_context.h"
#include <sendanor/logger.h>

/* Constructor */
openjs::core::extension::extension(const Settings& a_settings) {
	SENDANOR_LOGGER_FUNCTION("extension", "");
}

/* Destructor */
openjs::core::extension::~extension() {
	SENDANOR_LOGGER_FUNCTION("~extension", "");
}

/* EOF */
