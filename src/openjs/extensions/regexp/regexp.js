/* Extended JavaScript RegExp library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Extend RegExp to support .escape() */
RegExp.escape = function(text) {
	if (this.m_escape_regexp == undefined) {
		var specials = [
			'/', '.', '*', '+', '?', '|',
			'(', ')', '[', ']', '{', '}', '\\'
		];
		this.m_escape_regexp = new RegExp( '(\\' + specials.join('|\\') + ')', 'g' );
	}
	return text.replace(this.m_escape_regexp, '\\$1');
}

/* EOF */

