/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeComment(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeComment) {
			return arg1;
		} else if(arg1.toGdomeComment !== undefined) {
			return arg1.toGdomeComment();
		} else {
			throw Error("Could not convert object to GdomeComment!");
		}
	}
}

/** GdomeComment data method
 * C header: GdomeDOMString* gdome_c_data(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.data = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.data";
	var ret = CGDOME.call.gdome_c_data(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeComment set_data method
 * C header: void gdome_c_set_data(GdomeComment*, GdomeDOMString*, GdomeException*)
 */
GdomeComment.prototype.set_data = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.set_data: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeComment.prototype.set_data";
	CGDOME.call.gdome_c_set_data(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment length method
 * C header: gulong gdome_c_length(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.length = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.length";
	var ret = CGDOME.call.gdome_c_length(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeComment substringData method
 * C header: GdomeDOMString* gdome_c_substringData(GdomeComment*, gulong, gulong, GdomeException*)
 */
GdomeComment.prototype.substringData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.substringData";
	var ret = CGDOME.call.gdome_c_substringData(this.pointer, arg0, arg1, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeComment appendData method
 * C header: void gdome_c_appendData(GdomeComment*, GdomeDOMString*, GdomeException*)
 */
GdomeComment.prototype.appendData = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.appendData: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeComment.prototype.appendData";
	CGDOME.call.gdome_c_appendData(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment insertData method
 * C header: void gdome_c_insertData(GdomeComment*, gulong, GdomeDOMString*, GdomeException*)
 */
GdomeComment.prototype.insertData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr1;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg1 instanceof GdomeDOMString) {
		gstr1 = arg1;
		if(gstr1.pointer.address !== 0) { gstr1.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.insertData: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeComment.prototype.insertData";
	CGDOME.call.gdome_c_insertData(this.pointer, arg0, gstr1.pointer, GDOME.exception.pointer);
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment deleteData method
 * C header: void gdome_c_deleteData(GdomeComment*, gulong, gulong, GdomeException*)
 */
GdomeComment.prototype.deleteData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.deleteData";
	CGDOME.call.gdome_c_deleteData(this.pointer, arg0, arg1, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment replaceData method
 * C header: void gdome_c_replaceData(GdomeComment*, gulong, gulong, GdomeDOMString*, GdomeException*)
 */
GdomeComment.prototype.replaceData = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr2;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg2 instanceof GdomeDOMString) {
		gstr2 = arg2;
		if(gstr2.pointer.address !== 0) { gstr2.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.replaceData: GdomeDOMString.mkref";
		gstr2 = GdomeDOMString.mkref(String(arg2));
		if(gstr2.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeComment.prototype.replaceData";
	CGDOME.call.gdome_c_replaceData(this.pointer, arg0, arg1, gstr2.pointer, GDOME.exception.pointer);
	if(gstr2.pointer.address !== 0) gstr2.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment ref method
 * C header: void gdome_c_ref(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.ref";
	CGDOME.call.gdome_c_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment unref method
 * C header: void gdome_c_unref(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.unref";
	CGDOME.call.gdome_c_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment query_interface method
 * C header: gpointer gdome_c_query_interface(GdomeComment*, const char*, GdomeException*)
 */
GdomeComment.prototype.query_interface = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.query_interface";
	var ret = CGDOME.call.gdome_c_query_interface(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeComment nodeName method
 * C header: GdomeDOMString* gdome_c_nodeName(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.nodeName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.nodeName";
	var ret = CGDOME.call.gdome_c_nodeName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeComment nodeValue method
 * C header: GdomeDOMString* gdome_c_nodeValue(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.nodeValue = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.nodeValue";
	var ret = CGDOME.call.gdome_c_nodeValue(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeComment set_nodeValue method
 * C header: void gdome_c_set_nodeValue(GdomeComment*, GdomeDOMString*, GdomeException*)
 */
GdomeComment.prototype.set_nodeValue = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.set_nodeValue: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeComment.prototype.set_nodeValue";
	CGDOME.call.gdome_c_set_nodeValue(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment nodeType method
 * C header: unsigned short gdome_c_nodeType(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.nodeType = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.nodeType";
	var ret = CGDOME.call.gdome_c_nodeType(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeComment parentNode method
 * C header: GdomeNode* gdome_c_parentNode(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.parentNode = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.parentNode";
	var ret = CGDOME.call.gdome_c_parentNode(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment childNodes method
 * C header: GdomeNodeList* gdome_c_childNodes(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.childNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.childNodes";
	var ret = CGDOME.call.gdome_c_childNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNodeList.js");
		return new GdomeNodeList(ret, this.di);
	}
}

/** GdomeComment firstChild method
 * C header: GdomeNode* gdome_c_firstChild(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.firstChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.firstChild";
	var ret = CGDOME.call.gdome_c_firstChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment lastChild method
 * C header: GdomeNode* gdome_c_lastChild(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.lastChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.lastChild";
	var ret = CGDOME.call.gdome_c_lastChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment previousSibling method
 * C header: GdomeNode* gdome_c_previousSibling(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.previousSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.previousSibling";
	var ret = CGDOME.call.gdome_c_previousSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment nextSibling method
 * C header: GdomeNode* gdome_c_nextSibling(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.nextSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.nextSibling";
	var ret = CGDOME.call.gdome_c_nextSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment attributes method
 * C header: GdomeNamedNodeMap* gdome_c_attributes(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.attributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.attributes";
	var ret = CGDOME.call.gdome_c_attributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNamedNodeMap.js");
		return new GdomeNamedNodeMap(ret, this.di);
	}
}

/** GdomeComment ownerDocument method
 * C header: GdomeDocument* gdome_c_ownerDocument(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.ownerDocument = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.ownerDocument";
	var ret = CGDOME.call.gdome_c_ownerDocument(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeComment insertBefore method
 * C header: GdomeNode* gdome_c_insertBefore(GdomeComment*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeComment.prototype.insertBefore = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeComment.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.insertBefore: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeComment.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.insertBefore: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.insertBefore";
	var ret = CGDOME.call.gdome_c_insertBefore(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment replaceChild method
 * C header: GdomeNode* gdome_c_replaceChild(GdomeComment*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeComment.prototype.replaceChild = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeComment.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.replaceChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeComment.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.replaceChild: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.replaceChild";
	var ret = CGDOME.call.gdome_c_replaceChild(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment removeChild method
 * C header: GdomeNode* gdome_c_removeChild(GdomeComment*, GdomeNode*, GdomeException*)
 */
GdomeComment.prototype.removeChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeComment.prototype.removeChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.removeChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.removeChild";
	var ret = CGDOME.call.gdome_c_removeChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment appendChild method
 * C header: GdomeNode* gdome_c_appendChild(GdomeComment*, GdomeNode*, GdomeException*)
 */
GdomeComment.prototype.appendChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeComment.prototype.appendChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.appendChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.appendChild";
	var ret = CGDOME.call.gdome_c_appendChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment hasChildNodes method
 * C header: GdomeBoolean gdome_c_hasChildNodes(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.hasChildNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.hasChildNodes";
	var ret = CGDOME.call.gdome_c_hasChildNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeComment cloneNode method
 * C header: GdomeNode* gdome_c_cloneNode(GdomeComment*, GdomeBoolean, GdomeException*)
 */
GdomeComment.prototype.cloneNode = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.cloneNode";
	var ret = CGDOME.call.gdome_c_cloneNode(this.pointer, (arg0?1:0), GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeComment normalize method
 * C header: void gdome_c_normalize(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.normalize = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.normalize";
	CGDOME.call.gdome_c_normalize(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment isSupported method
 * C header: GdomeBoolean gdome_c_isSupported(GdomeComment*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeComment.prototype.isSupported = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.isSupported: GdomeDOMString.mkref";
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
		GDOME.exception.msg = "GdomeComment.prototype.isSupported: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeComment.prototype.isSupported";
	var ret = CGDOME.call.gdome_c_isSupported(this.pointer, gstr0.pointer, gstr1.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeComment namespaceURI method
 * C header: GdomeDOMString* gdome_c_namespaceURI(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.namespaceURI = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.namespaceURI";
	var ret = CGDOME.call.gdome_c_namespaceURI(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeComment prefix method
 * C header: GdomeDOMString* gdome_c_prefix(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.prefix = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.prefix";
	var ret = CGDOME.call.gdome_c_prefix(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeComment set_prefix method
 * C header: void gdome_c_set_prefix(GdomeComment*, GdomeDOMString*, GdomeException*)
 */
GdomeComment.prototype.set_prefix = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.set_prefix: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeComment.prototype.set_prefix";
	CGDOME.call.gdome_c_set_prefix(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment localName method
 * C header: GdomeDOMString* gdome_c_localName(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.localName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.localName";
	var ret = CGDOME.call.gdome_c_localName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeComment hasAttributes method
 * C header: GdomeBoolean gdome_c_hasAttributes(GdomeComment*, GdomeException*)
 */
GdomeComment.prototype.hasAttributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.hasAttributes";
	var ret = CGDOME.call.gdome_c_hasAttributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeComment addEventListener method
 * C header: void gdome_c_addEventListener(GdomeComment*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeComment.prototype.addEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.addEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeComment.prototype.addEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.addEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.addEventListener";
	CGDOME.call.gdome_c_addEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment removeEventListener method
 * C header: void gdome_c_removeEventListener(GdomeComment*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeComment.prototype.removeEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeComment.prototype.removeEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeComment.prototype.removeEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.removeEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.removeEventListener";
	CGDOME.call.gdome_c_removeEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment dispatchEvent method
 * C header: GdomeBoolean gdome_c_dispatchEvent(GdomeComment*, GdomeEvent*, GdomeException*)
 */
GdomeComment.prototype.dispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeComment.prototype.dispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.dispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.dispatchEvent";
	var ret = CGDOME.call.gdome_c_dispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeComment subTreeDispatchEvent method
 * C header: void gdome_c_subTreeDispatchEvent(GdomeComment*, GdomeEvent*, GdomeException*)
 */
GdomeComment.prototype.subTreeDispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeComment.prototype.subTreeDispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.subTreeDispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.subTreeDispatchEvent";
	CGDOME.call.gdome_c_subTreeDispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeComment canAppend method
 * C header: GdomeBoolean gdome_c_canAppend(GdomeComment*, GdomeNode*, GdomeException*)
 */
GdomeComment.prototype.canAppend = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeComment.prototype.canAppend: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeComment.prototype.canAppend: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeComment.prototype.canAppend";
	var ret = CGDOME.call.gdome_c_canAppend(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

