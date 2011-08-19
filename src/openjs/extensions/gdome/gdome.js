/* Extended JavaScript String library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Define GDOME */
GDOME = {};

/** Our exception data type */
Extension.load("gdome/GdomeException.js");
GDOME.exception = new GdomeException();

/** Gdome DOM Implementation */
GDOME.createDOMImplementation = function() {
	GDOME.exception.msg = "gdome_di_mkref";
	var di_pointer = CGDOME.call.gdome_di_mkref();
	if (di_pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeDOMImplementation.js");
	return new GdomeDOMImplementation(di_pointer);
}

/* EOF */
