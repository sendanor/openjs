/* GDOME Document Object Model C API for openjs
 * $Id: gdome_extra.h 10131 2009-11-17 11:48:19Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_CGDOME_EXTRA_H
#define OPENJS_EXTENSIONS_CGDOME_EXTRA_H 1

#include <gdome.h>
#include "pointer.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

	/** Create GdomeException pointer */
	extern inline GdomeException* gdome_extra_exc_new();
	
	/** Delete GdomeException pointer */
	extern inline void gdome_extra_exc_del(GdomeException* exc);
	
	/** Get exception value */
	extern inline GdomeException gdome_extra_exc_getvalue(GdomeException* exc);
	
	/** Set exception value */
	extern inline void gdome_extra_exc_setvalue(GdomeException* exc, const GdomeException x);

	extern inline GdomeText* gdome_extra_cast_node_to_text(GdomeNode*);
	extern inline GdomeNode* gdome_extra_cast_text_to_node(GdomeText*);
	extern inline GdomeNode* gdome_extra_cast_element_to_node(GdomeElement*);
	
	/** gdome_extra_el_appendChild */
	extern inline GdomeNode* gdome_extra_el_appendChild(GdomeElement*, GdomeNode*, GdomeException*);
	
	/** Integer gateway to C gdome_el_appendChild */
	extern inline int_pointer_type gdome_int_el_appendChild(int_pointer_type, int_pointer_type, int_pointer_type);
	
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
