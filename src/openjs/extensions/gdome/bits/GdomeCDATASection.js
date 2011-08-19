/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeCDATASection(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeCDATASection) {
			return arg1;
		} else if(arg1.toGdomeCDATASection !== undefined) {
			return arg1.toGdomeCDATASection();
		} else {
			throw Error("Could not convert object to GdomeCDATASection!");
		}
	}
}

/** GdomeCDATASection splitText method
 * C header: GdomeText* gdome_cds_splitText(GdomeCDATASection*, gulong, GdomeException*)
 */
GdomeCDATASection.prototype.splitText = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.splitText";
	var ret = CGDOME.call.gdome_cds_splitText(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeText.js");
		return new GdomeText(ret, this.di);
	}
}

/** GdomeCDATASection data method
 * C header: GdomeDOMString* gdome_cds_data(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.data = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.data";
	var ret = CGDOME.call.gdome_cds_data(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeCDATASection set_data method
 * C header: void gdome_cds_set_data(GdomeCDATASection*, GdomeDOMString*, GdomeException*)
 */
GdomeCDATASection.prototype.set_data = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.set_data: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.set_data";
	CGDOME.call.gdome_cds_set_data(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection length method
 * C header: gulong gdome_cds_length(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.length = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.length";
	var ret = CGDOME.call.gdome_cds_length(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeCDATASection substringData method
 * C header: GdomeDOMString* gdome_cds_substringData(GdomeCDATASection*, gulong, gulong, GdomeException*)
 */
GdomeCDATASection.prototype.substringData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.substringData";
	var ret = CGDOME.call.gdome_cds_substringData(this.pointer, arg0, arg1, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeCDATASection appendData method
 * C header: void gdome_cds_appendData(GdomeCDATASection*, GdomeDOMString*, GdomeException*)
 */
GdomeCDATASection.prototype.appendData = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.appendData: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.appendData";
	CGDOME.call.gdome_cds_appendData(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection insertData method
 * C header: void gdome_cds_insertData(GdomeCDATASection*, gulong, GdomeDOMString*, GdomeException*)
 */
GdomeCDATASection.prototype.insertData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr1;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg1 instanceof GdomeDOMString) {
		gstr1 = arg1;
		if(gstr1.pointer.address !== 0) { gstr1.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.insertData: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.insertData";
	CGDOME.call.gdome_cds_insertData(this.pointer, arg0, gstr1.pointer, GDOME.exception.pointer);
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection deleteData method
 * C header: void gdome_cds_deleteData(GdomeCDATASection*, gulong, gulong, GdomeException*)
 */
GdomeCDATASection.prototype.deleteData = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.deleteData";
	CGDOME.call.gdome_cds_deleteData(this.pointer, arg0, arg1, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection replaceData method
 * C header: void gdome_cds_replaceData(GdomeCDATASection*, gulong, gulong, GdomeDOMString*, GdomeException*)
 */
GdomeCDATASection.prototype.replaceData = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr2;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg2 instanceof GdomeDOMString) {
		gstr2 = arg2;
		if(gstr2.pointer.address !== 0) { gstr2.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.replaceData: GdomeDOMString.mkref";
		gstr2 = GdomeDOMString.mkref(String(arg2));
		if(gstr2.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.replaceData";
	CGDOME.call.gdome_cds_replaceData(this.pointer, arg0, arg1, gstr2.pointer, GDOME.exception.pointer);
	if(gstr2.pointer.address !== 0) gstr2.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection ref method
 * C header: void gdome_cds_ref(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.ref";
	CGDOME.call.gdome_cds_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection unref method
 * C header: void gdome_cds_unref(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.unref";
	CGDOME.call.gdome_cds_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection query_interface method
 * C header: gpointer gdome_cds_query_interface(GdomeCDATASection*, const char*, GdomeException*)
 */
GdomeCDATASection.prototype.query_interface = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.query_interface";
	var ret = CGDOME.call.gdome_cds_query_interface(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeCDATASection nodeName method
 * C header: GdomeDOMString* gdome_cds_nodeName(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.nodeName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.nodeName";
	var ret = CGDOME.call.gdome_cds_nodeName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeCDATASection nodeValue method
 * C header: GdomeDOMString* gdome_cds_nodeValue(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.nodeValue = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.nodeValue";
	var ret = CGDOME.call.gdome_cds_nodeValue(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeCDATASection set_nodeValue method
 * C header: void gdome_cds_set_nodeValue(GdomeCDATASection*, GdomeDOMString*, GdomeException*)
 */
GdomeCDATASection.prototype.set_nodeValue = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.set_nodeValue: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.set_nodeValue";
	CGDOME.call.gdome_cds_set_nodeValue(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection nodeType method
 * C header: unsigned short gdome_cds_nodeType(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.nodeType = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.nodeType";
	var ret = CGDOME.call.gdome_cds_nodeType(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeCDATASection parentNode method
 * C header: GdomeNode* gdome_cds_parentNode(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.parentNode = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.parentNode";
	var ret = CGDOME.call.gdome_cds_parentNode(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection childNodes method
 * C header: GdomeNodeList* gdome_cds_childNodes(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.childNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.childNodes";
	var ret = CGDOME.call.gdome_cds_childNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNodeList.js");
		return new GdomeNodeList(ret, this.di);
	}
}

/** GdomeCDATASection firstChild method
 * C header: GdomeNode* gdome_cds_firstChild(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.firstChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.firstChild";
	var ret = CGDOME.call.gdome_cds_firstChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection lastChild method
 * C header: GdomeNode* gdome_cds_lastChild(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.lastChild = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.lastChild";
	var ret = CGDOME.call.gdome_cds_lastChild(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection previousSibling method
 * C header: GdomeNode* gdome_cds_previousSibling(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.previousSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.previousSibling";
	var ret = CGDOME.call.gdome_cds_previousSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection nextSibling method
 * C header: GdomeNode* gdome_cds_nextSibling(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.nextSibling = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.nextSibling";
	var ret = CGDOME.call.gdome_cds_nextSibling(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection attributes method
 * C header: GdomeNamedNodeMap* gdome_cds_attributes(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.attributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.attributes";
	var ret = CGDOME.call.gdome_cds_attributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNamedNodeMap.js");
		return new GdomeNamedNodeMap(ret, this.di);
	}
}

/** GdomeCDATASection ownerDocument method
 * C header: GdomeDocument* gdome_cds_ownerDocument(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.ownerDocument = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.ownerDocument";
	var ret = CGDOME.call.gdome_cds_ownerDocument(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDocument.js");
		return new GdomeDocument(ret, this.di);
	}
}

/** GdomeCDATASection insertBefore method
 * C header: GdomeNode* gdome_cds_insertBefore(GdomeCDATASection*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeCDATASection.prototype.insertBefore = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.insertBefore: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.insertBefore: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.insertBefore: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.insertBefore";
	var ret = CGDOME.call.gdome_cds_insertBefore(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection replaceChild method
 * C header: GdomeNode* gdome_cds_replaceChild(GdomeCDATASection*, GdomeNode*, GdomeNode*, GdomeException*)
 */
GdomeCDATASection.prototype.replaceChild = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.replaceChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg1 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.replaceChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.replaceChild: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.replaceChild";
	var ret = CGDOME.call.gdome_cds_replaceChild(this.pointer, arg0.pointer, arg1.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection removeChild method
 * C header: GdomeNode* gdome_cds_removeChild(GdomeCDATASection*, GdomeNode*, GdomeException*)
 */
GdomeCDATASection.prototype.removeChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.removeChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.removeChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.removeChild";
	var ret = CGDOME.call.gdome_cds_removeChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection appendChild method
 * C header: GdomeNode* gdome_cds_appendChild(GdomeCDATASection*, GdomeNode*, GdomeException*)
 */
GdomeCDATASection.prototype.appendChild = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.appendChild: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.appendChild: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.appendChild";
	var ret = CGDOME.call.gdome_cds_appendChild(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection hasChildNodes method
 * C header: GdomeBoolean gdome_cds_hasChildNodes(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.hasChildNodes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.hasChildNodes";
	var ret = CGDOME.call.gdome_cds_hasChildNodes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeCDATASection cloneNode method
 * C header: GdomeNode* gdome_cds_cloneNode(GdomeCDATASection*, GdomeBoolean, GdomeException*)
 */
GdomeCDATASection.prototype.cloneNode = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.cloneNode";
	var ret = CGDOME.call.gdome_cds_cloneNode(this.pointer, (arg0?1:0), GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeCDATASection normalize method
 * C header: void gdome_cds_normalize(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.normalize = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.normalize";
	CGDOME.call.gdome_cds_normalize(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection isSupported method
 * C header: GdomeBoolean gdome_cds_isSupported(GdomeCDATASection*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeCDATASection.prototype.isSupported = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.isSupported: GdomeDOMString.mkref";
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
		GDOME.exception.msg = "GdomeCDATASection.prototype.isSupported: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.isSupported";
	var ret = CGDOME.call.gdome_cds_isSupported(this.pointer, gstr0.pointer, gstr1.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeCDATASection namespaceURI method
 * C header: GdomeDOMString* gdome_cds_namespaceURI(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.namespaceURI = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.namespaceURI";
	var ret = CGDOME.call.gdome_cds_namespaceURI(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeCDATASection prefix method
 * C header: GdomeDOMString* gdome_cds_prefix(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.prefix = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.prefix";
	var ret = CGDOME.call.gdome_cds_prefix(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeCDATASection set_prefix method
 * C header: void gdome_cds_set_prefix(GdomeCDATASection*, GdomeDOMString*, GdomeException*)
 */
GdomeCDATASection.prototype.set_prefix = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.set_prefix: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.set_prefix";
	CGDOME.call.gdome_cds_set_prefix(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection localName method
 * C header: GdomeDOMString* gdome_cds_localName(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.localName = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.localName";
	var ret = CGDOME.call.gdome_cds_localName(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeDOMString.js");
		return new GdomeDOMString(ret, this.di);
	}
}

/** GdomeCDATASection hasAttributes method
 * C header: GdomeBoolean gdome_cds_hasAttributes(GdomeCDATASection*, GdomeException*)
 */
GdomeCDATASection.prototype.hasAttributes = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.hasAttributes";
	var ret = CGDOME.call.gdome_cds_hasAttributes(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeCDATASection addEventListener method
 * C header: void gdome_cds_addEventListener(GdomeCDATASection*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeCDATASection.prototype.addEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.addEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.addEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.addEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.addEventListener";
	CGDOME.call.gdome_cds_addEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection removeEventListener method
 * C header: void gdome_cds_removeEventListener(GdomeCDATASection*, GdomeDOMString*, GdomeEventListener*, GdomeBoolean, GdomeException*)
 */
GdomeCDATASection.prototype.removeEventListener = function(arg0, arg1, arg2) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeCDATASection.prototype.removeEventListener: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	if(!(arg1 instanceof GdomeEventListener)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.removeEventListener: argument not instance of GdomeEventListener";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.removeEventListener: !arg1.pointer";
	if(arg1.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.removeEventListener";
	CGDOME.call.gdome_cds_removeEventListener(this.pointer, gstr0.pointer, arg1.pointer, (arg2?1:0), GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection dispatchEvent method
 * C header: GdomeBoolean gdome_cds_dispatchEvent(GdomeCDATASection*, GdomeEvent*, GdomeException*)
 */
GdomeCDATASection.prototype.dispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.dispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.dispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.dispatchEvent";
	var ret = CGDOME.call.gdome_cds_dispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

/** GdomeCDATASection subTreeDispatchEvent method
 * C header: void gdome_cds_subTreeDispatchEvent(GdomeCDATASection*, GdomeEvent*, GdomeException*)
 */
GdomeCDATASection.prototype.subTreeDispatchEvent = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	if(!(arg0 instanceof GdomeEvent)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.subTreeDispatchEvent: argument not instance of GdomeEvent";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.subTreeDispatchEvent: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.subTreeDispatchEvent";
	CGDOME.call.gdome_cds_subTreeDispatchEvent(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeCDATASection canAppend method
 * C header: GdomeBoolean gdome_cds_canAppend(GdomeCDATASection*, GdomeNode*, GdomeException*)
 */
GdomeCDATASection.prototype.canAppend = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeCDATASection.prototype.canAppend: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeCDATASection.prototype.canAppend: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeCDATASection.prototype.canAppend";
	var ret = CGDOME.call.gdome_cds_canAppend(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return (ret === 1) ? true : false;
}

