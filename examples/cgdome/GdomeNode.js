/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeNode ****/

/** Constructor */
function GdomeNode(pointer, di) {
	system.stderr.writeln("DEBUG: GdomeNode");
	this.pointer = pointer;
	this.di = di;
}

/* EOF */
