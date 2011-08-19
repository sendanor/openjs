/* curl post test 1 */
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
			"url":"https://secure.sendanor.fi/~jheusala/jsui/server.cgi",
			"useragent":"libcurl-agent/1.0",
			"input":"action=%2Fedit%2Frecord&options=%7B%22record%22%3A%7B%22username%22%3A%22String(foo)%22%2C%22realname%22%3A%22String(Foo%20Bar)%22%2C%22date%22%3A%22Date(1287197686000)%22%2C%22active%22%3Atrue%2C%22city%22%3A%22String(2)%22%2C%22id%22%3A1000%2C%22sum%22%3A1234.5678%7D%7D",
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

