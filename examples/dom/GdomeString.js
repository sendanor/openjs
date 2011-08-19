/* OpenJS Gdome Library
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeString ****/

/** Constructor */
function GdomeString(pointer) {
	system.stderr.writeln("DEBUG: GdomeString");
	this.pointer = pointer;
}

/** Create gdome string */
GdomeString.mkref = function(str) {
	system.stderr.writeln("DEBUG: GdomeString.mkref");
	var str_ptr = CGDOME.gdome_str_mkref_dup(str);
	if (str_ptr == 0) { throw GDOME.exception; }
	return new GdomeString(str_ptr);
}

/** unref */
GdomeString.prototype.unref = function() {
	system.stderr.writeln("DEBUG: GdomeString.prototype.unref");
	CGDOME.gdome_str_unref(this.pointer);
}

/* EOF */
