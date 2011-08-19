#!/usr/bin/js

/* Event-driven UI prototype using callback functions with closures */

/* UI functions */

function makeTextInput() {
}

function makePasswordInput() {
	makeTextInput();
}

function makeSubmitInput(arg) {
}

function makeTextBox(arg) {
}

function openDialog(elements) {
}

/* Application functions */

function openLoginDialog(arg) {
	var info = makeTextBox({value:'You must log in to view the application.'});
	var username = makeTextInput();
	var password = makePasswordInput();
	var button = makeSubmitButton({value:'submit', onSubmit:submit});
	
	if(arg.onFailedLogin === undefined) {
		arg.onFailedLogin = function() {
			info.value = 'Error: Authentication failed';
		}
	}
	
	function submit() {
		if(!arg.onAuth()) {
			arg.onFailedLogin();
		} else {
			arg.onLogin();
		}
	}
	
	openDialog([info, username, password, button]);
}

function openIndex() {
	var info = makeTextBox({value:'You are logged in.'});
	openDialog(info);
}

/* Main application */

function do_auth(username, password) {
	return (username.value === 'foo') && (password.value === 'bar');
}

openLoginDialog({onLogin:openIndex,onAuth:do_auth});

/* EOF */
