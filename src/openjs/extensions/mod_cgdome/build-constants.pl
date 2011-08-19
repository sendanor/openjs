#!/usr/bin/perl
# Wrapper builder
# $Id: $

# Parse arguments
my $enable_sources = 0;
my $enable_headers = 0;
my $enable_function_sets = 0;

foreach $argnum (0 .. $#ARGV) {
	if( $ARGV[$argnum] eq "--with-sources" ) { $enable_sources = 1; }
	if( $ARGV[$argnum] eq "--with-headers" ) { $enable_headers = 1; }
	if( $ARGV[$argnum] eq "--with-function-sets" ) { $enable_function_sets = 1; }
}

# Read configuration file
open(HANDLE, "auto-constants.conf"); 
my $data = join("\n", <HANDLE>);
close(HANDLE);

# Prepare data
$data =~ s/\t+/ /g;
$data =~ s/^ +//g;
$data =~ s/ +$//g;
$data =~ s/ +/ /g;
$data =~ s/\n+/\n/gm;

# Split wrappers
my @rows = split("\n", $data);

my $sources = "";
my $headers = "";
my $function_sets = "";

# Create wrappers
foreach $key (@rows) {
	# Function sets
	$function_sets .= "m_obj->Set(v8::String::New(\"$key\"), v8::Integer::New(cgate_$key()) );\n";
	
	# Headers
	$headers .= "int cgate_$key();\n";
	
	# Sources
	$sources .= "int cgate_$key() { return $key; }\n";
	
}

### Output ###

$output = 0;

if($enable_sources == 1) {
	print $sources . "\n";
	$output = 1;
}

if($enable_headers == 1) {
	print $headers . "\n";
	$output = 1;
}

if($enable_function_sets == 1) {
	print $function_sets . "\n";
	$output = 1;
}

if($output == 0) {
	print "USAGE: $0 --with-sources|--with-headers|--with-function-sets\n";
}

# EOF
