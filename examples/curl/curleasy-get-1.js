/* ccurl get test 1 */
Extension.load("system");
Extension.load("curl");
(function(global) {
	
	var curlEasy = global.curlEasy;
	var stdout = global.system.stdout;
	var stderr = global.system.stderr;
	
	stderr.writeln("--start--");
	var curl = new curlEasy();
	try {
		
		stderr.writeln("--get--");
		var data = curl.get({
			"verbose":1,
			"url":"https://secure.sendanor.fi/~jheusala/jsui/server.cgi?action=/edit/record",
			"useragent":"libcurl-agent/1.0",
		});
		
		stderr.writeln("--output--");
		
		stderr.write(
			"We received:\n"+
			"--start--\n"+
			data + "\n"+
		    "---end---\n");
			
	} catch(e) {
		stderr.writeln("error: " + e);
		if(e.stack) stderr.writeln("stack:\n"+ e.stack);
	} finally {
		stderr.writeln("--finally--");
		curl.cleanup();
	}
	
/* EOF */
})(this);

