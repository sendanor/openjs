/* Extended JavaScript String library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Constructor */
/*
function GdomeDOMString(pointer) {
	this.pointer = pointer;
}
*/

/** Create gdome string */
GdomeDOMString.mkref = function(str) {
	var str_ptr = CGDOME.call.gdome_str_mkref_dup(str);
	if (str_ptr == 0) { throw GDOME.exception; }
	return new GdomeDOMString(str_ptr);
}

/** Convert to string */
GdomeDOMString.prototype.toString = function() {
	if(this.pointer.address == 0) return "";
	var str = "";
	for(var i=0; i<this.length(); ++i) { str += this.charAt(i); }
	return str;
}

/** unref */
GdomeDOMString.prototype.unref = function() {
	CGDOME.call.gdome_str_unref(this.pointer);
}

/* EOF */
