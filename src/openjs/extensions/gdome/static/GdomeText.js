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
