/* SSL server example */

Extension.load("asio");
Extension.load("./network.js");
Extension.load("system");

var io, endpoint, acceptor, context;
try {
	if(!system.args[1]) throw Error("Usage: simpleserver <port>");
	var pem_file = "server.pem";
	var dh_file = "dh512.pem";
	
	//system.stderr.writeln("1");
	io = new NetworkIOService();
	//system.stderr.writeln("2");
	endpoint = new NetworkTCPEndpoint(system.args[1]);
	//system.stderr.writeln("3");
	acceptor = new NetworkTCPAcceptor(io, endpoint);
	
	//system.stderr.writeln("4");
	context = new NetworkSSLContext(io);
	//system.stderr.writeln("5");
	context.setOptions( /* TODO: default_workarounds | no_sslv2 | single_dh_use */ );
	//system.stderr.writeln("6");
	context.useCertificateChainFile(pem_file);
	//system.stderr.writeln("7");
	context.usePrivateKeyFile(pem_file);
	//system.stderr.writeln("8");
	context.useTmpDhFile(dh_file);
	//system.stderr.writeln("9");
	
	for (;;) new function() {
		var s;
		try {
			//system.stderr.writeln("10");
			s = new NetworkSSLTCPStream(io, context);
			//system.stderr.writeln("11");
			acceptor.accept(s);
			//system.stderr.writeln("12");
			s.handshake();
			
			// Read
			var buffer = s.readUntil("\n");
			system.stdout.write("Line 1: '" + buffer + "'\n");
			
			// Read
			var buffer = s.read(4);
			system.stdout.write("Block of data: '" + buffer + "'\n");
			
			// Read
			var buffer = s.readUntil("\n");
			system.stdout.write("Line 2: '" + buffer + "'\n");
			
			// Write
			//system.stderr.writeln("14");
			s.write("You typed: '" + buffer + "'\n");
			
		} finally {
			//system.stderr.writeln("15");
			if(s) s.close();
		}
	}();
	
} catch (e) {
	system.stdout.writeln("Error: " + e);
} finally {
	//system.stderr.writeln("16");
	if(context) context.close();
	//system.stderr.writeln("17");
	if(acceptor) acceptor.close();
	//system.stderr.writeln("18");
	if(endpoint) endpoint.close();
	//system.stderr.writeln("19");
	if(io) io.close();
}

/* EOF */
