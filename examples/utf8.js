#!/usr/bin/js

function encode_utf8(s) {
	return unescape( encodeURIComponent( s ) );
}

function decode_utf8(s) {
	return decodeURIComponent( escape( s ) );
}


var tmp = system.args[1];
system.stdout.writeln("tmp='" + tmp + "'");

var tmp_unescaped = unescape(tmp);
system.stdout.writeln("unescape(tmp) = '" + tmp_unescaped + "'");

tmp_unescaped = decodeURIComponent(tmp);
system.stdout.writeln("decodeURIComponent(tmp) = '" + tmp_unescaped + "')");
