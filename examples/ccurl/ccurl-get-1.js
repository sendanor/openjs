/* ccurl get test 1 */
Extension.load("system");
Extension.load("ccurl");
(function(global) {
	var ccurl = global.ccurl;
	var stdout = global.system.stdout;
	var stderr = global.system.stderr;
	stderr.writeln("1");
	ccurl.__curl_global_init(ccurl.CURL_GLOBAL_ALL);
	try {
		stderr.writeln("2");
		var curl = ccurl.__curl_easy_init();
		try {
			stderr.writeln("3");
			ccurl.__curl_easy_setopt_CURLOPT_URL(curl, "https://secure.sendanor.fi/~jheusala/jsui/server.cgi?action=/edit/record");
			stderr.writeln("4");
			ccurl.__curl_easy_setopt_CURLOPT_USERAGENT(curl, "libcurl-agent/1.0");
			
			var data = [];
			stderr.writeln("5");
			res = ccurl.__curl_easy_perform_write(curl, data);
			
			stdout.write(
				"We received:\n"+
				"--start--\n"+
				data + "\n"+
			    "---end---\n");
			
		} finally {
			stderr.writeln("finally 6");
			ccurl.__curl_easy_cleanup(curl);
		}
		
	} catch(e) {
		stderr.writeln("error: " + e);
		if(e.stack) stderr.writeln("stack:\n"+ e.stack);
	} finally {
		stderr.writeln("finally 7");
		ccurl.__curl_global_cleanup();
	}
/* EOF */
})(this);

