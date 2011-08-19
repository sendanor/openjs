/* trim -- Trim functions for JavaScript
 * $Id: trim.js 8588 2009-08-02 15:15:50Z jheusala $
 */

this.ltrim = function(str) {
	return str.replace(new RegExp("^\\s+", "g"), "");
}

this.rtrim = function(str) {
	return str.replace(new RegExp("\\s+$", "g"), "");
}

this.trim = function(str) {
	return ltrim(rtrim(str));
}

this.escape_xml = function(tmp) {
	tmp = tmp.replace(/&/g, "&amp;");
	tmp = tmp.replace(/"/g, "&quot;");
	tmp = tmp.replace(/</g, "&lt;");
	tmp = tmp.replace(/>/g, "&gt;");
	tmp = tmp.replace(/'/g, "&#039;");
	return tmp;
}

/* Pad string to specific length from left */
String.prototype.lpad = function(len, padstr) {
	return Array(len + 1 - this.length).join(padstr) + this;
};

/* Pad string to specific length from right */
String.prototype.rpad = function(len, padstr) {
	return this + Array(len + 1 - this.length).join(padstr);
};

/* Debug */
system.stdout.writeln("This is a trim.js library test");

/* EOF */
