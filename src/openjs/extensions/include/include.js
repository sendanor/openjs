/* include for JavaScript
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Global include function */
function include (filename) {
/*
	var file = Filesystem.open(filename);
	var data = "";
	var buf = "";
	do {
		buf = file.read(64);
		data += buf;
	} while(buf.length != 0);
	file.close();
	eval(data);
*/
	Filesystem.loadJS(filename);
}

/* EOF */
