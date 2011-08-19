#!/usr/bin/perl
# Wrapper builder
# $Id: $

require "builder-lib.pl";

# Parse arguments
my $enable_sources = 0;
my $enable_c_sources = 0;
my $enable_headers = 0;
my $enable_c_headers = 0;
my $enable_function_sets = 0;
my $enable_function_map = 0;

foreach $argnum (0 .. $#ARGV) {
	if( $ARGV[$argnum] eq "--with-sources" ) { $enable_sources = 1; }
	if( $ARGV[$argnum] eq "--with-c-sources" ) { $enable_c_sources = 1; }
	if( $ARGV[$argnum] eq "--with-headers" ) { $enable_headers = 1; }
	if( $ARGV[$argnum] eq "--with-c-headers" ) { $enable_c_headers = 1; }
	if( $ARGV[$argnum] eq "--with-function-sets" ) { $enable_function_sets = 1; }
	if( $ARGV[$argnum] eq "--with-function-map" ) { $enable_function_map = 1; }
}

# Type classes
my %classes = get_classes();

# Type aliases
my %types = get_types();

# Read configuration file
my @wrappers = open_wrappers("wrappers.conf"); 

my $sources = "";
my $c_sources = "";
my $headers = "";
my $c_headers = "";
my $function_sets = "";
my $function_map = "";

