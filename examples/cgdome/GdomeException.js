/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeException ****/

/** GdomeException */
function GdomeException(msg) {
	system.stderr.writeln("DEBUG: GdomeException");
	this.pointer = CGDOME.gdome_extra_exc_new();
	this.msg = msg;
}

/** Delete GdomeException */
GdomeException.prototype.del = function() {
	system.stderr.writeln("DEBUG: GdomeException.prototype.del");
	CGDOME.gdome_extra_exc_del(this.pointer);
}

/** Get/set exception value */
GdomeException.prototype.value = function(v) {
	system.stderr.writeln("DEBUG: GdomeException.prototype.value");
	if(v===undefined) return CGDOME.gdome_extra_exc_getvalue(this.pointer);
	CGDOME.gdome_extra_exc_setvalue(this.pointer, v);
	return v;
}

/** Convert to string */
GdomeException.prototype.toString = function() {
	system.stderr.writeln("DEBUG: GdomeException.prototype.toString");
	var id = this.value();
	var msg = "GdomeException: "+this.msg;
	if(id!=0) msg += " (#" + id + ")";
	return msg;
}

/* EOF */
