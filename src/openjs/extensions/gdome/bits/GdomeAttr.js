/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeAttr(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeAttr) {
			return arg1;
		} else if(arg1.toGdomeAttr !== undefined) {
			return arg1.toGdomeAttr();
		} else {
			throw Error("Could not convert object to GdomeAttr!");
		}
	}
}

/** GdomeAttr ref method
 * C header: void gdome_a_ref(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.ref";
	CGDOME.call.gdome_a_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr unref method
 * C header: void gdome_a_unref(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.unref";
	CGDOME.call.gdome_a_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr query_interface method
 * C header: gpointer gdome_a_query_interface(GdomeAttr*, const char*, GdomeException*)
 */
GdomeAttr.prototype.query_interface = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.query_interface";
	var ret = CGDOME.call.gdome_a_query_interface(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeAttr name method
 * C header: GdomeDOMString* gdome_a_name(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.name = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.name";
	var ret = CGDOME.call.gdome_a_name(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeAttr ownerElement method
 * C header: GdomeElement* gdome_a_ownerElement(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.ownerElement = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.ownerElement";
	var ret = CGDOME.call.gdome_a_ownerElement(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeElement.js");
		return new GdomeElement(ret, this.di);
	}
}

/** GdomeAttr specified method
 * C header: GdomeBoolean gdome_a_specified(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.specified = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.specified";
	var ret = CGDOME.call.gdome_a_specified(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeAttr value method
 * C header: GdomeDOMString* gdome_a_value(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.value = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.value";
	var ret = CGDOME.call.gdome_a_value(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeAttr set_value method
 * C header: void gdome_a_set_value(GdomeAttr*, GdomeDOMString*, GdomeException*)
 */
GdomeAttr.prototype.set_value = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeAttr.prototype.set_value: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeAttr.prototype.set_value";
	CGDOME.call.gdome_a_set_value(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr nodeName method
 * C header: GdomeDOMString* gdome_a_nodeName(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.nodeName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.nodeName";
	var ret = CGDOME.call.gdome_a_nodeName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeAttr nodeValue method
 * C header: GdomeDOMString* gdome_a_nodeValue(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.nodeValue = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.nodeValue";
	var ret = CGDOME.call.gdome_a_nodeValue(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeAttr set_nodeValue method
 * C header: void gdome_a_set_nodeValue(GdomeAttr*, GdomeDOMString*, GdomeException*)
 */
GdomeAttr.prototype.set_nodeValue = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeAttr.prototype.set_nodeValue: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeAttr.prototype.set_nodeValue";
	CGDOME.call.gdome_a_set_nodeValue(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr nodeType method
 * C header: unsigned short gdome_a_nodeType(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.nodeType = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.nodeType";
	var ret = CGDOME.call.gdome_a_nodeType(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeAttr parentNode method
 * C header: GdomeNode* gdome_a_parentNode(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.parentNode = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.parentNode";
	var ret = CGDOME.call.gdome_a_parentNode(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr childNodes method
 * C header: GdomeNodeList* gdome_a_childNodes(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.childNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.childNodes";
	var ret = CGDOME.call.gdome_a_childNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNodeList.js");
		return new GdomeNodeList(ret, this.di);
	}
}

/** GdomeAttr firstChild method
 * C header: GdomeNode* gdome_a_firstChild(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.firstChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.firstChild";
	var ret = CGDOME.call.gdome_a_firstChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr lastChild method
 * C header: GdomeNode* gdome_a_lastChild(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.lastChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.lastChild";
	var ret = CGDOME.call.gdome_a_lastChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr previousSibling method
 * C header: GdomeNode* gdome_a_previousSibling(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.previousSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.previousSibling";
	var ret = CGDOME.call.gdome_a_previousSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr nextSibling method
 * C header: GdomeNode* gdome_a_nextSibling(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.nextSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.nextSibling";
	var ret = CGDOME.call.gdome_a_nextSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr attributes method
 * C header: GdomeNamedNodeMap* gdome_a_attributes(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.attributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.attributes";
	var ret = CGDOME.call.gdome_a_attributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNamedNodeMap.js");
		return new GdomeNamedNodeMap(ret, this.di);
	}
}

/** GdomeAttr ownerDocument method
 * C header: GdomeDocument* gdome_a_ownerDocument(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.ownerDocument = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.ownerDocument";
	var ret = CGDOME.call.gdome_a_ownerDocument(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeAttr insertBefore method
 * C header: GdomeNode* gdome_a_insertBefore(GdomeAttr*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeAttr.prototype.insertBefore = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeAttr.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.insertBefore: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeAttr.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.insertBefore: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.insertBefore";
	var ret = CGDOME.call.gdome_a_insertBefore(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr replaceChild method
 * C header: GdomeNode* gdome_a_replaceChild(GdomeAttr*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeAttr.prototype.replaceChild = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeAttr.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.replaceChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeAttr.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.replaceChild: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.replaceChild";
	var ret = CGDOME.call.gdome_a_replaceChild(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr removeChild method
 * C header: GdomeNode* gdome_a_removeChild(GdomeAttr*, GdomeNode*, GdomeException*)
 */
GdomeAttr.prototype.removeChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeAttr.prototype.removeChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.removeChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.removeChild";
	var ret = CGDOME.call.gdome_a_removeChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr appendChild method
 * C header: GdomeNode* gdome_a_appendChild(GdomeAttr*, GdomeNode*, GdomeException*)
 */
GdomeAttr.prototype.appendChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeAttr.prototype.appendChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.appendChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.appendChild";
	var ret = CGDOME.call.gdome_a_appendChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr hasChildNodes method
 * C header: GdomeBoolean gdome_a_hasChildNodes(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.hasChildNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.hasChildNodes";
	var ret = CGDOME.call.gdome_a_hasChildNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeAttr cloneNode method
 * C header: GdomeNode* gdome_a_cloneNode(GdomeAttr*, GdomeBoolean, GdomeException*)
 */
GdomeAttr.prototype.cloneNode = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.cloneNode";
	var ret = CGDOME.call.gdome_a_cloneNode(this.pointer, (arg0?1:0), GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeAttr normalize method
 * C header: void gdome_a_normalize(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.normalize = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.normalize";
	CGDOME.call.gdome_a_normalize(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr isSupported method
 * C header: GdomeBoolean gdome_a_isSupported(GdomeAttr*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeAttr.prototype.isSupported = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeAttr.prototype.isSupported: GdomeDOMString.mkref";
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
		GDOME.exception.msg = "GdomeAttr.prototype.isSupported: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeAttr.prototype.isSupported";
	var ret = CGDOME.call.gdome_a_isSupported(this.pointer, gstr0.pointer, gstr1.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeAttr namespaceURI method
 * C header: GdomeDOMString* gdome_a_namespaceURI(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.namespaceURI = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.namespaceURI";
	var ret = CGDOME.call.gdome_a_namespaceURI(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeAttr prefix method
 * C header: GdomeDOMString* gdome_a_prefix(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.prefix = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.prefix";
	var ret = CGDOME.call.gdome_a_prefix(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeAttr set_prefix method
 * C header: void gdome_a_set_prefix(GdomeAttr*, GdomeDOMString*, GdomeException*)
 */
GdomeAttr.prototype.set_prefix = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeAttr.prototype.set_prefix: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeAttr.prototype.set_prefix";
	CGDOME.call.gdome_a_set_prefix(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr localName method
 * C header: GdomeDOMString* gdome_a_localName(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.localName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.localName";
	var ret = CGDOME.call.gdome_a_localName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeAttr hasAttributes method
 * C header: GdomeBoolean gdome_a_hasAttributes(GdomeAttr*, GdomeException*)
 */
GdomeAttr.prototype.hasAttributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.hasAttributes";
	var ret = CGDOME.call.gdome_a_hasAttributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeAttr addEventListener method
 * C header: void gdome_a_addEventListener(GdomeAttr*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeAttr.prototype.addEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeAttr.prototype.addEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeAttr.prototype.addEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.addEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.addEventListener";
	CGDOME.call.gdome_a_addEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr removeEventListener method
 * C header: void gdome_a_removeEventListener(GdomeAttr*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeAttr.prototype.removeEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeAttr.prototype.removeEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeAttr.prototype.removeEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.removeEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.removeEventListener";
	CGDOME.call.gdome_a_removeEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr dispatchEvent method
 * C header: GdomeBoolean gdome_a_dispatchEvent(GdomeAttr*, GdomeEvent*, GdomeException*)
 */
GdomeAttr.prototype.dispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeAttr.prototype.dispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.dispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.dispatchEvent";
	var ret = CGDOME.call.gdome_a_dispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeAttr subTreeDispatchEvent method
 * C header: void gdome_a_subTreeDispatchEvent(GdomeAttr*, GdomeEvent*, GdomeException*)
 */
GdomeAttr.prototype.subTreeDispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeAttr.prototype.subTreeDispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.subTreeDispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.subTreeDispatchEvent";
	CGDOME.call.gdome_a_subTreeDispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeAttr canAppend method
 * C header: GdomeBoolean gdome_a_canAppend(GdomeAttr*, GdomeNode*, GdomeException*)
 */
GdomeAttr.prototype.canAppend = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeAttr.prototype.canAppend: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeAttr.prototype.canAppend: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeAttr.prototype.canAppend";
	var ret = CGDOME.call.gdome_a_canAppend(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

