/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeDocument ****/

/** Constructor */
function GdomeDocument(pointer, di) {
	system.stderr.writeln("DEBUG: GdomeDocument");
	this.pointer = pointer;
	this.di = di;
}

/** unref */
GdomeDocument.prototype.unref = function() {
	system.stderr.writeln("DEBUG: GdomeDocument.prototype.unref");
	CGDOME.exception.msg = "gdome_doc_unref";
	CGDOME.gdome_doc_unref(this.pointer, CGDOME.exception.pointer);
	if(CGDOME.exception.value() !== 0) throw CGDOME.exception;
}

/** getElementById */
GdomeDocument.prototype.getElementById = function(id) {
	system.stderr.writeln("DEBUG: GdomeDocument.prototype.getElementById");
	CGDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw CGDOME.exception; }
	
	CGDOME.exception.msg = "GdomeString.mkref";
	var gid = GdomeString.mkref(id);
	if(gid.pointer == 0) { throw CGDOME.exception; }
	
	CGDOME.exception.msg = "gdome_doc_getElementById";
	var el_pointer = CGDOME.gdome_doc_getElementById(this.pointer, gid.pointer, CGDOME.exception.pointer);
	gid.unref();
	if (el_pointer == 0) {
		if(CGDOME.exception.value() !== 0) { throw CGDOME.exception; }
		return;
	}
	return new GdomeElement(el_pointer, this.di);
}

/** createTextNode */
GdomeDocument.prototype.createTextNode = function(data) {
	system.stderr.writeln("DEBUG: GdomeDocument.prototype.createTextNode");
	var gdata = GdomeString.mkref(data);
	CGDOME.exception.msg = "gdome_doc_createTextNode";
	var el_pointer = CGDOME.gdome_doc_createTextNode(this.pointer, gdata.pointer, CGDOME.exception.pointer);
	gdata.unref();
	if (el_pointer == 0) { throw CGDOME.exception; }
	return new GdomeText(el_pointer, this.di);
}

/* EOF */
