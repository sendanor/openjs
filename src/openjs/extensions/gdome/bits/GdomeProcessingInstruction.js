/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeProcessingInstruction(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeProcessingInstruction) {
			return arg1;
		} else if(arg1.toGdomeProcessingInstruction !== undefined) {
			return arg1.toGdomeProcessingInstruction();
		} else {
			throw Error("Could not convert object to GdomeProcessingInstruction!");
		}
	}
}

/** GdomeProcessingInstruction target method
 * C header: GdomeDOMString* gdome_pi_target(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.target = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.target";
	var ret = CGDOME.call.gdome_pi_target(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeProcessingInstruction data method
 * C header: GdomeDOMString* gdome_pi_data(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.data = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.data";
	var ret = CGDOME.call.gdome_pi_data(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeProcessingInstruction set_data method
 * C header: void gdome_pi_set_data(GdomeProcessingInstruction*, GdomeDOMString*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.set_data = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.set_data: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.set_data";
	CGDOME.call.gdome_pi_set_data(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction ref method
 * C header: void gdome_pi_ref(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.ref";
	CGDOME.call.gdome_pi_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction unref method
 * C header: void gdome_pi_unref(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.unref";
	CGDOME.call.gdome_pi_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction query_interface method
 * C header: gpointer gdome_pi_query_interface(GdomeProcessingInstruction*, const char*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.query_interface = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.query_interface";
	var ret = CGDOME.call.gdome_pi_query_interface(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeProcessingInstruction nodeName method
 * C header: GdomeDOMString* gdome_pi_nodeName(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.nodeName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.nodeName";
	var ret = CGDOME.call.gdome_pi_nodeName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeProcessingInstruction nodeValue method
 * C header: GdomeDOMString* gdome_pi_nodeValue(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.nodeValue = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.nodeValue";
	var ret = CGDOME.call.gdome_pi_nodeValue(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeProcessingInstruction set_nodeValue method
 * C header: void gdome_pi_set_nodeValue(GdomeProcessingInstruction*, GdomeDOMString*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.set_nodeValue = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.set_nodeValue: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.set_nodeValue";
	CGDOME.call.gdome_pi_set_nodeValue(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction nodeType method
 * C header: unsigned short gdome_pi_nodeType(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.nodeType = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.nodeType";
	var ret = CGDOME.call.gdome_pi_nodeType(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeProcessingInstruction parentNode method
 * C header: GdomeNode* gdome_pi_parentNode(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.parentNode = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.parentNode";
	var ret = CGDOME.call.gdome_pi_parentNode(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction childNodes method
 * C header: GdomeNodeList* gdome_pi_childNodes(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.childNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.childNodes";
	var ret = CGDOME.call.gdome_pi_childNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNodeList.js");
		return new GdomeNodeList(ret, this.di);
	}
}

/** GdomeProcessingInstruction firstChild method
 * C header: GdomeNode* gdome_pi_firstChild(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.firstChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.firstChild";
	var ret = CGDOME.call.gdome_pi_firstChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction lastChild method
 * C header: GdomeNode* gdome_pi_lastChild(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.lastChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.lastChild";
	var ret = CGDOME.call.gdome_pi_lastChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction previousSibling method
 * C header: GdomeNode* gdome_pi_previousSibling(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.previousSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.previousSibling";
	var ret = CGDOME.call.gdome_pi_previousSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction nextSibling method
 * C header: GdomeNode* gdome_pi_nextSibling(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.nextSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.nextSibling";
	var ret = CGDOME.call.gdome_pi_nextSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction attributes method
 * C header: GdomeNamedNodeMap* gdome_pi_attributes(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.attributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.attributes";
	var ret = CGDOME.call.gdome_pi_attributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNamedNodeMap.js");
		return new GdomeNamedNodeMap(ret, this.di);
	}
}

/** GdomeProcessingInstruction ownerDocument method
 * C header: GdomeDocument* gdome_pi_ownerDocument(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.ownerDocument = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.ownerDocument";
	var ret = CGDOME.call.gdome_pi_ownerDocument(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeProcessingInstruction insertBefore method
 * C header: GdomeNode* gdome_pi_insertBefore(GdomeProcessingInstruction*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.insertBefore = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.insertBefore: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.insertBefore: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.insertBefore";
	var ret = CGDOME.call.gdome_pi_insertBefore(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction replaceChild method
 * C header: GdomeNode* gdome_pi_replaceChild(GdomeProcessingInstruction*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.replaceChild = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.replaceChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.replaceChild: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.replaceChild";
	var ret = CGDOME.call.gdome_pi_replaceChild(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction removeChild method
 * C header: GdomeNode* gdome_pi_removeChild(GdomeProcessingInstruction*, GdomeNode*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.removeChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.removeChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.removeChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.removeChild";
	var ret = CGDOME.call.gdome_pi_removeChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction appendChild method
 * C header: GdomeNode* gdome_pi_appendChild(GdomeProcessingInstruction*, GdomeNode*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.appendChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.appendChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.appendChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.appendChild";
	var ret = CGDOME.call.gdome_pi_appendChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction hasChildNodes method
 * C header: GdomeBoolean gdome_pi_hasChildNodes(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.hasChildNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.hasChildNodes";
	var ret = CGDOME.call.gdome_pi_hasChildNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeProcessingInstruction cloneNode method
 * C header: GdomeNode* gdome_pi_cloneNode(GdomeProcessingInstruction*, GdomeBoolean, GdomeException*)
 */
