/* OpenJS Gdome Library
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/** Initialize the GDOME */
GDOME = {};

/* Load libraries */
Filesystem.loadJS("GdomeException.js");
Filesystem.loadJS("GdomeDOMImplementation.js");
Filesystem.loadJS("GdomeDocument.js");
Filesystem.loadJS("GdomeString.js");
Filesystem.loadJS("GdomeNode.js");
Filesystem.loadJS("GdomeElement.js");
Filesystem.loadJS("GdomeText.js");

/** Our global exception variable */
GDOME.exception = new GdomeException();

/** Gdome DOM Implementation */
GDOME.createDOMImplementation = function() {
	system.stderr.writeln("DEBUG: GDOME.createDOMImplementation");
	GDOME.exception.msg = "gdome_di_mkref";
	var di_pointer = CGDOME.gdome_di_mkref();
	if (di_pointer == 0) { throw GDOME.exception; }
	return new GdomeDOMImplementation(di_pointer);
}

/** Try to convert object as a GdomeNode */
GDOME.toNode = function(el) {
	system.stderr.writeln("DEBUG: GDOME.toNode");
	if(el instanceof GdomeNode) {
		return el;
	} else if(el.toNode !== undefined) {
		return el.toNode();
	}
}

/* EOF */
