/* Extended JavaScript String library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

String.prototype.ltrim = function ltrim () {
	return this.replace(new RegExp("^\\s+", "g"), "");
}

String.prototype.rtrim = function rtrim () {
	return this.replace(new RegExp("\\s+$", "g"), "");
}

String.prototype.trim = function trim () {
	return this.ltrim().rtrim();
}

/* Escape string for XML */
String.prototype.escape_xml = function escape_xml () {
	return this.replace(/&/g, "&amp;")
	           .replace(/"/g, "&quot;")
	           .replace(/"/g, "&quot;")
	           .replace(/</g, "&lt;")
	           .replace(/>/g, "&gt;")
	           .replace(/'/g, "&#039;");
}

/* Pad string to specific length from left */
String.prototype.lpad = function(len, padstr) {
	if(this.length >= len) return this;
	return Array(len + 1 - this.length).join(padstr) + this;
}

/* Pad string to specific length from right */
String.prototype.rpad = function(len, padstr) {
	if(this.length >= len) return this;
	return this + Array(len + 1 - this.length).join(padstr);
}

/** Helper object to iterate 8-bit data string in arbitrary binary chunks */
function BinaryIterator(bits) {
	//this.data = data;
	this.major = 0;
	this.minor = 0;
	this.bits = bits;
	this.major_bits = 8;
	
	/** Iterate to next place */
	this.next = function next () {
		this.minor += this.bits;
		while(this.minor >= this.major_bits) {
			this.minor -= this.major_bits;
			this.major += 1;
		}
	}
	
	/** Get current value from data */
	this.getValue = function getValue (data) {
		//system.stderr.write("this.major = '" + this.major + "'\n");
		//system.stderr.write("this.minor = '" + this.minor + "'\n");
		if( this.minor < this.major_bits-this.bits+1 ) {
			var a = data.charCodeAt(this.major);
			//system.stderr.write("a = '" + a + "'\n");
			var c = (a >> ((this.major_bits-this.bits)-this.minor)) & (Math.pow(2, this.bits)-1);
			//system.stderr.write("c = '" + c + "'\n");
			return c;
		} else {
			var a = data.charCodeAt(this.major);
			//system.stderr.write("a = '" + a + "'\n");
			var b = ( this.major+1 < data.length ) ? data.charCodeAt(this.major+1) : 0;
			//system.stderr.write("b = '" + b + "'\n");
			var b_bits = this.minor+this.bits-this.major_bits;
			//system.stderr.write("b_bits = '" + b_bits + "'\n");
			var a_bits = this.bits-b_bits;
			//system.stderr.write("a_bits = '" + a_bits + "'\n");
			var ac = (a >> ((this.major_bits-a_bits)-this.minor)) & (Math.pow(2, a_bits)-1);
			//system.stderr.write("ac = '" + ac + "'\n");
			var bc = (b >> (this.major_bits-b_bits)) & (Math.pow(2, b_bits)-1);
			//system.stderr.write("bc = '" + bc + "'\n");
			var c = (ac << b_bits) | bc;
			//system.stderr.write("c = '" + c + "'\n");
			return c;
		}
	}
	
}

/** Split a string into smaller chunks */
String.prototype.chunkSplit = function(len) {
	var buf = [];
	for(var i=0; i<this.length; i=i+len) {
		if(i+len < this.length) {
			buf.push(this.slice(i, i+len));
		} else {
			buf.push(this.slice(i));
		}
	}
	return buf;
}

/** Return string encoded in Base64 */
String.prototype.encodeBase64 = function encodeBase64 () {
	charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	if(this.length == 0) { return ""; }
	var index = new BinaryIterator(6);
	var buf = "";
	while(index.major < this.length) {
		var c = index.getValue(this);
		var ch = charset.charAt(c);
		//system.stderr.write("ch = '" + ch + "'\n");
		//system.stderr.write( "(" + index.major + ", " + index.minor + ") = [" + c + "]\n" );
		buf += ch;
		index.next();
	}
	var retsize = Math.ceil(Math.ceil(this.length*8/6)/4)*4;
	return buf.rpad(retsize, '=').chunkSplit(76).join("\n");
}

/** Return string encoded in Base64 */
/*
String.prototype.decodeBase64 = function decodeBase64 () {
}
*/

/** Split single CSV row */
String.prototype.splitCSVRow = function splitCSVRow (delimiter, enclosure) {
	var cells = [];
	//system.stdout.writeln( "this='" + this + "'" );
	
	if(this.length == 0) return cells;
	
	var last_was_enclosure = false;
	var enclosure_open = false;
	var field = "";
	for(var i=0; i<this.length; i=i+1) {
		var ch = this.charAt(i);
		
		// Char is enclosure, enclosure is not open and last char was enclosure
		if( (last_was_enclosure) && (enclosure_open==false) && (ch==enclosure) ) {
			field += enclosure;
			enclosure_open = true;
			continue;
		}
		
		// Char is enclosure and enclosure is not open
		if( (enclosure_open==false) && (ch==enclosure) ) {
			enclosure_open = true;
			continue;
		}
		
		// Char is enclosure and enclosure is open
		if( (enclosure_open==true) && (ch==enclosure) ) {
			last_was_enclosure = true;
			enclosure_open = false;
			continue;
		}
		
		// Char is delimiter and enclosure isn't open
		if( (enclosure_open==false) && (ch==delimiter) ) {
			cells.push(field);
			last_was_enclosure = false;
			//system.stdout.writeln( "field='" + field + "'" );
			field = "";
			continue;
		}
		
		// Char is field data
		field += ch;
		last_was_enclosure = false;
	}
	cells.push(field);
	//system.stdout.writeln( "field='" + field + "'" );
	return cells;
}

/** Split multiple CSV Rows */
String.prototype.splitCSV = function splitCSV (delimiter, enclosure) {
	//system.stdout.writeln( "this='" + this + "'" );
	var rows = [];
	var rawrows = this.split("\n");
	for(var i in rawrows) if(rawrows.hasOwnProperty(i)) {
		var row = rawrows[i];
		if(row.length != 0) rows.push( row.splitCSVRow(delimiter, enclosure) );
	}
	return rows;
}

/* Replace all key-value tokens to their values */
String.prototype.replaceTokens = function(tokens) {
	var tokens = tokens || {};
	var tmp = this;
	for(i in tokens) if(tokens.hasOwnProperty(i)) {
		var key = String(i);
		//system.stderr.writeln("DEBUG: key = " + key);
		var pattern = new RegExp( RegExp.escape(":" + key) + '\\b', "g" );
		//system.stderr.writeln("DEBUG: pattern = " + pattern);
		tmp = tmp.replace(pattern, tokens[i]);
	}
	return tmp;
}

String.prototype.getRandomChar = function() {
	Extension.load("math");
	var rnum = Math.rand(this.length);
	return this.substring(rnum,rnum+1);
}

String.createRandomString = function(size, chars) {
	var size = size || 8;
	if(!chars) chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXTZabcdefghiklmnopqrstuvwxyz";
	var tmp = "";
	for(var $i=0; $i<size; $i++) { tmp += chars.getRandomChar(); }
	return tmp;
}

/* Escape shell argument */
String.escapeShellArgument = function(arg) {
	return "'" + String(arg).replace(/'/g, "\\'") + "'";
}

/* EOF */
