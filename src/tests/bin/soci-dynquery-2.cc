
#include <vector>
#include <string>
#include <iostream>
#include <soci/soci.h>

/* List rowset */
void list_rowset(soci::rowset_iterator<soci::row>& begin, soci::rowset_iterator<soci::row>& end);

/** Dynamic SQL query with SOCI */
int main(int argc, char* argv[]) {
	
	if(argc < 3) return 1;
	
	std::string config = argv[1];
	std::string query = argv[2];
	
	// Parse optional arguments
	std::vector<std::string> values;
	for(int i=3; i<argc; ++i) values.push_back(argv[i]);
	
	// Open SOCI session
	soci::session session(config);
	
	// Perform query
	soci::row row;
	
	soci::statement st(session);
	//st.exchange(soci::into(row));
	st.exchange_for_rowset(soci::into(row));
	for(std::size_t i=0; i<values.size(); ++i) {
		st.exchange(soci::use(values[i]));
	}
	st.alloc();
	st.prepare(query);
	//st.define_and_bind();
	st.execute();
	
	// Build result
	soci::rowset_iterator<soci::row> it(st, row);
	soci::rowset_iterator<soci::row> end;
	list_rowset(it, end);
}

/** List rowset */
void list_rowset(soci::rowset_iterator<soci::row>& begin, soci::rowset_iterator<soci::row>& end) {
	int r = 0;
	for(soci::rowset_iterator<soci::row> it=begin; it!=end; ++it) {
		const soci::row& row = *it;
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
