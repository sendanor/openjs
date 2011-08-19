#!/usr/bin/js

var constructTest = function(){
	var tmp = {
		get value(){
			system.stdout.writeln("get: this.xvalue='"+this.xvalue+"'");
			return this.xvalue+"*";
		}
		, set value(new_value){
			system.stdout.writeln("set: this.xvalue='"+this.xvalue+"', new_value='"+new_value+"'");
			return (this.xvalue=new_value);
		}
	}
	return new Object(tmp);
}

var x = new constructTest();
x.value = "test";
var y = x.value;
