/* OpenJS Gdome Library
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
	GDOME.exception.msg = "gdome_doc_unref";
	CGDOME.gdome_doc_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) throw GDOME.exception;
}

/** getElementById */
GdomeDocument.prototype.getElementById = function(id) {
	system.stderr.writeln("DEBUG: GdomeDocument.prototype.getElementById");
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	
	GDOME.exception.msg = "GdomeString.mkref";
	var gid = GdomeString.mkref(id);
	if(gid.pointer == 0) { throw GDOME.exception; }
	
	GDOME.exception.msg = "gdome_doc_getElementById";
	var el_pointer = CGDOME.gdome_doc_getElementById(this.pointer, gid.pointer, GDOME.exception.pointer);
	gid.unref();
	if (el_pointer == 0) {
		if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
		return;
	}
	return new GdomeElement(el_pointer, this.di);
}

/** createTextNode */
GdomeDocument.prototype.createTextNode = function(data) {
	system.stderr.writeln("DEBUG: GdomeDocument.prototype.createTextNode");
	var gdata = GdomeString.mkref(data);
	GDOME.exception.msg = "gdome_doc_createTextNode";
	var el_pointer = CGDOME.gdome_doc_createTextNode(this.pointer, gdata.pointer, GDOME.exception.pointer);
	gdata.unref();
	if (el_pointer == 0) { throw GDOME.exception; }
	return new GdomeText(el_pointer, this.di);
}

/* EOF */
