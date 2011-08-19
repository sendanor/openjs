#!/usr/bin/perl
# Wrapper builder
# $Id: $

require "../mod_cgdome/builder-lib.pl";
require "objects-lib.pl";

# Parse arguments
my $enable_sources = 0;

foreach $argnum (0 .. $#ARGV) {
	if( $ARGV[$argnum] eq "--with-sources" ) { $enable_sources = 1; }
}

if($enable_sources == 0) {
	print "USAGE: $0 --with-sources\n";
	exit(1);
}

my $sources = "";

my %classes  = get_classes();   # Type classes
my %types    = get_types();     # Type aliases
my @wrappers = open_wrappers("../mod_cgdome/wrappers.conf");  # Read wrapper configuration file
my @objects  = get_objects("objects.conf");                   # Read objects configuration file

# Create wrappers
foreach $object_row (@objects) {
	my %object = parse_object_row($object_row);
	my $object_type = $object{'type'};
	my $c_prefix = $object{'c_prefix'};
	
	print STDERR "DEBUG: object_row = '$object_row'\n";
	print STDERR "DEBUG: object_type  = '$object_type'\n";
	print STDERR "DEBUG: c_prefix     = '$c_prefix'\n\n";
	
	# Constructor
	open FILE, ">", "bits/$object_type.js" or die $!;
	print FILE "/* This file has been build automatically using build-objects.pl. */\n";
	print FILE "/* DO NOT EDIT IT DIRECTLY */\n\n";
	
	print FILE "/** Constructor (when called with new) or object builder otherwise */\n";
	print FILE "function $object_type(arg1, arg2) {\n";
	#print FILE "\tExtension.load(\"gdome/GdomeDOMImplementation.js\");";
	print FILE "\tif(this instanceof arguments.callee) {\n";
	#print FILE "\t\tsystem.stderr.writeln(\"DEBUG: $object_type (new)\");\n";
	print FILE "\t\tthis.pointer = arg1;\n";
	if($object_type ne "GdomeDOMImplementation") { print FILE "\t\tthis.di = arg2;\n"; }
	print FILE "\t} else {\n";
	#print FILE "\t\tsystem.stderr.writeln(\"DEBUG: $object_type (build)\");\n";
	#if(-e "bits/$object_type.js") {
	#	print FILE "\t\tExtension.load(\"gdome/$object_type.js\");";
	#}
	print FILE "\t\tif(arg1 instanceof $object_type) {\n";
	print FILE "\t\t\treturn arg1;\n";
	print FILE "\t\t} else if(arg1.to$object_type !== undefined) {\n";
	print FILE "\t\t\treturn arg1.to$object_type();\n";
	print FILE "\t\t} else {\n";
	print FILE "\t\t\tthrow Error(\"Could not convert object to $object_type!\");\n";
	print FILE "\t\t}\n";
	print FILE "\t}\n";
	print FILE "}\n\n";
	
	if(-e "static/$object_type.js") {
		open(STATICFILE, "static/$object_type.js") or die $!;
		print FILE <STATICFILE>;
		close(STATICFILE);
	}
	
	close(FILE) or die $!;
	
	# Create wrappers
	foreach $wrapper_row (@wrappers) {
		my %f = parse_wrapper_row($wrapper_row);
		my $ret = $f{'type'};
		my $ret_c_type = get_c_type(\%types, $ret);
		my $c_function = $f{'name'};
		my @args = @{$f{'args'}};
		
		print STDERR "DEBUG: WRAPPER: wrapper_row = '$wrapper_row'\n";
		print STDERR "DEBUG: WRAPPER: ret  = '$ret'\n";
		print STDERR "DEBUG: WRAPPER: func = '$c_function'\n";
		print STDERR "DEBUG: WRAPPER: args = ('" . join("', '", @args) . "') has " . scalar @args . " items\n\n";
		
		if($c_function =~ /$c_prefix/) {
			
			print STDERR "DEBUG: code generation: MATCH\n";
			
			my $method = $c_function;
			$method =~ s/$c_prefix//;
			print STDERR "DEBUG: method = '$method'\n\n";
			
			# Check if this is a method call
			my $this_arg = shift(@args);
			if(!($this_arg =~ /^$object_type *\*$/)) {
				print STDERR "WARNING: $c_function: First argument is not pointer to the object of $object_type: '$this_arg'\n\n";
				next; // foreach $wrapper_row
			}
			
			# Go through arguments
			my $enable_exception = 0;
			my $n = 0;
			my @js_func_args = ();
			my @js_call_args = ("this.pointer");
			my @js_validations = ();
			my @js_post_lines = ();
			my @js_depends = ();
			foreach $arg (@args) {
				my $type = (exists $types{$arg}) ? $types{$arg} : $arg;
				my $c_type = get_c_type(\%types, $arg);
				
				if($arg =~ /^GdomeException\*$/) {
					$enable_exception = 1;
					push(@js_call_args, "GDOME.exception.pointer");
				} elsif($arg =~ /^(const +)?char *\*$/) {
					push(@js_func_args, "arg$n");
					push(@js_call_args, "arg$n");
				} elsif($arg =~ /^const char *\*$/) {
					push(@js_func_args, "arg$n");
					push(@js_call_args, "arg$n");
				} elsif($arg =~ /^char *\*\*$/) {
					push(@js_func_args, "arg$n");
					push(@js_call_args, "arg$n");
				} elsif($arg eq "GdomeBoolean") {
					push(@js_func_args, "arg$n");
					push(@js_call_args, "(arg$n?1:0)");
				} elsif($arg =~ /^GdomeDOMString *\*$/) {
					my $arg_type = $arg;
					$arg_type =~ s/ *\*$//;
					
					push(@js_validations, "\tvar gstr$n;");
					if(-e "bits/$arg_type.js") {
						push(@js_validations, "\tExtension.load(\"gdome/$arg_type.js\");");
					}
					push(@js_validations, "\tif(arg$n instanceof $arg_type) {");
					push(@js_validations, "\t\tgstr$n = arg$n;");
					push(@js_validations, "\t\tif(gstr$n.pointer.address !== 0) { gstr$n.ref(); }");
					push(@js_validations, "\t} else {");
					push(@js_validations, "\t\tExtension.load(\"gdome/GdomeDOMString.js\");");
					push(@js_validations, "\t\tGDOME.exception.msg = \"$object_type.prototype.$method: GdomeDOMString.mkref\";");
					push(@js_validations, "\t\tgstr$n = GdomeDOMString.mkref(String(arg$n));");
					push(@js_validations, "\t\tif(gstr$n.pointer.address == 0) { throw GDOME.exception; }");
					push(@js_validations, "\t}");
					
					push(@js_post_lines, "\tif(gstr$n.pointer.address !== 0) gstr$n.unref();");
					push(@js_func_args, "arg$n");
					push(@js_call_args, "gstr$n.pointer");
					
				} elsif($arg =~ /^[A-Za-z]+ *\*$/) {
					my $arg_type = $arg;
					$arg_type =~ s/ *\*$//;
					
					if(-e "bits/$arg_type.js") {
						push(@js_validations, "\tExtension.load(\"gdome/$arg_type.js\");");
					}
					push(@js_validations, "\tif(!(arg$n instanceof $arg_type)) {");
					push(@js_validations, "\t\tGDOME.exception.msg = \"$object_type.prototype.$method: argument not instance of $arg_type\";");
					push(@js_validations, "\t\tthrow GDOME.exception;");
					push(@js_validations, "\t}");
					
					push(@js_validations, "\tGDOME.exception.msg = \"$object_type.prototype.$method: !arg$n.pointer\";");
					push(@js_validations, "\tif(arg$n.pointer.address == 0) { throw GDOME.exception; }");
					
					push(@js_func_args, "arg$n");
					push(@js_call_args, "arg$n.pointer");
				} elsif($type =~ /^(unsigned *)?int$/) {
					push(@js_func_args, "arg$n");
					push(@js_call_args, "arg$n");
				} else {
					push(@js_func_args, "arg$n");
					push(@js_call_args, "/* UNKNOWN arg$n: arg='$arg', type='$type', c_type='$ctype' */");
				}
				$n++;
			}
			
			# JS functions
			open FILE, ">>", "bits/$object_type.js" or die $!;
			print FILE "/** $object_type $method method\n * C header: $ret $c_function(".join(", ", ($this_arg, @args)).")\n */\n";
			print FILE "$object_type.prototype.$method = function(".join(", ", @js_func_args).") {\n";
			#print FILE "\tsystem.stderr.writeln(\"DEBUG: $object_type.prototype.$method\");\n";
			
			print FILE "\tGDOME.exception.msg = \"!this.pointer\";\n";
			print FILE "\tif(this.pointer == 0) { throw GDOME.exception; }\n";
			
			if(scalar @js_validations != 0) {
				print FILE join("\n", @js_validations) . "\n";
			}
			
			if($enable_exception == 1) {
				print FILE "\tGDOME.exception.msg = \"$object_type.prototype.$method\";\n";
			}
			
			#print FILE "\tCGDOME.call.$c_function(this.pointer, GDOME.exception.pointer);\n";
			if($ret ne "void") { print FILE "\tvar ret = ";
			} else { print FILE "\t"; }
			print FILE "CGDOME.call.$c_function(". join(", ", @js_call_args) .");\n";
			
			if(scalar @js_post_lines != 0) {
				print FILE join("\n", @js_post_lines) . "\n";
			}
			
			if($enable_exception == 1) {
				print FILE "\tif(GDOME.exception.value() !== 0) { throw GDOME.exception; }\n";
			}
			
			if($ret eq "void") {
			} elsif( $ret_c_type =~ /^char *\*$/ ) {
				print FILE "\treturn ret;\n";
			} elsif( $ret_c_type =~ /^char$/ ) {
				print FILE "\treturn ret;\n";
			} elsif($ret =~ /^[A-Za-z]+ *\*$/) {
				my $ret_type = $ret;
				$ret_type =~ s/ *\*$//;
				print FILE "\tif(ret.address !== 0) {\n";
				if(($object_type ne $ret_type) && -e "bits/$ret_type.js") {
					print FILE "\t\tExtension.load(\"gdome/$ret_type.js\");\n";
				}
				print FILE "\t\treturn new $ret_type(ret, this.di);\n";
				print FILE "\t}\n";
			} elsif( $ret eq "GdomeBoolean" ) {
				print FILE "\treturn (ret === 1) ? true : false;\n";
			} elsif( $ret_c_type =~ /^(unsigned +)?(short +)?int$/ ) {
				print FILE "\treturn ret;\n";
			} else {
				print FILE "\treturn /* UNKNOWN: ret='$ret', ret_c_type='$ret_c_type' */;\n";
			}
			
			print FILE "}\n\n";
			close(FILE) or die $!;
		} else {
			print STDERR "DEBUG: code generation: SKIPPED\n\n";
		}
	}
	
}

### Output ###

#$output = 0;

#if($enable_sources == 1) {
#	print $sources . "\n";
#	$output = 1;
#}

#if($output == 0) {
#	print "USAGE: $0 --with-sources\n";
#}

# EOF
