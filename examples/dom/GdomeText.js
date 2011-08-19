/* OpenJS Gdome Library
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeText ****/

/** Constructor */
function GdomeText(pointer, di) {
	system.stderr.writeln("DEBUG: GdomeText");
	this.pointer = pointer;
	this.di = di;
}

/** Convert to GdomeNode */
GdomeText.prototype.toNode = function() {
	system.stderr.writeln("DEBUG: GdomeText.prototype.toNode");
	var ptr = CGDOME.gdome_extra_cast_text_to_node(this.pointer);
	if(ptr == 0) {
		GDOME.exception.msg = "toNode failed";
		throw GDOME.exception;
	}
	return new GdomeNode(ptr, this.di);
}

/** unref */
GdomeText.prototype.unref = function() {
	system.stderr.writeln("DEBUG: GdomeText.prototype.unref");
	GDOME.exception.msg = "gdome_t_unref";
	CGDOME.gdome_t_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) throw GDOME.exception;
}
	
/* EOF */
