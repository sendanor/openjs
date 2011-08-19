/* libcurl -- c test */

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <curl/curl.h>
#include <cstring>

/* Callback declarations */	
extern size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp);

/* The main test code */
int main() {
	CURL *curl;
	CURLcode res;
	std::vector<char> data;
	
	curl_global_init(CURL_GLOBAL_ALL);
	curl = curl_easy_init();
	if(curl) {
		
		std::string post_data = "action=%2Fedit%2Frecord&options=%7B%22record%22%3A%7B%22username%22%3A%22String(foo)%22%2C%22realname%22%3A%22String(Foo%20Bar)%22%2C%22date%22%3A%22Date(1287197686000)%22%2C%22active%22%3Atrue%2C%22city%22%3A%22String(2)%22%2C%22id%22%3A1000%2C%22sum%22%3A1234.5678%7D%7D";
		
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L );
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_data.c_str());
		curl_easy_setopt(curl, CURLOPT_URL, "https://secure.sendanor.fi/~jheusala/jsui/server.cgi");
		curl_easy_setopt(curl, CURLOPT_USERAGENT, "libcurl-agent/1.0");
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
		res = curl_easy_perform(curl);
		
		std::cout << "We received:" << std::endl
		          << "--start--" << std::endl
		          << std::string(&(data[0]), data.size()) << std::endl
		          << "---end---" << std::endl;
		
		curl_easy_cleanup(curl);
	}
	
	curl_global_cleanup();
	return 0;
}

/* Callback to write received data from the server */
size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp) {
	const size_t realsize = size * nmemb;
	if(realsize < 1) return 0;
	
	std::vector<char>* data = (std::vector<char>*)userp;
	if(!data) return 0;
	
	const size_t prev_total_size = data->size();
	const size_t next_total_size = prev_total_size + realsize;
	
	data->resize(next_total_size, 0);
	if(data->size() != next_total_size) return 0;
	
	memcpy(&((*data)[prev_total_size]), buffer, realsize);
	
	return realsize;
}

/* EOF */
