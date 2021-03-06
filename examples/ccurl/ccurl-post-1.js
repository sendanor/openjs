0/* ccurl get test 1 */
Extension.load("system");
Extension.load("ccurl");
(function(global) {
	
	var ccurl = global.ccurl;
	var stdout = global.system.stdout;
	var stderr = global.system.stderr;
	
	function assert(i) {
		if(i !== ccurl.CURLE_OK) throw Error("curl error: " + ccurl.__curl_easy_strerror(i) + " (#" + i + ")");
	}
	
	stderr.writeln("1");
	assert(ccurl.__curl_global_init(ccurl.CURL_GLOBAL_ALL));
	
	try {
		
		stderr.writeln("2");
		var curl = ccurl.__curl_easy_init();
		
		try {
			
			var post_data = "action=%2Fedit%2Frecord&options=%7B%22record%22%3A%7B%22username%22%3A%22String(foo)%22%2C%22realname%22%3A%22String(Foo%20Bar)%22%2C%22date%22%3A%22Date(1287197686000)%22%2C%22active%22%3Atrue%2C%22city%22%3A%22String(2)%22%2C%22id%22%3A1000%2C%22sum%22%3A1234.5678%7D%7D";
			
			stderr.writeln("3");
			assert(ccurl.__curl_easy_setopt_CURLOPT_VERBOSE(curl, 1));
			
			stderr.writeln("4");
			assert(ccurl.__curl_easy_setopt_CURLOPT_URL(curl, "https://secure.sendanor.fi/~jheusala/jsui/server.cgi"));
			
			stderr.writeln("5");
			assert(ccurl.__curl_easy_setopt_CURLOPT_USERAGENT(curl, "libcurl-agent/1.0"));
			
			var data = [];
			
			stderr.writeln("6");
			res = ccurl.__curl_easy_perform_post_write(curl, data, post_data);
			assert(res);
			stdout.write(
				"We received:\n"+
				"--start--\n"+
				data + "\n"+
			    "---end---\n");
			
		} catch(e) {
			stderr.writeln("catch 1");
			throw e;
		} finally {
			stderr.writeln("finally 1");
			ccurl.__curl_easy_cleanup(curl);
		}
		
	} catch(e) {
		stderr.writeln("catch 2");
		stderr.writeln("error: " + e);
		if(e.stack) stderr.writeln("stack:\n"+ e.stack);
	} finally {
		stderr.writeln("finally 2");
		ccurl.__curl_global_cleanup();
	}
/* EOF */
})(this);

