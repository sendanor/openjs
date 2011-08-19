/* trim -- Server side AJAX backend functions
 * $Id: calendar_ajax.js 7158 2009-03-23 16:54:37Z jheusala $
 */

var db = new Object;
db.sql = new system.sql(database_config);
db.sql.table_prefix = "test_";

/** Get list of calendar events for next days */
db.get_next_calendar_events_daily = function(days) {
	var list = new Array();
	for(var d=0; d<days; ++d) {
		list[d] = this.sql.query("SELECT * FROM `" + this.sql.table_prefix + "calendar_event` WHERE DATE(start_time) = DATE(NOW())+INTERVAL :day DAY;", d);
	}
	return list;
}

/** Add calendar item */
db.add_calendar_event = function(start_time, end_time, subject, description) {
	var parsed_start_time = new Date.parse(start_time);
	var parsed_end_time = new Date.parse(end_time);
	this.sql.query("INSERT INTO `" + this.sql.table_prefix +"calendar_event` (creation,updated,start_time,end_time,subject,description) VALUES (NOW(), NOW(), :start, :end, :subject, :description)"
	         , parsed_start_time, parsed_end_time, subject, description);
}

/* EOF */
