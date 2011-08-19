#!/usr/bin/js
Extension.load("system");
Extension.load("array");

function main(args) {
	function ExitFromLoop() { }
	try {
		function exit() { throw new ExitFromLoop(); }
		
		args.foreach(function(item) {
			system.stdout.writeln("item: " + item);
			if(item === 'exit') exit();
		});
		
	} catch(e) {
		if(!(e instanceof ExitFromLoop)) throw e;
	}
}

main(system.args);

/* EOF */
