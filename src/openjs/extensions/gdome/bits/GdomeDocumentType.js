/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeDocumentType(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeDocumentType) {
			return arg1;
		} else if(arg1.toGdomeDocumentType !== undefined) {
			return arg1.toGdomeDocumentType();
		} else {
			throw Error("Could not convert object to GdomeDocumentType!");
		}
	}
}

/** GdomeDocumentType name method
 * C header: GdomeDOMString* gdome_dt_name(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.name = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.name";
	var ret = CGDOME.call.gdome_dt_name(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType entities method
 * C header: GdomeNamedNodeMap* gdome_dt_entities(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.entities = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.entities";
	var ret = CGDOME.call.gdome_dt_entities(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNamedNodeMap.js");
		return new GdomeNamedNodeMap(ret, this.di);
	}
}

/** GdomeDocumentType notations method
 * C header: GdomeNamedNodeMap* gdome_dt_notations(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.notations = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.notations";
	var ret = CGDOME.call.gdome_dt_notations(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNamedNodeMap.js");
		return new GdomeNamedNodeMap(ret, this.di);
	}
}

/** GdomeDocumentType publicId method
 * C header: GdomeDOMString* gdome_dt_publicId(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.publicId = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.publicId";
	var ret = CGDOME.call.gdome_dt_publicId(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType systemId method
 * C header: GdomeDOMString* gdome_dt_systemId(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.systemId = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.systemId";
	var ret = CGDOME.call.gdome_dt_systemId(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType internalSubset method
 * C header: GdomeDOMString* gdome_dt_internalSubset(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.internalSubset = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.internalSubset";
	var ret = CGDOME.call.gdome_dt_internalSubset(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType ref method
 * C header: void gdome_dt_ref(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.ref";
	CGDOME.call.gdome_dt_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDocumentType unref method
 * C header: void gdome_dt_unref(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.unref";
	CGDOME.call.gdome_dt_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDocumentType query_interface method
 * C header: gpointer gdome_dt_query_interface(GdomeDocumentType*, const char*, GdomeException*)
 */