# Create wrappers
foreach $wrapper (@wrappers) {
	my %f = parse_wrapper_row($wrapper);
	my $ret = $f{'type'};
	my $func = $f{'name'};
	my $args_ref = $f{'args'};
	my @args = @$args_ref;
	#my @args = @$f{'args'};
	
	#print STDERR "DEBUG: ret = '$ret'\n";
	#print STDERR "DEBUG: func = '$func'\n";
	#print STDERR "DEBUG: args = ('" . join("', '", @args) . "') has " . scalar @args . " items\n";
	
	# Function sets
	$function_sets .= "m_template->Set(v8::String::New(\"$func\"), v8::FunctionTemplate::New(do_$func) );\n";
	
	# Function map
	$function_map .= "\tif(key.compare(\"$func\") == 0) return v8::FunctionTemplate::New(openjs::extensions::do_$func);\n";
	
	# C++ Headers
	$headers .= "/* Wrapper for '$ret' '$func' (@args) */\n";
	$headers .= "v8::Handle<v8::Value> do_$func(const v8::Arguments&);\n\n";
	
	# C headers
	$c_headers .= "/* C-Wrapper for '$ret' '$func' (@args) */\n";
	$c_headers .= "extern inline ";
	$c_headers .= get_c_type(\%types, $ret);
	my @c_args = ();
	my $n = 0;
	my @c_source_args = ();
	my @c_wrapper_args = ();
	foreach $arg (@args) {
		my $type = get_c_type(\%types, $arg);
		push(@c_args, $type);
		push(@c_source_args, "$type arg$n");
		push(@c_wrapper_args, "($arg)arg$n");
		$n++;
	}
	$c_headers .= " cgate_$func(" . join(", ", @c_args) . ");\n\n";
	
	# C sources
	my $type = get_c_type(\%types, $ret);
	$c_sources .= "/** Wrapper for '$ret' '$func' (@args).\n * Configuration line: '$wrapper'\n */\n";
	$c_sources .= "inline $type cgate_$func(" . join(", ", @c_source_args) . ") {\n";
	$c_sources .= "\t";
	if($type ne "void") { $c_sources .= "return ($type) "; }
	$c_sources .= "$func(" . join(", ", @c_wrapper_args) . ");\n";
	$c_sources .= "}\n\n";
	
	# C++ sources
	
	$sources .= "/** Wrapper for '$ret' '$func' (@args).\n * Configuration line: '$wrapper'\n */\n";
	$sources .= "v8::Handle<v8::Value> openjs::extensions::do_$func(const v8::Arguments&";
	if(scalar @args != 0) {
		$sources .= " args";
	} else {
		$sources .= "\n#ifndef DEBUG\n/* args*/\n#else\n args\n#endif\n";
	}
	$sources .= ") {\n";
	$sources .= "  SENDANOR_LOGGER_FUNCTION(\"do_$func\", \"args[\" << args.Length() << \"]\" );\n";
	$sources .= "  v8::HandleScope handle_scope;\n";
	$sources .= "  try {\n";
	
	# Build cargs
	my $n = 0;
	my @cargs = ();
	my @extra = ();
	foreach $arg (@args) {
		my $type = $arg;
		if(exists $types{$arg}) {
			$type = $types{$arg};
		}
		
		my $c_type = get_c_type(\%types, $arg);
		
		# char**
		if($type =~ /^ *char *\*\*$/) {
			$sources .= "\tv8::Handle<v8::Object> myobj$n = args[$n]->ToObject();\n";
			$sources .= "\tchar* mybuf$n = 0;\n";
			push(@cargs, "&mybuf$n");
			push(@extra, "\tstd::string mystr$n(mybuf$n, std::strlen(mybuf$n));");
			push(@extra, "\tmyobj$n->Set(v8::String::New(\"value\"), openjs::convert<v8::Handle<v8::Value> >(mystr$n)->ToString());");
			push(@extra, "\tfree(mybuf$n);");
			$n++;
			next;
		# const char*
		} elsif($type =~ /^ *const *char *\*$/) {
			$sources .= "\tconst std::string mytmp$n = openjs::convert<std::string>(args[$n]);\n";
			$sources .= "\t$type myarg$n = mytmp$n.c_str();\n";
		# char*
		} elsif($type =~ /^ *char *\*$/) {
			$sources .= "\tconst std::string mytmp$n = openjs::convert<std::string>(args[$n]);\n";
			$sources .= "\tstd::vector<char> myvec$n(mytmp$n.begin(), mytmp$n.end());\n";
			$sources .= "\tmyvec$n.push_back(0);\n";
			$sources .= "\t$type myarg$n = &myvec$n\[0\];\n";
		# const gchar*
		} elsif($type =~ /^ *const *gchar *\*$/) {
			$sources .= "\tstd::string mytmp$n = openjs::convert<std::string>(args[$n]);\n";
			$sources .= "\tconst char* myarg$n = mytmp$n.c_str();\n";
		# gchar*
		} elsif($type =~ /^ *?gchar *\*$/) {
			$sources .= "\tstd::string mytmp$n = openjs::convert<std::string>(args[$n]);\n";
			$sources .= "\tchar* myarg$n = mytmp$n.c_str();\n";
		# gpointer
		} elsif($type eq "gpointer") {
			$sources .= "\tint_pointer_type myarg$n = ptr_from_v8(args[$n], \"$type\");\n";
		# Pointer
		} elsif($type =~ /\*$/) {
			$sources .= "\tint_pointer_type myarg$n = ptr_from_v8(args[$n], \"$type\");\n";
		# int
		} elsif($type eq 'int') {
			$sources .= "\t$type myarg$n = args[$n]->Int32Value();\n";
		# short int
		} elsif($type =~ /^short( int)?$/) {
			$sources .= "\t$type myarg$n = args[$n]->Int32Value();\n";
		# long int
		} elsif($type =~ /^long( int)?$/) {
			$sources .= "\t$type myarg$n = args[$n]->Int32Value();\n";
		# unsigned int
		} elsif($type =~ /^unsigned( int)?$/) {
			$sources .= "\t$type myarg$n = (unsigned int)args[$n]->Uint32Value();\n";
		# guint32
		} elsif($type =~ /^guint32$/) {
			$sources .= "\t$type myarg$n = (guint32)args[$n]->Uint32Value();\n";
		# unsigned short int
		} elsif($type =~ /^unsigned short( int)?$/) {
			$sources .= "\t$type myarg$n = (unsigned short int)args[$n]->Uint32Value();\n";
		# long long
		} elsif($type =~ /^long long( int)?$/) {
			$sources .= "\t$type myarg$n = args[$n]->IntegerValue();\n";
		# Unknown
		} else {
			push(@cargs, "/* unknown '$arg' as '$type' */");
			$n++;
			next;
		}
		
		# Temp conversion
		#if($type eq $arg) {
			push(@cargs, "myarg$n");
		#} else {
			#if(exists $classes{$arg} && $classes{$arg} eq 'enum') {
			#	$sources .= "\t$arg mytmp$n = static_cast<$arg>(myarg$n);\n";
			#	push(@cargs, "mytmp$n");
			#} else {
		#		$sources .= "\t$c_type mytmp$n = myarg$n;\n";
		#		push(@cargs, "mytmp$n");
			#} else {
			#	push(@cargs, "/* unknown tmp '$arg' as '$type' */");
			#	$n++;
			#	next;
		#	}
		#}
		
		$n++;
	}
	
	# DEBUG for call
	$sources .= "\tSENDANOR_LOGGER_DEBUG(\"Calling cgate_$func(";
	if(scalar @cargs != 0) {
		$sources .= "\" << " . join(" << \", \" << ", @cargs) . " << \"";
	}
	$sources .= ")\");\n";
	
	# Call
	$sources .= "\t";
	$ret_c_type = get_c_type(\%types, $ret);
	if($ret_c_type eq "void") {
	} elsif($ret_c_type eq "gpointer") {
		$sources .= "int_pointer_type ret = ";
	} elsif($ret_c_type =~ /char *\*\*$/) {
		$sources .= "$ret_c_type ret = ";
	} elsif($ret_c_type =~ /char *\*$/) {
		$sources .= "$ret_c_type ret = ";
	} elsif($ret_c_type =~ /\*$/) {
		$sources .= "int_pointer_type ret = ";
	} else {
		$sources .= "$ret_c_type ret = ";
	}
	$sources .= "cgate_$func(" . join(", ", @cargs) . ");\n";
	
	if($ret_c_type eq "void") {
	} elsif($ret_c_type eq "gpointer") {
		$sources .= "\tSENDANOR_LOGGER_DEBUG(\"ret = \" << ret);\n";
	} elsif($ret_c_type =~ /char *\*\*$/) {
		$sources .= "\tSENDANOR_LOGGER_DEBUG(\"ret = \" << (int)ret);\n";
	} elsif($ret_c_type =~ /char *\*$/) {
		$sources .= "\tSENDANOR_LOGGER_DEBUG(\"ret = \" << ret);\n";
	} elsif($ret_c_type =~ /\*$/) {
		$sources .= "\tSENDANOR_LOGGER_DEBUG(\"ret = \" << ret);\n";
	} else {
		$sources .= "\tSENDANOR_LOGGER_DEBUG(\"ret = \" << ret);\n";
	}
	
	# Extra
	if(scalar @extra != 0) {
		$sources .= join("\n", @extra) . "\n";
	}
	
	# Convert to v_ret
	
	my $type = $ret;
	if(exists $types{$ret}) {
		$type = $types{$ret};
	}
	
	# char**
	if($type =~ /char *\*\*$/) {
		$sources .= "\tv8::Handle<v8::Value> v_ret = /* Unknown '$type' */;\n";
	# char*
	} elsif($type =~ /char *\*$/) {
		$sources .= "\tstd::string retstr(ret, std::strlen(ret));\n";
		$sources .= "\tv8::Handle<v8::Value> v_ret = openjs::convert<v8::Handle<v8::Value> >(retstr);\n";
	# char
	} elsif($type eq "char") {
		$sources .= "\tstd::string retstr(1, ret);\n";
		$sources .= "\tv8::Handle<v8::Value> v_ret = openjs::convert<v8::Handle<v8::Value> >(retstr);\n";
	# Pointer
	} elsif($type =~ /\*$/) {
		$sources .= "\tv8::Handle<v8::Value> v_ret = ptr_to_v8(ret, \"$type\");\n";
	# gpointer
	} elsif($type eq "gpointer") {
		$sources .= "\tv8::Handle<v8::Value> v_ret = ptr_to_v8(ret, \"$type\");\n";
	# short int
	} elsif($type =~ /^short( int)?$/) {
		$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Integer::New(ret);\n";
	# unsigned short int
	} elsif($type =~ /^unsigned short( int)?$/) {
		#$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Uint32::New(ret);\n";
		$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);\n";
	# guint32
	} elsif($type =~ /^guint32$/) {
		$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);\n";
	# int
	} elsif($type eq "int") {
		$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Integer::New(ret);\n";
	# long int
	} elsif($type =~ /^long( int)?$/) {
		$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Integer::New(ret);\n";
	# unsigned int
	} elsif($type =~ /^unsigned( int)?$/) {
		$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);\n";
	# long long
	} elsif($type =~ /^long long( int)?$/) {
		$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Integer::New(ret);\n";
	# Void
	} elsif($type eq "void") {
		$sources .= "\tv8::Handle<v8::Value> v_ret = v8::Undefined();\n";
	# Unknown
	} else {
		$sources .= "\t// Unknown conversion: '$ret' as '$type'\n";
	}
	
	$sources .= "\treturn handle_scope.Close(v_ret);\n";
	$sources .= "  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }\n";
	$sources .= "}\n\n";
	
}


### Output ###

$output = 0;

if($enable_sources == 1) {
	print $sources . "\n";
	$output = 1;
}

if($enable_c_sources == 1) {
	print $c_sources . "\n";
	$output = 1;
}

if($enable_headers == 1) {
	print $headers . "\n";
	$output = 1;
}

if($enable_c_headers == 1) {
	print $c_headers . "\n";
	$output = 1;
}

if($enable_function_sets == 1) {
	print $function_sets . "\n";
	$output = 1;
}

if($enable_function_map == 1) {
	print $function_map . "\n";
	$output = 1;
}

if($output == 0) {
	print STDERR "USAGE: $0 --with-sources|--with-headers|--with-function-sets\n";
}

# EOF
