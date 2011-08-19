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
			
			var headers = ccurl.__curl_slist_constructor();
			try {
				headers = ccurl.__curl_slist_append(headers, "Content-Type: application/json");
				
				var post_data = "[{\"session_id\":\"\",\"options\":{\"foo\":\"bar\"},\"free_args\":[],\"args\":[],\"command\":\"dummy\"}]";
				
				stderr.writeln("3");
				assert(ccurl.__curl_easy_setopt_CURLOPT_VERBOSE(curl, 1));
				
				stderr.writeln("3");
				assert(ccurl.__curl_easy_setopt_CURLOPT_HTTPHEADER(curl, headers));
				
				stderr.writeln("4");
				assert(ccurl.__curl_easy_setopt_CURLOPT_URL(curl, "https://secure.sendanor.fi/~jheusala/ccd-dev/ccd.fcgi"));
				
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
				
			} finally {
				stderr.writeln("finally 1");
				ccurl.__curl_slist_free_all(headers);
			}
			
		} finally {
			stderr.writeln("finally 2");
			ccurl.__curl_easy_cleanup(curl);
		}
		
	} catch(e) {
		stderr.writeln("catch 1");
		stderr.writeln("error: " + e);
		if(e.stack) stderr.writeln("stack:\n"+ e.stack);
	} finally {
		stderr.writeln("finally 3");
		ccurl.__curl_global_cleanup();
	}
/* EOF */
})(this);

