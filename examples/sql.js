#!/usr/bin/js

var config = new import(system.env.HOME + "/.config.js");
var db = new sql.connect(config.database_config);

/* Get MySQL last insert id */
db.lastInsertId = function() {
        var rows = this.query("SELECT LAST_INSERT_ID()");
        return rows[0];
}

var row = db.query("SELECT COUNT(*) AS count FROM test_phonebook")[0];
system.stdout.write("Phonebook count is " + row[0]);

var rows = db.query("SELECT * FROM test_phonebook");
if(rows.length == 0) {
	system.stdout.writeln("No rows.");
} else {
	for(var i in rows) {
		system.stdout.writeln("");
		system.stdout.writeln("row[" + i + "].id=" + rows[i].id + ";");
		system.stdout.writeln("row[" + i + "].name=" + rows[i].name + ";");
		system.stdout.writeln("row[" + i + "].number=" + rows[i].number + ";");
		system.stdout.writeln("");
	}
}

var row = {id:1, updated:new Date(), creation:new Date(), name:"Name", message:"Message"};

db.query("INSERT INTO `test_notebook` (updated,creation,name,message)"
        +" VALUES (:updated, :creation, :name, :message)", row.updated, row.creation, row.name, row.message );

var row_id = db.lastInsertId();

system.stdout.writeln("One row was added with ID " + row_id );

var dbrows = db.query("SELECT * FROM `test_notebook` WHERE id=:id", row_id);
var dbrow = dbrows[0];

//if(row.id != dbrow.id) { system.stderr.writeln("(row.id=" + row.id + ") != (dbrow.id=" + dbrow.id + ")"); }
if(row.updated != dbrow.updated) { system.stderr.writeln("(row.updated=" + row.updated + ") != (dbrow.updated=" + dbrow.updated + ")"); }
if(row.creation != dbrow.creation) { system.stderr.writeln("(row.creation=" + row.creation + ") != (dbrow.creation=" + dbrow.creation + ")"); }
if(row.name != dbrow.name) { system.stderr.writeln("(row.name=" + row.name + ") != (dbrow.name=" + dbrow.name + ")"); }
if(row.message != dbrow.message) { system.stderr.writeln("(row.message=" + row.message + ") != (dbrow.message=" + dbrow.message + ")"); }

var new_name = "Testi";
db.query("UPDATE `test_notebook` SET name=:name WHERE id=:id", new_name, row_id );

var dbrows = db.query("SELECT * FROM `test_notebook` WHERE id=:id", row_id);
var dbrow = dbrows[0];
if(dbrow.name != new_name) { system.stderr.writeln("(new_name=" + new_name + ") != (dbrow.name=" + dbrow.name + ")"); }
else { system.stderr.writeln("updated; (dbrow.name=" + dbrow.name + ")"); }

db.queryObject("UPDATE `test_notebook` SET name=:id WHERE id=:id", {id:row_id} );

var dbrows = db.query("SELECT * FROM `test_notebook` WHERE id=:id", row_id);
var dbrow = dbrows[0];
if(dbrow.name != row_id) { system.stderr.writeln("(row_id=" + row_id + ") != (dbrow.name=" + dbrow.name + ")"); }
else { system.stderr.writeln("updated; (dbrow.name=" + dbrow.name + ")"); }

