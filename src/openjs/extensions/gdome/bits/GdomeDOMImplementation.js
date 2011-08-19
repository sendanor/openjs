/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeDOMImplementation(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
	} else {
		if(arg1 instanceof GdomeDOMImplementation) {
			return arg1;
		} else if(arg1.toGdomeDOMImplementation !== undefined) {
			return arg1.toGdomeDOMImplementation();
		} else {
			throw Error("Could not convert object to GdomeDOMImplementation!");
		}
	}
}

/** GdomeDOMImplementation ref method
 * C header: void gdome_di_ref(GdomeDOMImplementation*, GdomeException*)
 */
GdomeDOMImplementation.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.ref";
	CGDOME.call.gdome_di_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDOMImplementation unref method
 * C header: void gdome_di_unref(GdomeDOMImplementation*, GdomeException*)
 */
GdomeDOMImplementation.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.unref";
	CGDOME.call.gdome_di_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDOMImplementation createDocumentType method
 * C header: GdomeDocumentType* gdome_di_createDocumentType(GdomeDOMImplementation*, GdomeDOMString*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeDOMImplementation.prototype.createDocumentType = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocumentType: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	var gstr1;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg1 instanceof GdomeDOMString) {
		gstr1 = arg1;
		if(gstr1.pointer.address !== 0) { gstr1.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocumentType: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	var gstr2;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg2 instanceof GdomeDOMString) {
		gstr2 = arg2;
		if(gstr2.pointer.address !== 0) { gstr2.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocumentType: GdomeDOMString.mkref";
		gstr2 = GdomeDOMString.mkref(String(arg2));
		if(gstr2.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocumentType";
	var ret = CGDOME.call.gdome_di_createDocumentType(this.pointer, gstr0.pointer, gstr1.pointer, gstr2.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(gstr2.pointer.address !== 0) gstr2.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocumentType.js");
		return new GdomeDocumentType(ret, this.di);
	}
}

/** GdomeDOMImplementation createDocument method
 * C header: GdomeDocument* gdome_di_createDocument(GdomeDOMImplementation*, GdomeDOMString*, GdomeDOMString*, GdomeDocumentType*, GdomeException*)
 */
GdomeDOMImplementation.prototype.createDocument = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocument: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	var gstr1;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg1 instanceof GdomeDOMString) {
		gstr1 = arg1;
		if(gstr1.pointer.address !== 0) { gstr1.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocument: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	Extension.load("gdome/GdomeDocumentType.js");
	if(!(arg2 instanceof GdomeDocumentType)) {
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocument: argument not instance of GdomeDocumentType";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocument: !arg2.pointer";
	if(arg2.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocument";
	var ret = CGDOME.call.gdome_di_createDocument(this.pointer, gstr0.pointer, gstr1.pointer, arg2.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeDOMImplementation freeDoc method
 * C header: void gdome_di_freeDoc(GdomeDOMImplementation*, GdomeDocument*, GdomeException*)
 */
GdomeDOMImplementation.prototype.freeDoc = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeDocument.js");
	if(!(arg0 instanceof GdomeDocument)) {
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.freeDoc: argument not instance of GdomeDocument";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.freeDoc: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.freeDoc";
	CGDOME.call.gdome_di_freeDoc(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDOMImplementation createDocFromURI method
 * C header: GdomeDocument* gdome_di_createDocFromURI(GdomeDOMImplementation*, const char*, unsigned int, GdomeException*)
 */
GdomeDOMImplementation.prototype.createDocFromURI = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocFromURI";
	var ret = CGDOME.call.gdome_di_createDocFromURI(this.pointer, arg0, arg1, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeDOMImplementation createDocFromMemory method
 * C header: GdomeDocument* gdome_di_createDocFromMemory(GdomeDOMImplementation*, char*, unsigned int, GdomeException*)
 */
GdomeDOMImplementation.prototype.createDocFromMemory = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.createDocFromMemory";
	var ret = CGDOME.call.gdome_di_createDocFromMemory(this.pointer, arg0, arg1, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeDOMImplementation saveDocToFile method
 * C header: GdomeBoolean gdome_di_saveDocToFile(GdomeDOMImplementation*, GdomeDocument*, const char*, GdomeSavingCode, GdomeException*)
 */
GdomeDOMImplementation.prototype.saveDocToFile = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeDocument.js");
	if(!(arg0 instanceof GdomeDocument)) {
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToFile: argument not instance of GdomeDocument";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToFile: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToFile";
	var ret = CGDOME.call.gdome_di_saveDocToFile(this.pointer, arg0.pointer, arg1, arg2, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeDOMImplementation saveDocToFileEnc method
 * C header: GdomeBoolean gdome_di_saveDocToFileEnc(GdomeDOMImplementation*, GdomeDocument*, const char*, const char*, GdomeSavingCode, GdomeException*)
 */
GdomeDOMImplementation.prototype.saveDocToFileEnc = function(arg0, arg1, arg2, arg3) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeDocument.js");
	if(!(arg0 instanceof GdomeDocument)) {
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToFileEnc: argument not instance of GdomeDocument";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToFileEnc: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToFileEnc";
	var ret = CGDOME.call.gdome_di_saveDocToFileEnc(this.pointer, arg0.pointer, arg1, arg2, arg3, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeDOMImplementation saveDocToMemory method
 * C header: GdomeBoolean gdome_di_saveDocToMemory(GdomeDOMImplementation*, GdomeDocument*, char**, GdomeSavingCode, GdomeException*)
 */
GdomeDOMImplementation.prototype.saveDocToMemory = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeDocument.js");
	if(!(arg0 instanceof GdomeDocument)) {
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToMemory: argument not instance of GdomeDocument";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToMemory: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToMemory";
	var ret = CGDOME.call.gdome_di_saveDocToMemory(this.pointer, arg0.pointer, arg1, arg2, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeDOMImplementation saveDocToMemoryEnc method
 * C header: GdomeBoolean gdome_di_saveDocToMemoryEnc(GdomeDOMImplementation*, GdomeDocument*, char**, const char*, GdomeSavingCode, GdomeException*)
 */
GdomeDOMImplementation.prototype.saveDocToMemoryEnc = function(arg0, arg1, arg2, arg3) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeDocument.js");
	if(!(arg0 instanceof GdomeDocument)) {
		GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToMemoryEnc: argument not instance of GdomeDocument";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToMemoryEnc: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDOMImplementation.prototype.saveDocToMemoryEnc";
	var ret = CGDOME.call.gdome_di_saveDocToMemoryEnc(this.pointer, arg0.pointer, arg1, arg2, arg3, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

