/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeNamedNodeMap(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeNamedNodeMap) {
			return arg1;
		} else if(arg1.toGdomeNamedNodeMap !== undefined) {
			return arg1.toGdomeNamedNodeMap();
		} else {
			throw Error("Could not convert object to GdomeNamedNodeMap!");
		}
	}
}

/** GdomeNamedNodeMap ref method
 * C header: void gdome_nnm_ref(GdomeNamedNodeMap*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.ref";
	CGDOME.call.gdome_nnm_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeNamedNodeMap unref method
 * C header: void gdome_nnm_unref(GdomeNamedNodeMap*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.unref";
	CGDOME.call.gdome_nnm_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeNamedNodeMap query_interface method
 * C header: gpointer gdome_nnm_query_interface(GdomeNamedNodeMap*, const char*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.query_interface = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.query_interface";
	var ret = CGDOME.call.gdome_nnm_query_interface(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeNamedNodeMap getNamedItem method
 * C header: GdomeNode* gdome_nnm_getNamedItem(GdomeNamedNodeMap*, GdomeDOMString*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.getNamedItem = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeNamedNodeMap.prototype.getNamedItem: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.getNamedItem";
	var ret = CGDOME.call.gdome_nnm_getNamedItem(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeNamedNodeMap setNamedItem method
 * C header: GdomeNode* gdome_nnm_setNamedItem(GdomeNamedNodeMap*, GdomeNode*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.setNamedItem = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeNamedNodeMap.prototype.setNamedItem: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.setNamedItem: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.setNamedItem";
	var ret = CGDOME.call.gdome_nnm_setNamedItem(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeNamedNodeMap removeNamedItem method
 * C header: GdomeNode* gdome_nnm_removeNamedItem(GdomeNamedNodeMap*, GdomeDOMString*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.removeNamedItem = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeNamedNodeMap.prototype.removeNamedItem: GdomeDOMString.mkref";
		gstr0 = GdomeDOMString.mkref(String(arg0));
		if(gstr0.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.removeNamedItem";
	var ret = CGDOME.call.gdome_nnm_removeNamedItem(this.pointer, gstr0.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeNamedNodeMap item method
 * C header: GdomeNode* gdome_nnm_item(GdomeNamedNodeMap*, gulong, GdomeException*)
 */
GdomeNamedNodeMap.prototype.item = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.item";
	var ret = CGDOME.call.gdome_nnm_item(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeNamedNodeMap length method
 * C header: gulong gdome_nnm_length(GdomeNamedNodeMap*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.length = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.length";
	var ret = CGDOME.call.gdome_nnm_length(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeNamedNodeMap getNamedItemNS method
 * C header: GdomeNode* gdome_nnm_getNamedItemNS(GdomeNamedNodeMap*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.getNamedItemNS = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeNamedNodeMap.prototype.getNamedItemNS: GdomeDOMString.mkref";
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
		GDOME.exception.msg = "GdomeNamedNodeMap.prototype.getNamedItemNS: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.getNamedItemNS";
	var ret = CGDOME.call.gdome_nnm_getNamedItemNS(this.pointer, gstr0.pointer, gstr1.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeNamedNodeMap setNamedItemNS method
 * C header: GdomeNode* gdome_nnm_setNamedItemNS(GdomeNamedNodeMap*, GdomeNode*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.setNamedItemNS = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	Extension.load("gdome/GdomeNode.js");
	if(!(arg0 instanceof GdomeNode)) {
		GDOME.exception.msg = "GdomeNamedNodeMap.prototype.setNamedItemNS: argument not instance of GdomeNode";
		throw GDOME.exception;
	}
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.setNamedItemNS: !arg0.pointer";
	if(arg0.pointer.address == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.setNamedItemNS";
	var ret = CGDOME.call.gdome_nnm_setNamedItemNS(this.pointer, arg0.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeNamedNodeMap removeNamedItemNS method
 * C header: GdomeNode* gdome_nnm_removeNamedItemNS(GdomeNamedNodeMap*, GdomeDOMString*, GdomeDOMString*, GdomeException*)
 */
GdomeNamedNodeMap.prototype.removeNamedItemNS = function(arg0, arg1) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	var gstr0;
	Extension.load("gdome/GdomeDOMString.js");
	if(arg0 instanceof GdomeDOMString) {
		gstr0 = arg0;
		if(gstr0.pointer.address !== 0) { gstr0.ref(); }
	} else {
		Extension.load("gdome/GdomeDOMString.js");
		GDOME.exception.msg = "GdomeNamedNodeMap.prototype.removeNamedItemNS: GdomeDOMString.mkref";
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
		GDOME.exception.msg = "GdomeNamedNodeMap.prototype.removeNamedItemNS: GdomeDOMString.mkref";
		gstr1 = GdomeDOMString.mkref(String(arg1));
		if(gstr1.pointer.address == 0) { throw GDOME.exception; }
	}
	GDOME.exception.msg = "GdomeNamedNodeMap.prototype.removeNamedItemNS";
	var ret = CGDOME.call.gdome_nnm_removeNamedItemNS(this.pointer, gstr0.pointer, gstr1.pointer, GDOME.exception.pointer);
	if(gstr0.pointer.address !== 0) gstr0.unref();
	if(gstr1.pointer.address !== 0) gstr1.unref();
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

