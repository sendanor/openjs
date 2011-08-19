/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeDOMString(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeDOMString) {
			return arg1;
		} else if(arg1.toGdomeDOMString !== undefined) {
			return arg1.toGdomeDOMString();
		} else {
			throw Error("Could not convert object to GdomeDOMString!");
		}
	}
}

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
/** GdomeDOMString ref method
 * C header: void gdome_str_ref(GdomeDOMString*)
 */
GdomeDOMString.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	CGDOME.call.gdome_str_ref(this.pointer);
}

/** GdomeDOMString unref method
 * C header: void gdome_str_unref(GdomeDOMString*)
 */
GdomeDOMString.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	CGDOME.call.gdome_str_unref(this.pointer);
}

/** GdomeDOMString length method
 * C header: int gdome_str_length(GdomeDOMString*)
 */
GdomeDOMString.prototype.length = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var ret = CGDOME.call.gdome_str_length(this.pointer);
	return ret;
}

/** GdomeDOMString isEmpty method
 * C header: GdomeBoolean gdome_str_isEmpty(GdomeDOMString*)
 */
GdomeDOMString.prototype.isEmpty = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var ret = CGDOME.call.gdome_str_isEmpty(this.pointer);
	return (ret === 1) ? true : false;
}

/** GdomeDOMString charAt method
 * C header: gchar gdome_str_charAt(GdomeDOMString*, int)
 */
GdomeDOMString.prototype.charAt = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var ret = CGDOME.call.gdome_str_charAt(this.pointer, arg0);
	return ret;
}

