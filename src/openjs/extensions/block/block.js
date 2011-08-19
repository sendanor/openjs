/* Extended JavaScript Library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/* The exception that will be used to break from the block */
function BlockException(value) {
	if(this instanceof arguments.callee) {
		this.value = value;
	} else {
		return new BlockException(value);
	}
}

/* Implements block of code with an exit callback which can be used inside other callbacks. Returns first argument provided to the callback. */
function Block(code) {
	function exit(i) { throw new BlockException(i); }
	try {
		return code(exit);
	} catch(e) {
		if(e instanceof BlockException) return e.value;
		throw e;
	}
}

/* Can be used in a catch block to skip our exceptions */
Block.skip = function(e) {
	if(e instanceof BlockException) throw e;
}

/* EOF */
