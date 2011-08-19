/* Example for gdome C API module for OpenJS
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
	
	var n = CGDOME.toNode(el);
	if(!(n instanceof GdomeNode)) {
		CGDOME.exception.msg = "appendChild: argument not instance of GdomeNode";
		throw CGDOME.exception;
	}
	
	system.stderr.writeln("appendChild 2");
	CGDOME.exception.msg = "gdome_el_appendChild";
	var node_ptr = CGDOME.gdome_el_appendChild(this.pointer, n.pointer, CGDOME.exception.pointer);
	if(node_ptr == 0) { throw CGDOME.exception; }
	return new GdomeNode(node_ptr, this.di);
}

/** unref */
GdomeElement.prototype.unref = function() {
	system.stderr.writeln("DEBUG: GdomeElement.prototype.unref");
	CGDOME.exception.msg = "gdome_el_unref";
	CGDOME.gdome_el_unref(this.pointer, CGDOME.exception.pointer);
	if(CGDOME.exception.value() !== 0) throw CGDOME.exception;
}

/* EOF */
