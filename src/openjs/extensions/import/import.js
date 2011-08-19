/* import for JavaScript
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Global import function */
function import (filename) {
	var file = Filesystem.open(filename);
	var data = "";
	var buf = "";
	do {
		buf = file.read(64);
		data += buf;
	} while(buf.length != 0);
	file.close();
	var fun = new Function(data);
	return new fun();
}

/* EOF */
