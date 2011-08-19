/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeDOMImplementation ****/

/** Constructor */
function GdomeDOMImplementation(pointer) {
	system.stderr.writeln("DEBUG: GdomeDOMImplementation");
	this.pointer = pointer;
}

/** Create document from URI */
GdomeDOMImplementation.prototype.createDocFromURI = function(uri, opts) {
	system.stderr.writeln("DEBUG: GdomeDOMImplementation.prototype.createDocFromURI");
	CGDOME.exception.msg = "gdome_di_createDocFromURI";
	var doc_pointer = CGDOME.gdome_di_createDocFromURI(this.pointer, uri, opts, CGDOME.exception.pointer);
	if (doc_pointer == 0) { throw CGDOME.exception; }
	return new GdomeDocument(doc_pointer, this.di);
}

/** Save document to file */	
GdomeDOMImplementation.prototype.saveDocToFile = function(doc, file, opts) {
	system.stderr.writeln("DEBUG: GdomeDOMImplementation.prototype.saveDocToFile");
	CGDOME.exception.msg = "gdome_di_saveDocToFile";
	var ret = CGDOME.gdome_di_saveDocToFile (this.pointer, doc.pointer, file, opts, CGDOME.exception.pointer);
	if(ret == 0) { throw CGDOME.exception; }
}

/** unref */
GdomeDOMImplementation.prototype.unref = function() {
	system.stderr.writeln("DEBUG: GdomeDOMImplementation.prototype.unref");
	CGDOME.exception.msg = "gdome_di_unref";
	CGDOME.gdome_di_unref(this.pointer, CGDOME.exception.pointer);
	if(CGDOME.exception.value() !== 0) throw CGDOME.exception;
}

/* EOF */
