#!/usr/bin/perl
# Wrapper builder
# $Id: $

# Type classes
sub get_classes() {
	my %classes = ();
	
	# Enums
	$classes{'GdomeNodeType'} = 'enum';
	$classes{'GdomeExceptionCode'} = 'enum';
	$classes{'GdomeAccessType'} = 'enum';
	$classes{'GdomeLoadingCode'} = 'enum';
	$classes{'GdomeSavingCode'} = 'enum';
	$classes{'GdomeExceptionMasks'} = 'enum';
	$classes{'GdomeExceptionType'} = 'enum';
	
	return %classes;
}

# Type classes
sub get_types() {
	# Type aliases
	my %types = ();
	
	# Enums
	$types{'GdomeNodeType'} = 'int';
	$types{'GdomeExceptionCode'} = 'int';
	$types{'GdomeAccessType'} = 'int';
	$types{'GdomeLoadingCode'} = 'int';
	$types{'GdomeSavingCode'} = 'int';
	$types{'GdomeExceptionMasks'} = 'int';
	$types{'GdomeExceptionType'} = 'int';
	
	# 
	$types{'GdomeBoolean'} = 'int';
	$types{'GdomeDOMTimeStamp'} = 'long long';
	$types{'GdomeException'} = 'int'; # guint32
	
	$types{'int_pointer_type'} = 'unsigned int'; # intptr_t
	$types{'gpointer'} = 'unsigned int'; # gpointer
	$types{'gulong'} = 'unsigned int'; # gulong
	$types{'gchar'} = 'char';
	
	return %types;
}

# Read configuration file
sub open_wrappers() {
	my $file = shift;
	
	open(HANDLE, $file); 
	my $data = join("\n", <HANDLE>);
	close(HANDLE);
	
	# Prepare data
	$data =~ s@//.*$@@gm;
	$data =~ s@/\*.*\*/@@gm;
	$data =~ s@[\t\r\n]@ @gm;
	
	$data =~ s/ ([^ \(]+) *\(/,\1(/g;
	
	$data =~ s@\( *void *\)@()@g;
	$data =~ s@ *, *@,@g;
	$data =~ s@\(@,@g;
	$data =~ s@\)@,@g;
	$data =~ s@ +\*@\*@g;
	
	$data =~ s@ *; *@;@gm;
	$data =~ s@ +@ @gm;
	$data =~ s@^ +@@g;
	$data =~ s@ +$@@g;
	
	# Split wrappers
	return split(";", $data);
}

# Parse wrapper row
sub parse_wrapper_row {
	my $wrapper = shift;
	my @args = split(",", $wrapper);
	my $ret = shift(@args);
	my $func = shift(@args);
	my %result = ();
	$result{'type'} = $ret;
	$result{'name'} = $func;
	$result{'args'} = \@args;
	return %result;
}

# Get standard C type for C-C++-gateway
sub get_c_type {
	my $types_ref = shift;
	my %types = %$types_ref;
	my $arg = shift;
	my $type = $arg;
	if(exists $types{$arg}) {
		$type = $types{$arg};
	}
	
	if($type eq "void") {
		return "void";
	} elsif($type =~ /^const g?char ?\*\*$/) {
		return "const char **";
	} elsif($type =~ /^g?char ?\*\*$/) {
		return "char **";
	} elsif($type =~ /^const g?char ?\*$/) {
		return "const char *";
	} elsif($type =~ /^g?char ?\*$/) {
		return "char *";
	} elsif($type =~ /^g?char$/) {
		return "char";
	} elsif($type =~ /\*$/) {
		return "unsigned int";
	} elsif($type eq "int") {
		return "int";
	} elsif($type =~ /^short( int)?$/) {
		return "short int";
	} elsif($type =~ /^long( int)?$/) {
		return "long int";
	} elsif($type =~ /^unsigned( int)?$/) {
		return "unsigned int";
	} elsif($type =~ /^unsigned short( int)?$/) {
		return "unsigned short int";
	} elsif($type =~ /^long long( int)?$/) {
		return "long long int";
	}
	
	return "/* Unknown '$arg' as '$type' */";
}

return true;
# EOF
