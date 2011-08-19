/* curl post test 2 */
Extension.load("system");
Extension.load("curl");
(function(global) {
	
	var curlEasy = global.curlEasy;
	var stdout = global.system.stdout;
	var stderr = global.system.stderr;
	
	stderr.writeln("--start--");
	var curl = new curlEasy();
	try {
		
		stderr.writeln("--post--");
		var data = curl.post({
			"verbose":1,
			"url":"https://secure.sendanor.fi/~jheusala/ccd-dev/ccd.fcgi",
			"useragent":"libcurl-agent/1.0",
			"input":"[{\"session_id\":\"\",\"options\":{\"foo\":\"bar\"},\"free_args\":[],\"args\":[],\"command\":\"dummy\"}]",
			"headers":["Content-Type: application/json"],
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
