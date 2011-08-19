/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeText(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeText) {
			return arg1;
		} else if(arg1.toGdomeText !== undefined) {
			return arg1.toGdomeText();
		} else {
			throw Error("Could not convert object to GdomeText!");
		}
	}
}

/* Extended JavaScript String library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Convert to GdomeNode */
GdomeText.prototype.toGdomeNode = function() {
	var ptr = CGDOME.call.gdome_extra_cast_text_to_node(this.pointer);
	if(ptr == 0) {
		GDOME.exception.msg = "toGdomeNode failed";
		throw GDOME.exception;
	}
	Extension.load("gdome/GdomeNode.js");
	return new GdomeNode(ptr, this.di);
}

/* EOF */
/** GdomeText splitText method
 * C header: GdomeText* gdome_t_splitText(GdomeText*, gulong, GdomeException*)
 */
GdomeText.prototype.splitText = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.splitText";
	var ret = CGDOME.call.gdome_t_splitText(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		return new GdomeText(ret, this.di);
	}
}

/** GdomeText data method
 * C header: GdomeDOMString* gdome_t_data(GdomeText*, GdomeException*)
 */
GdomeText.prototype.data = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.data";
	var ret = CGDOME.call.gdome_t_data(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeText set_data method
 * C header: void gdome_t_set_data(GdomeText*, GdomeDOMString*, GdomeException*)
 */
GdomeText.prototype.set_data = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.set_data: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeText.prototype.set_data";
	CGDOME.call.gdome_t_set_data(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText length method
 * C header: gulong gdome_t_length(GdomeText*, GdomeException*)
 */
GdomeText.prototype.length = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.length";
	var ret = CGDOME.call.gdome_t_length(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeText substringData method
 * C header: GdomeDOMString* gdome_t_substringData(GdomeText*, gulong, gulong, GdomeException*)
 */
GdomeText.prototype.substringData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.substringData";
	var ret = CGDOME.call.gdome_t_substringData(this.pointer, arg0, arg1, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeText appendData method
 * C header: void gdome_t_appendData(GdomeText*, GdomeDOMString*, GdomeException*)
 */
GdomeText.prototype.appendData = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.appendData: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeText.prototype.appendData";
	CGDOME.call.gdome_t_appendData(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText insertData method
 * C header: void gdome_t_insertData(GdomeText*, gulong, GdomeDOMString*, GdomeException*)
 */
GdomeText.prototype.insertData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr1;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg1 instanceof GdomeDOMString) {
		gstr1 = arg1;
		if(gstr1.pointer.address !== 0) { gstr1.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.insertData: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeText.prototype.insertData";
	CGDOME.call.gdome_t_insertData(this.pointer, arg0, gstr1.pointer, GDOME.exception.pointer);
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText deleteData method
 * C header: void gdome_t_deleteData(GdomeText*, gulong, gulong, GdomeException*)
 */
GdomeText.prototype.deleteData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.deleteData";
	CGDOME.call.gdome_t_deleteData(this.pointer, arg0, arg1, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText replaceData method
 * C header: void gdome_t_replaceData(GdomeText*, gulong, gulong, GdomeDOMString*, GdomeException*)
 */
GdomeText.prototype.replaceData = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr2;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg2 instanceof GdomeDOMString) {
		gstr2 = arg2;
		if(gstr2.pointer.address !== 0) { gstr2.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.replaceData: GdomeDOMString.mkref";
		gstr2 = GdomeDOMString.mkref(String(arg2));
		if(gstr2.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeText.prototype.replaceData";
	CGDOME.call.gdome_t_replaceData(this.pointer, arg0, arg1, gstr2.pointer, GDOME.exception.pointer);
	if(gstr2.pointer.address !== 0) gstr2.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText ref method
 * C header: void gdome_t_ref(GdomeText*, GdomeException*)
 */
GdomeText.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.ref";
	CGDOME.call.gdome_t_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText unref method
 * C header: void gdome_t_unref(GdomeText*, GdomeException*)
 */
GdomeText.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.unref";
	CGDOME.call.gdome_t_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText query_interface method
 * C header: gpointer gdome_t_query_interface(GdomeText*, const char*, GdomeException*)
 */
GdomeText.prototype.query_interface = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.query_interface";
	var ret = CGDOME.call.gdome_t_query_interface(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeText nodeName method
 * C header: GdomeDOMString* gdome_t_nodeName(GdomeText*, GdomeException*)
 */
GdomeText.prototype.nodeName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.nodeName";
	var ret = CGDOME.call.gdome_t_nodeName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeText nodeValue method
 * C header: GdomeDOMString* gdome_t_nodeValue(GdomeText*, GdomeException*)
 */
GdomeText.prototype.nodeValue = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.nodeValue";
	var ret = CGDOME.call.gdome_t_nodeValue(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeText set_nodeValue method
 * C header: void gdome_t_set_nodeValue(GdomeText*, GdomeDOMString*, GdomeException*)
 */
GdomeText.prototype.set_nodeValue = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.set_nodeValue: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeText.prototype.set_nodeValue";
	CGDOME.call.gdome_t_set_nodeValue(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText nodeType method
 * C header: unsigned short gdome_t_nodeType(GdomeText*, GdomeException*)
 */
GdomeText.prototype.nodeType = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.nodeType";
	var ret = CGDOME.call.gdome_t_nodeType(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeText parentNode method
 * C header: GdomeNode* gdome_t_parentNode(GdomeText*, GdomeException*)
 */
GdomeText.prototype.parentNode = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.parentNode";
	var ret = CGDOME.call.gdome_t_parentNode(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText childNodes method
 * C header: GdomeNodeList* gdome_t_childNodes(GdomeText*, GdomeException*)
 */
GdomeText.prototype.childNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.childNodes";
	var ret = CGDOME.call.gdome_t_childNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNodeList.js");
		return new GdomeNodeList(ret, this.di);
	}
}

/** GdomeText firstChild method
 * C header: GdomeNode* gdome_t_firstChild(GdomeText*, GdomeException*)
 */
GdomeText.prototype.firstChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.firstChild";
	var ret = CGDOME.call.gdome_t_firstChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText lastChild method
 * C header: GdomeNode* gdome_t_lastChild(GdomeText*, GdomeException*)
 */
GdomeText.prototype.lastChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.lastChild";
	var ret = CGDOME.call.gdome_t_lastChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText previousSibling method
 * C header: GdomeNode* gdome_t_previousSibling(GdomeText*, GdomeException*)
 */
GdomeText.prototype.previousSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.previousSibling";
	var ret = CGDOME.call.gdome_t_previousSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText nextSibling method
 * C header: GdomeNode* gdome_t_nextSibling(GdomeText*, GdomeException*)
 */
GdomeText.prototype.nextSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.nextSibling";
	var ret = CGDOME.call.gdome_t_nextSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText attributes method
 * C header: GdomeNamedNodeMap* gdome_t_attributes(GdomeText*, GdomeException*)
 */
GdomeText.prototype.attributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.attributes";
	var ret = CGDOME.call.gdome_t_attributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNamedNodeMap.js");
		return new GdomeNamedNodeMap(ret, this.di);
	}
}

/** GdomeText ownerDocument method
 * C header: GdomeDocument* gdome_t_ownerDocument(GdomeText*, GdomeException*)
 */
GdomeText.prototype.ownerDocument = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.ownerDocument";
	var ret = CGDOME.call.gdome_t_ownerDocument(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeText insertBefore method
 * C header: GdomeNode* gdome_t_insertBefore(GdomeText*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeText.prototype.insertBefore = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeText.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.insertBefore: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeText.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.insertBefore: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.insertBefore";
	var ret = CGDOME.call.gdome_t_insertBefore(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText replaceChild method
 * C header: GdomeNode* gdome_t_replaceChild(GdomeText*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeText.prototype.replaceChild = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeText.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.replaceChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeText.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.replaceChild: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.replaceChild";
	var ret = CGDOME.call.gdome_t_replaceChild(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText removeChild method
 * C header: GdomeNode* gdome_t_removeChild(GdomeText*, GdomeNode*, GdomeException*)
 */
GdomeText.prototype.removeChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeText.prototype.removeChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.removeChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.removeChild";
	var ret = CGDOME.call.gdome_t_removeChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText appendChild method
 * C header: GdomeNode* gdome_t_appendChild(GdomeText*, GdomeNode*, GdomeException*)
 */
GdomeText.prototype.appendChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeText.prototype.appendChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.appendChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.appendChild";
	var ret = CGDOME.call.gdome_t_appendChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText hasChildNodes method
 * C header: GdomeBoolean gdome_t_hasChildNodes(GdomeText*, GdomeException*)
 */
GdomeText.prototype.hasChildNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.hasChildNodes";
	var ret = CGDOME.call.gdome_t_hasChildNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeText cloneNode method
 * C header: GdomeNode* gdome_t_cloneNode(GdomeText*, GdomeBoolean, GdomeException*)
 */
GdomeText.prototype.cloneNode = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.cloneNode";
	var ret = CGDOME.call.gdome_t_cloneNode(this.pointer, (arg0?1:0), GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeText normalize method
 * C header: void gdome_t_normalize(GdomeText*, GdomeException*)
 */
GdomeText.prototype.normalize = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.normalize";
	CGDOME.call.gdome_t_normalize(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText isSupported method
 * C header: GdomeBoolean gdome_t_isSupported(GdomeText*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeText.prototype.isSupported = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.isSupported: GdomeDOMString.mkref";
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
		GDOME.exception.msg = "GdomeText.prototype.isSupported: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeText.prototype.isSupported";
	var ret = CGDOME.call.gdome_t_isSupported(this.pointer, gstr0.pointer, gstr1.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeText namespaceURI method
 * C header: GdomeDOMString* gdome_t_namespaceURI(GdomeText*, GdomeException*)
 */
GdomeText.prototype.namespaceURI = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.namespaceURI";
	var ret = CGDOME.call.gdome_t_namespaceURI(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeText prefix method
 * C header: GdomeDOMString* gdome_t_prefix(GdomeText*, GdomeException*)
 */
GdomeText.prototype.prefix = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.prefix";
	var ret = CGDOME.call.gdome_t_prefix(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeText set_prefix method
 * C header: void gdome_t_set_prefix(GdomeText*, GdomeDOMString*, GdomeException*)
 */
GdomeText.prototype.set_prefix = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.set_prefix: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeText.prototype.set_prefix";
	CGDOME.call.gdome_t_set_prefix(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText localName method
 * C header: GdomeDOMString* gdome_t_localName(GdomeText*, GdomeException*)
 */
GdomeText.prototype.localName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.localName";
	var ret = CGDOME.call.gdome_t_localName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeText hasAttributes method
 * C header: GdomeBoolean gdome_t_hasAttributes(GdomeText*, GdomeException*)
 */
GdomeText.prototype.hasAttributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.hasAttributes";
	var ret = CGDOME.call.gdome_t_hasAttributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeText addEventListener method
 * C header: void gdome_t_addEventListener(GdomeText*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeText.prototype.addEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.addEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeText.prototype.addEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.addEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.addEventListener";
	CGDOME.call.gdome_t_addEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText removeEventListener method
 * C header: void gdome_t_removeEventListener(GdomeText*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeText.prototype.removeEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeText.prototype.removeEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeText.prototype.removeEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.removeEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.removeEventListener";
	CGDOME.call.gdome_t_removeEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText dispatchEvent method
 * C header: GdomeBoolean gdome_t_dispatchEvent(GdomeText*, GdomeEvent*, GdomeException*)
 */
GdomeText.prototype.dispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeText.prototype.dispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.dispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.dispatchEvent";
	var ret = CGDOME.call.gdome_t_dispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeText subTreeDispatchEvent method
 * C header: void gdome_t_subTreeDispatchEvent(GdomeText*, GdomeEvent*, GdomeException*)
 */
GdomeText.prototype.subTreeDispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeText.prototype.subTreeDispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.subTreeDispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.subTreeDispatchEvent";
	CGDOME.call.gdome_t_subTreeDispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeText canAppend method
 * C header: GdomeBoolean gdome_t_canAppend(GdomeText*, GdomeNode*, GdomeException*)
 */
GdomeText.prototype.canAppend = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeText.prototype.canAppend: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeText.prototype.canAppend: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeText.prototype.canAppend";
	var ret = CGDOME.call.gdome_t_canAppend(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

