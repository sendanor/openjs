/* This file has been build automatically using build-objects.pl. */
/* DO NOT EDIT IT DIRECTLY */

/** Constructor (when called with new) or object builder otherwise */
function GdomeNodeList(arg1, arg2) {
	if(this instanceof arguments.callee) {
		this.pointer = arg1;
		this.di = arg2;
	} else {
		if(arg1 instanceof GdomeNodeList) {
			return arg1;
		} else if(arg1.toGdomeNodeList !== undefined) {
			return arg1.toGdomeNodeList();
		} else {
			throw Error("Could not convert object to GdomeNodeList!");
		}
	}
}

/** GdomeNodeList ref method
 * C header: void gdome_nl_ref(GdomeNodeList*, GdomeException*)
 */
GdomeNodeList.prototype.ref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNodeList.prototype.ref";
	CGDOME.call.gdome_nl_ref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeNodeList unref method
 * C header: void gdome_nl_unref(GdomeNodeList*, GdomeException*)
 */
GdomeNodeList.prototype.unref = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNodeList.prototype.unref";
	CGDOME.call.gdome_nl_unref(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
}

/** GdomeNodeList query_interface method
 * C header: gpointer gdome_nl_query_interface(GdomeNodeList*, const char*, GdomeException*)
 */
GdomeNodeList.prototype.query_interface = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNodeList.prototype.query_interface";
	var ret = CGDOME.call.gdome_nl_query_interface(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

/** GdomeNodeList item method
 * C header: GdomeNode* gdome_nl_item(GdomeNodeList*, gulong, GdomeException*)
 */
GdomeNodeList.prototype.item = function(arg0) {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNodeList.prototype.item";
	var ret = CGDOME.call.gdome_nl_item(this.pointer, arg0, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	if(ret.address !== 0) {
		Extension.load("gdome/GdomeNode.js");
		return new GdomeNode(ret, this.di);
	}
}

/** GdomeNodeList length method
 * C header: gulong gdome_nl_length(GdomeNodeList*, GdomeException*)
 */
GdomeNodeList.prototype.length = function() {
	GDOME.exception.msg = "!this.pointer";
	if(this.pointer == 0) { throw GDOME.exception; }
	GDOME.exception.msg = "GdomeNodeList.prototype.length";
	var ret = CGDOME.call.gdome_nl_length(this.pointer, GDOME.exception.pointer);
	if(GDOME.exception.value() !== 0) { throw GDOME.exception; }
	return ret;
}

