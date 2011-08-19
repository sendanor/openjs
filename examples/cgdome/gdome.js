/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeException ****/
/**** GdomeDOMImplementation ****/
/**** GdomeDocument ****/
/**** GdomeElement ****/
/**** GdomeNode ****/
/**** GdomeText ****/
/**** GdomeString ****/

Filesystem.loadJS("GdomeException.js");
Filesystem.loadJS("GdomeDOMImplementation.js");
Filesystem.loadJS("GdomeDocument.js");
Filesystem.loadJS("GdomeString.js");
Filesystem.loadJS("GdomeNode.js");
Filesystem.loadJS("GdomeElement.js");
Filesystem.loadJS("GdomeText.js");

/**** CGDOME ****/

/** Our global exception variable */
CGDOME.exception = new GdomeException();

/** Gdome DOM Implementation */
CGDOME.createDOMImplementation = function() {
	system.stderr.writeln("DEBUG: CGDOME.createDOMImplementation");
	CGDOME.exception.msg = "gdome_di_mkref";
	var di_pointer = CGDOME.gdome_di_mkref();
	if (di_pointer == 0) { throw CGDOME.exception; }
	return new GdomeDOMImplementation(di_pointer);
}

/** Try to convert object as a GdomeNode */
CGDOME.toNode = function(el) {
	system.stderr.writeln("DEBUG: CGDOME.toNode");
	if(el instanceof GdomeNode) {
		return el;
	} else if(el.toNode !== undefined) {
		return el.toNode();
	}
}

/* EOF */