GdomeProcessingInstruction.prototype.cloneNode = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.cloneNode";
	var ret = CGDOME.call.gdome_pi_cloneNode(this.pointer, (arg0?1:0), GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeProcessingInstruction normalize method
 * C header: void gdome_pi_normalize(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.normalize = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.normalize";
	CGDOME.call.gdome_pi_normalize(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction isSupported method
 * C header: GdomeBoolean gdome_pi_isSupported(GdomeProcessingInstruction*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.isSupported = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.isSupported: GdomeDOMString.mkref";
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
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.isSupported: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.isSupported";
	var ret = CGDOME.call.gdome_pi_isSupported(this.pointer, gstr0.pointer, gstr1.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeProcessingInstruction namespaceURI method
 * C header: GdomeDOMString* gdome_pi_namespaceURI(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.namespaceURI = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.namespaceURI";
	var ret = CGDOME.call.gdome_pi_namespaceURI(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeProcessingInstruction prefix method
 * C header: GdomeDOMString* gdome_pi_prefix(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.prefix = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.prefix";
	var ret = CGDOME.call.gdome_pi_prefix(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeProcessingInstruction set_prefix method
 * C header: void gdome_pi_set_prefix(GdomeProcessingInstruction*, GdomeDOMString*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.set_prefix = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.set_prefix: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.set_prefix";
	CGDOME.call.gdome_pi_set_prefix(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction localName method
 * C header: GdomeDOMString* gdome_pi_localName(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.localName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.localName";
	var ret = CGDOME.call.gdome_pi_localName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeProcessingInstruction hasAttributes method
 * C header: GdomeBoolean gdome_pi_hasAttributes(GdomeProcessingInstruction*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.hasAttributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.hasAttributes";
	var ret = CGDOME.call.gdome_pi_hasAttributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeProcessingInstruction addEventListener method
 * C header: void gdome_pi_addEventListener(GdomeProcessingInstruction*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeProcessingInstruction.prototype.addEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.addEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.addEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.addEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.addEventListener";
	CGDOME.call.gdome_pi_addEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction removeEventListener method
 * C header: void gdome_pi_removeEventListener(GdomeProcessingInstruction*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeProcessingInstruction.prototype.removeEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.removeEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.removeEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.removeEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.removeEventListener";
	CGDOME.call.gdome_pi_removeEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction dispatchEvent method
 * C header: GdomeBoolean gdome_pi_dispatchEvent(GdomeProcessingInstruction*, GdomeEvent*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.dispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.dispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.dispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.dispatchEvent";
	var ret = CGDOME.call.gdome_pi_dispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeProcessingInstruction subTreeDispatchEvent method
 * C header: void gdome_pi_subTreeDispatchEvent(GdomeProcessingInstruction*, GdomeEvent*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.subTreeDispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.subTreeDispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.subTreeDispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.subTreeDispatchEvent";
	CGDOME.call.gdome_pi_subTreeDispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeProcessingInstruction canAppend method
 * C header: GdomeBoolean gdome_pi_canAppend(GdomeProcessingInstruction*, GdomeNode*, GdomeException*)
 */
GdomeProcessingInstruction.prototype.canAppend = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeProcessingInstruction.prototype.canAppend: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.canAppend: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeProcessingInstruction.prototype.canAppend";
	var ret = CGDOME.call.gdome_pi_canAppend(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

