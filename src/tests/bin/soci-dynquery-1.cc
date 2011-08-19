
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
	std::cerr << "query = `" << query << "'" << std::endl;
	
	// Parse optional arguments
	std::vector<std::string> values;
	for(int i=3; i<argc; ++i) {
		std::cerr << "value[" << values.size() << "] = `" << argv[i] << "'" << std::endl;
		values.push_back(argv[i]);
	}
	
	// Open SOCI session
	soci::session session(config);
	
	// Perform query
	if(values.size() == 0) {
		soci::rowset<soci::row> rs = (session.prepare << query );
		list_rowset(rs);
	} else if(values.size() == 1) {
		soci::rowset<soci::row> rs = (session.prepare << query, soci::use(values[0]) );
		list_rowset(rs);
	} else if(values.size() == 2) {
		soci::rowset<soci::row> rs = (session.prepare << query, soci::use(values[0]), soci::use(values[1]) );
		list_rowset(rs);
	} else if(values.size() == 3) {
		soci::rowset<soci::row> rs = (session.prepare << query, soci::use(values[0]), soci::use(values[1]), soci::use(values[2]) );
		list_rowset(rs);
	}
}

/** List rowset */
void list_rowset(soci::rowset<soci::row>& rs) {
	int r = 0;
	for(soci::rowset<soci::row>::const_iterator it=rs.begin(); it!=rs.end(); ++it) {
		const soci::row& row = *it;
		if(row.size() == 0) break;
		for(std::size_t c = 0; c<row.size(); ++c) {
			const soci::column_properties& props = row.get_properties(c);
			std::string name = props.get_name();
			std::cerr << "r=" << r << ", c=" << c << ", name=`" << name << "'";
			
			switch(props.get_data_type()) {
			case soci::dt_string: {
					const std::string value = row.get<std::string>(c);
					std::cerr << ", type=string, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_double: {
					double value = row.get<double>(c);
					std::cerr << ", type=double, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_integer: {
					int value = row.get<int>(c);
					std::cerr << ", type=int, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_unsigned_long: {
					unsigned long value = row.get<unsigned long>(c);
					std::cerr << ", type=unsigned long, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_long_long: {
					long long value = row.get<long long>(c);
					std::cerr << ", type=long long, value=`" << value << "'" << std::endl;
				}
				break;
			case soci::dt_date: {
					std::tm value = row.get<std::tm>(c);
					std::cerr << ", type=date, value=`" << asctime(&value) << "'" << std::endl;
				}
				break;
			}
		}
		r++;
	}
}

/* EOF */
