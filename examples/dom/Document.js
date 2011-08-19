/* OpenJS DOM Library
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/** Constructor */
function Document() {
	system.stderr.writeln("DEBUG: Document("+file+")");
	
	// Private members
	//x-openjs-document (of type GdomeDocument)
	
	// Document Object Collections
	//anchors[]
	//forms[]
	//images[]
	//links[]
	
	// Document Object Properties
	//body
	//cookie
	//domain
	//lastModified
	//referrer
	//title
	//URL
	
}

// Document Object Methods

Document.prototype.open = function(mimetype,replace) {
	throw "Document.prototype.open: not implemented";
}

Document.open = function(uri,mimetype,replace) {
	if(mimetype !== undefined) throw "Document.open: mimetype: not implemented";
	if(replace !== undefined) throw "Document.open: replace: not implemented";
	
	if(DOM.x-openjs-di === undefined) { DOM.x-openjs-di = GDOME.createDOMImplementation(); }
	
	var doc = new Document();
	doc.x-openjs-doc = DOM.x-openjs-di.createDocFromURI(uri, CGDOME.GDOME_LOAD_COMPLETE_ATTRS);
	return doc;
}

Document.prototype.close = function() {
	throw "Document.prototype.close: not implemented";
}
	
Document.prototype.getElementById = function() {
	throw "Document.prototype.getElementById: not implemented";
}

Document.prototype.getElementsByName = function() {
	throw "Document.prototype.getElementsByName: not implemented";
}

Document.prototype.getElementsByTagName = function() {
	throw "Document.prototype.getElementsByTagName: not implemented";
}

Document.prototype.write = function() {
	throw "Document.prototype.write: not implemented";
}

Document.prototype.writeln = function() {
	throw "Document.prototype.writeln: not implemented";
}

/* EOF */
