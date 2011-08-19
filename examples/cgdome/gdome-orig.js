/* Example for gdome C API module for OpenJS
 * Copyright Jaakko Heusala <jheusala@sendanor.fi>
 */

/**** GdomeException ****/

/** GdomeException */
function GdomeException(msg) {
	system.stderr.writeln("DEBUG: GdomeException");
	this.pointer = CGDOME.gdome_extra_exc_new();
	this.msg = msg;
}

/** Delete GdomeException */
GdomeException.prototype.del = function() {
	system.stderr.writeln("DEBUG: GdomeException.prototype.del");
	CGDOME.gdome_extra_exc_del(this.pointer);
}

/** Get/set exception value */
GdomeException.prototype.value = function(v) {
	system.stderr.writeln("DEBUG: GdomeException.prototype.value");
	if(v===undefined) return CGDOME.gdome_extra_exc_getvalue(this.pointer);
	CGDOME.gdome_extra_exc_setvalue(this.pointer, v);
	return v;
}

/** Convert to string */
GdomeException.prototype.toString = function() {
	system.stderr.writeln("DEBUG: GdomeException.prototype.toString");
	var id = this.value();
	var msg = "GdomeException: "+this.msg;
	if(id!=0) msg += " (#" + id + ")";
	return msg;
}

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

/**** GdomeNode ****/

/** Constructor */
function GdomeNode(pointer, di) {
	system.stderr.writeln("DEBUG: GdomeNode");
	this.pointer = pointer;
	this.di = di;
}

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
		CGDOME.exception.msg = "toNode failed";
		throw CGDOME.exception;
	}
	return new GdomeNode(ptr, this.di);
}

/** unref */
GdomeText.prototype.unref = function() {
	system.stderr.writeln("DEBUG: GdomeText.prototype.unref");
	CGDOME.exception.msg = "gdome_t_unref";
	CGDOME.gdome_t_unref(this.pointer, CGDOME.exception.pointer);
	if(CGDOME.exception.value() !== 0) throw CGDOME.exception;
}
	
/**** GdomeString ****/

/** Constructor */
function GdomeString(pointer) {
	system.stderr.writeln("DEBUG: GdomeString");
	this.pointer = pointer;
}

/** Create gdome string */
GdomeString.mkref = function(str) {
	system.stderr.writeln("DEBUG: GdomeString.mkref");
	var str_ptr = CGDOME.gdome_str_mkref_dup(str);
	if (str_ptr == 0) { throw CGDOME.exception; }
	return new GdomeString(str_ptr);
}

/** unref */
GdomeString.prototype.unref = function() {
	system.stderr.writeln("DEBUG: GdomeString.prototype.unref");
	CGDOME.gdome_str_unref(this.pointer);
}

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
