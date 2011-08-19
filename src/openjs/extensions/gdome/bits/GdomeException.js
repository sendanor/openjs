/* Extended JavaScript String library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** GdomeException */
function GdomeException(msg) {
	if(this instanceof arguments.callee) {
		this.pointer = CGDOME.call.gdome_extra_exc_new();
		this.msg = msg;
		this.stack = new Error().stack;
	} else {
		return new GdomeException(msg);
	}
}

/** Delete GdomeException */
GdomeException.prototype.del = function() {
	CGDOME.call.gdome_extra_exc_del(this.pointer);
}

/** Get/set exception value */
GdomeException.prototype.value = function(v) {
	if(v===undefined) return (CGDOME.call.gdome_extra_exc_getvalue)(this.pointer);
	CGDOME.call.gdome_extra_exc_setvalue(this.pointer, v);
	return v;
}

/** Convert to string */
GdomeException.prototype.toString = function() {
	var id = this.value();
	var msg = "GdomeException: "+this.msg;
	if(id!=0) msg += " (#" + id + ")";
	return msg;
}

/* EOF */
