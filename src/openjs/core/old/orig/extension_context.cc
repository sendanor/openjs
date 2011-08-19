/* XSP -- XML Scripting Preprosessor
 * $Id: extension_context.cc 10378 2009-12-20 17:49:36Z jheusala $
 * XSP Extension Context Source
 */

#include "extension_context.h"

/* Constructor */
xsp::core::extension_context::extension_context() 
/* : m_out(0), m_err(0), m_in(0) */
: m_plugin_loader(0) {
}

/* Destructor */
xsp::core::extension_context::~extension_context() {
}

/* EOF */
