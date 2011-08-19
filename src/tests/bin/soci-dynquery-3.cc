
#include <vector>
#include <string>
#include <iostream>
#include <soci/soci.h>

/* List rowset */
void list_rowset(soci::rowset<soci::row>& rs);

/** Dynamic SQL query with SOCI */
int main(int argc, char* argv[]) {
	
	// Parse settings
	if(argc < 3) return 1;
	
	std::string config = argv[1];
	std::string query = argv[2];
	std::cout << "query = `" << query << "'" << std::endl;
	
	// Parse optional arguments
	std::vector<std::string> values;
	for(int i=3; i<argc; ++i) {
		std::cout << "value[" << values.size() << "] = `" << argv[i] << "'" << std::endl;
		values.push_back(argv[i]);
	}
	
	// Open SOCI session
	soci::session session(config);
	
	// Perform query
	soci::details::prepare_type& my = session.prepare;
	soci::details::prepare_temp_type foo = my << query;
	for(std::size_t i = 0; i<values.size(); ++i) {
		foo.operator,(soci::use(values[i]));
	}
	soci::rowset<soci::row> rs = (foo);
	list_rowset(rs);
}

/** List rowset */
void list_rowset(soci::rowset<soci::row>& rs) {
	int r = 0;
	for(soci::rowset<soci::row>::const_iterator it=rs.begin(); it!=rs.end(); ++it) {
		const soci::row& row = *it;
		for(std::size_t c = 0; c<row.size(); ++c) {
			const soci::column_properties& props = row.get_properties(c);
			std::string name = props.get_name();
			std::cout << "r=" << r << ", c=" << c << ", name=`" << name << "'";
			
			switch(props.get_data_type()) {
			case soci::dt_string: {
					const std::string value = row.get<std::string>(c);
					std::cout << ", type=string, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_double: {
					double value = row.get<double>(c);
					std::cout << ", type=double, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_integer: {
					int value = row.get<int>(c);
					std::cout << ", type=int, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_unsigned_long: {
					unsigned long value = row.get<unsigned long>(c);
					std::cout << ", type=unsigned long, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_long_long: {
					long long value = row.get<long long>(c);
					std::cout << ", type=long long, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_date: {
					std::tm value = row.get<std::tm>(c);
					std::cout << ", type=date, value=`" << asctime(&value) << "'" << std::endl;
				}
				break;
			}
		}
		std::cout << std::endl;
		r++;
	}
}

/* EOF */