GdomeDocumentType.prototype.query_interface = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.query_interface";
	var ret = CGDOME.call.gdome_dt_query_interface(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeDocumentType nodeName method
 * C header: GdomeDOMString* gdome_dt_nodeName(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.nodeName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.nodeName";
	var ret = CGDOME.call.gdome_dt_nodeName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType nodeValue method
 * C header: GdomeDOMString* gdome_dt_nodeValue(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.nodeValue = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.nodeValue";
	var ret = CGDOME.call.gdome_dt_nodeValue(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType set_nodeValue method
 * C header: void gdome_dt_set_nodeValue(GdomeDocumentType*, GdomeDOMString*, GdomeException*)
 */
GdomeDocumentType.prototype.set_nodeValue = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDocumentType.prototype.set_nodeValue: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.set_nodeValue";
	CGDOME.call.gdome_dt_set_nodeValue(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDocumentType nodeType method
 * C header: unsigned short gdome_dt_nodeType(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.nodeType = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.nodeType";
	var ret = CGDOME.call.gdome_dt_nodeType(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeDocumentType parentNode method
 * C header: GdomeNode* gdome_dt_parentNode(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.parentNode = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.parentNode";
	var ret = CGDOME.call.gdome_dt_parentNode(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType childNodes method
 * C header: GdomeNodeList* gdome_dt_childNodes(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.childNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.childNodes";
	var ret = CGDOME.call.gdome_dt_childNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNodeList.js");
		return new GdomeNodeList(ret, this.di);
	}
}

/** GdomeDocumentType firstChild method
 * C header: GdomeNode* gdome_dt_firstChild(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.firstChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.firstChild";
	var ret = CGDOME.call.gdome_dt_firstChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType lastChild method
 * C header: GdomeNode* gdome_dt_lastChild(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.lastChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.lastChild";
	var ret = CGDOME.call.gdome_dt_lastChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType previousSibling method
 * C header: GdomeNode* gdome_dt_previousSibling(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.previousSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.previousSibling";
	var ret = CGDOME.call.gdome_dt_previousSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType nextSibling method
 * C header: GdomeNode* gdome_dt_nextSibling(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.nextSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.nextSibling";
	var ret = CGDOME.call.gdome_dt_nextSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType attributes method
 * C header: GdomeNamedNodeMap* gdome_dt_attributes(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.attributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.attributes";
	var ret = CGDOME.call.gdome_dt_attributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNamedNodeMap.js");
		return new GdomeNamedNodeMap(ret, this.di);
	}
}

/** GdomeDocumentType ownerDocument method
 * C header: GdomeDocument* gdome_dt_ownerDocument(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.ownerDocument = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.ownerDocument";
	var ret = CGDOME.call.gdome_dt_ownerDocument(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeDocumentType insertBefore method
 * C header: GdomeNode* gdome_dt_insertBefore(GdomeDocumentType*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeDocumentType.prototype.insertBefore = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.insertBefore: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.insertBefore: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.insertBefore";
	var ret = CGDOME.call.gdome_dt_insertBefore(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType replaceChild method
 * C header: GdomeNode* gdome_dt_replaceChild(GdomeDocumentType*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeDocumentType.prototype.replaceChild = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.replaceChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.replaceChild: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.replaceChild";
	var ret = CGDOME.call.gdome_dt_replaceChild(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType removeChild method
 * C header: GdomeNode* gdome_dt_removeChild(GdomeDocumentType*, GdomeNode*, GdomeException*)
 */
GdomeDocumentType.prototype.removeChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.removeChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.removeChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.removeChild";
	var ret = CGDOME.call.gdome_dt_removeChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType appendChild method
 * C header: GdomeNode* gdome_dt_appendChild(GdomeDocumentType*, GdomeNode*, GdomeException*)
 */
GdomeDocumentType.prototype.appendChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.appendChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.appendChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.appendChild";
	var ret = CGDOME.call.gdome_dt_appendChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType hasChildNodes method
 * C header: GdomeBoolean gdome_dt_hasChildNodes(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.hasChildNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.hasChildNodes";
	var ret = CGDOME.call.gdome_dt_hasChildNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeDocumentType cloneNode method
 * C header: GdomeNode* gdome_dt_cloneNode(GdomeDocumentType*, GdomeBoolean, GdomeException*)
 */
GdomeDocumentType.prototype.cloneNode = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.cloneNode";
	var ret = CGDOME.call.gdome_dt_cloneNode(this.pointer, (arg0?1:0), GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeDocumentType normalize method
 * C header: void gdome_dt_normalize(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.normalize = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.normalize";
	CGDOME.call.gdome_dt_normalize(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDocumentType isSupported method
 * C header: GdomeBoolean gdome_dt_isSupported(GdomeDocumentType*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeDocumentType.prototype.isSupported = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDocumentType.prototype.isSupported: GdomeDOMString.mkref";
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
		GDOME.exception.msg = "GdomeDocumentType.prototype.isSupported: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.isSupported";
	var ret = CGDOME.call.gdome_dt_isSupported(this.pointer, gstr0.pointer, gstr1.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeDocumentType namespaceURI method
 * C header: GdomeDOMString* gdome_dt_namespaceURI(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.namespaceURI = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.namespaceURI";
	var ret = CGDOME.call.gdome_dt_namespaceURI(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType prefix method
 * C header: GdomeDOMString* gdome_dt_prefix(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.prefix = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.prefix";
	var ret = CGDOME.call.gdome_dt_prefix(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType set_prefix method
 * C header: void gdome_dt_set_prefix(GdomeDocumentType*, GdomeDOMString*, GdomeException*)
 */
GdomeDocumentType.prototype.set_prefix = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDocumentType.prototype.set_prefix: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.set_prefix";
	CGDOME.call.gdome_dt_set_prefix(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDocumentType localName method
 * C header: GdomeDOMString* gdome_dt_localName(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.localName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.localName";
	var ret = CGDOME.call.gdome_dt_localName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeDocumentType hasAttributes method
 * C header: GdomeBoolean gdome_dt_hasAttributes(GdomeDocumentType*, GdomeException*)
 */
GdomeDocumentType.prototype.hasAttributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.hasAttributes";
	var ret = CGDOME.call.gdome_dt_hasAttributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeDocumentType addEventListener method
 * C header: void gdome_dt_addEventListener(GdomeDocumentType*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeDocumentType.prototype.addEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDocumentType.prototype.addEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.addEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.addEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.addEventListener";
	CGDOME.call.gdome_dt_addEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDocumentType removeEventListener method
 * C header: void gdome_dt_removeEventListener(GdomeDocumentType*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeDocumentType.prototype.removeEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeDocumentType.prototype.removeEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.removeEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.removeEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.removeEventListener";
	CGDOME.call.gdome_dt_removeEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDocumentType dispatchEvent method
 * C header: GdomeBoolean gdome_dt_dispatchEvent(GdomeDocumentType*, GdomeEvent*, GdomeException*)
 */
GdomeDocumentType.prototype.dispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.dispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.dispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.dispatchEvent";
	var ret = CGDOME.call.gdome_dt_dispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeDocumentType subTreeDispatchEvent method
 * C header: void gdome_dt_subTreeDispatchEvent(GdomeDocumentType*, GdomeEvent*, GdomeException*)
 */
GdomeDocumentType.prototype.subTreeDispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.subTreeDispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.subTreeDispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.subTreeDispatchEvent";
	CGDOME.call.gdome_dt_subTreeDispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeDocumentType canAppend method
 * C header: GdomeBoolean gdome_dt_canAppend(GdomeDocumentType*, GdomeNode*, GdomeException*)
 */
GdomeDocumentType.prototype.canAppend = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeDocumentType.prototype.canAppend: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeDocumentType.prototype.canAppend: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeDocumentType.prototype.canAppend";
	var ret = CGDOME.call.gdome_dt_canAppend(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

