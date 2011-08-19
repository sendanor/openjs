/* openjs-gdome -- gdome -- OpenJS Extension
 * $Id: int_pointer_type.h 10465 2009-12-31 18:18:53Z jheusala $
 * $Date: 2009-12-31 20:18:53 +0200 (Thu, 31 Dec 2009) $
 */

#ifndef OPENJS_CORE_INT_POINTER_TYPE_H
#define OPENJS_CORE_INT_POINTER_TYPE_H 1

#include <stdint.h> // for intptr_t

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

	/* Integer type to be used inside v8 for pointers */
	typedef uintptr_t int_pointer_type;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
/* EOF */
