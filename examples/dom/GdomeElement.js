/* OpenJS Gdome Library
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeElement ****/

/** Constructor */
function GdomeElement(pointer, di) {
	system.stderr.writeln("DEBUG: GdomeElement");
	this.pointer = pointer;
	this.di = di;
}

/** appendChild */
GdomeElement.prototype.appendChild = function(el) {
	system.stderr.writeln("DEBUG: GdomeElement.prototype.appendChild");
	
	var n = GDOME.toNode(el);
	if(!(n instanceof GdomeNode)) {
		GDOME.exception.msg = "appendChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	
	system.stderr.writeln("appendChild 2");
	GDOME.exception.msg = "gdome_el_appendChild";
	var node_ptr = CGDOME.gdome_el_appendChild(this.pointer, n.pointer, GDOME.exception.pointer);
	if(node_ptr == 0) { throw GDOME.exception; }
	return new GdomeNode(node_ptr, this.di);
}

/** unref */
GdomeElement.prototype.unref = function() {
	system.stderr.writeln("DEBUG: GdomeElement.prototype.unref");
	GDOME.exception.msg = "gdome_el_unref";
	CGDOME.gdome_el_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) throw GDOME.exception;
}

/* EOF */
