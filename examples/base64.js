#!/usr/bin/js

/** Helper function for iterating 8-bit data in arbitrary binary chunks */
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
	
	/** set current value from data */
	/*
	this.setValue = function setValue (data, value) {
		system.stderr.write("this.major = '" + this.major + "'\n");
		system.stderr.write("this.minor = '" + this.minor + "'\n");
		if( this.minor < this.major_bits-this.bits+1 ) {
			var a = data.charCodeAt(this.major);
			system.stderr.write("a = '" + a + "'\n");
			
			var x = a XOR (a & ( (Math.pow(2, this.bits)-1) << ((this.major_bits-this.bits)-this.minor) ) );
			system.stderr.write("x = '" + x + "'\n");
			var v = value << ((this.major_bits-this.bits)-this.minor);
			system.stderr.write("v = '" + v + "'\n");
			var c = x & v;
			system.stderr.write("c = '" + c + "'\n");
			
			data[this.major] = c;
			
		} else {
			var a = data.charCodeAt(this.major);
			system.stderr.write("a = '" + a + "'\n");
			var b = ( this.major+1 < data.length ) ? data.charCodeAt(this.major+1) : 0;
			system.stderr.write("b = '" + b + "'\n");
			var b_bits = this.minor+this.bits-this.major_bits;
			system.stderr.write("b_bits = '" + b_bits + "'\n");
			var a_bits = this.bits-b_bits;
			system.stderr.write("a_bits = '" + a_bits + "'\n");

		}
	}
	*/
	
}

/** Split a string into smaller chunks */
String.prototype.chunkSplit = function(len) {
	var buf = new Array();
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
	charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	if(this.length == 0) { return ""; }
	var index = new BinaryIterator(6);
	var buf = "";
	
}
*/

/** Test */
system.stdout.writeln( system.args[1].encodeBase64() );
