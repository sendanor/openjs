/* openjs-gdome -- gdome -- openjs Extension
 * $Id: gdome_extra.c 10131 2009-11-17 11:48:19Z jheusala $
 * $Date: 2009-11-17 13:48:19 +0200 (Tue, 17 Nov 2009) $
 */

#include "gdome_extra.h"
#include <stdlib.h>

/** Create GdomeException pointer */
inline GdomeException* gdome_extra_exc_new() {
	GdomeException* p = (GdomeException*) malloc(sizeof(GdomeException));
	if(p==NULL) return NULL;
	*p = 0;
	return p;
}

/** Delete GdomeException pointer */
inline void gdome_extra_exc_del(GdomeException* exc) {
	free(exc);
}

/** Get exception value */
inline GdomeException gdome_extra_exc_getvalue(GdomeException* exc) {
	if(exc == NULL) return 0; // FIXME: This probably should be something else?
	return *exc;
}

/** Set exception value */
inline void gdome_extra_exc_setvalue(GdomeException* exc, const GdomeException x) {
	if(exc == NULL) return; // FIXME: This probably should be something else?
	*exc = x;
}

inline GdomeText* gdome_extra_cast_node_to_text(GdomeNode* e) {
	return (GdomeText *)e;
}

inline GdomeNode* gdome_extra_cast_text_to_node(GdomeText* e) {
	return (GdomeNode *)e;
}

inline GdomeNode* gdome_extra_cast_element_to_node(GdomeElement* e) {
	return (GdomeNode *)e;
}

/** gdome_extra_el_appendChild */
inline GdomeNode* gdome_extra_el_appendChild(GdomeElement* e, GdomeNode* n, GdomeException* exc) {
	return gdome_el_appendChild(e, n, exc);
}

/** Integer gateway to C gdome_el_appendChild */
inline int_pointer_type gdome_int_el_appendChild(int_pointer_type e, int_pointer_type n, int_pointer_type exc) {
	return (int_pointer_type) gdome_el_appendChild((GdomeElement *)e, (GdomeNode *)n, (GdomeException *)exc);
}

/* EOF */
