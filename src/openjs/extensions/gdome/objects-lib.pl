# Wrapper builder library
# $Id: $

# Get objects from a file
sub get_objects {
	my $file = shift;
	
	# Read configuration file
	open(HANDLE, $file); 
	my $data = join("\n", <HANDLE>);
	close(HANDLE);
	
	# Prepare data
	$data =~ s@//.*$@@gm;
	$data =~ s@/\*.*\*/@@gm;
	$data =~ s@[\t\r\n]@ @gm;
	$data =~ s@ *; *@;@gm;
	$data =~ s@ +@ @gm;
	$data =~ s@^ +@@g;
	$data =~ s@ +$@@g;

	# Split wrappers
	return split(";", $data);
}

# Parse object row
sub parse_object_row {
	my $row = shift;
	my %res = ();
	my @args = split(" ", $row);
	$res{'type'} = shift(@args);
	$res{'c_prefix'} = shift(@args);
	return %res;
}

return true
# EOF
