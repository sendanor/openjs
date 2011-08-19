/* Javascript functions for client side */

/** Setup elements to be dragable */
function setup_calendar_events() {
	var days = 3;
	var quarters = 32;
	var cv = document.getElementById("calendarview00");
	var g = document.getElementById("dayview00");
	var calendarview_width = cv.offsetWidth;
	var calendarview_height = cv.offsetHeight;
	var dayview_width = g.offsetWidth;
	var dayview_height = g.offsetHeight;
	var grid_width = dayview_width;
	var grid_height = dayview_height/quarters;
	
	var myevents = new Array(3);
	myevents[0] = "event000";
	myevents[1] = "event001";
	myevents[2] = "event002";
	myevents[3] = "event003";
	
	for(var i=0; i<4; ++i) {
		var event_id = myevents[i];
		var event = document.getElementById(event_id);
		var start_x = 0;
		var start_y = 0;
		/*document.write(i + ": " + event_id + "<br />");*/
		new Draggable(event_id, {
			revert: false,
			snap: function(x, y) {
				var x2 = Math.round(x/grid_width)*grid_width;
				var y2 = Math.round(y/grid_height)*grid_height;
				return [x2, y2];
			}
			, onStart: function(element, mouse) {
				start_x = mouse.clientX;
				start_y = mouse.clientY;
			}
			, onEnd: function(element, mouse) {
				var x = Math.round((mouse.clientX-start_x)/grid_width)*grid_width;
				var y = Math.round((mouse.clientY-start_y)/grid_height)*grid_height;
				/*alert(x + "x" + y);*/
				var gx = Math.round(x/calendarview_width*days);
				var gy = Math.round(y/dayview_height*quarters);
				
				new Ajax.Request('calendar.xsp', {
					method:'post',
					parameters: {action: 'move_event', event_id: event_id, gx: gx, gy: gy},
					onSuccess: function(transport, json){
						/*
						var response = transport.responseXML;
						alert("Success! response='" + response + "'");
						*/
						alert(json ? Object.inspect(json) : "no JSON object");
					},
					onFailure: function(){
						alert('Something went wrong...')
					}
				});
				
			}
		});
	}
}

/* EOF */
