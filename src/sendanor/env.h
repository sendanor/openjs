/*
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * Distributed under the Sendanor Open Source License, Version 0.9. See
 * accompanying file COPYING or copy at
 * http://www.sendanor.org/license/0_9.txt.
 * $Id: env.h 10033 2009-11-11 11:32:23Z jheusala $
 */

#ifndef SENDANOR_ENV_H
#define SENDANOR_ENV_H 1

#include <string>
#include <cstring>
#include <map>
#include "exception.h"

//#include <cstdio>
//#include <cstdlib>
//extern char **environ;

namespace sendanor {
	
	/** Get environment variable */
	inline std::string getenv(const std::string& env);
	
	/** Environment iterator functions */
	class env {
	public:
		
		struct item {
			inline item(const std::string& a_key, const std::string& a_value)
			 : key(a_key), value(a_value) { }
			inline item(const std::string& a) 
			 : key( a.substr(0, a.find_first_of('=')) )
			 , value( a.substr(a.find_first_of('=')+1) ) { }
			inline item(const item& i)
			 : key(i.key), value(i.value) { }
			std::string key;
			std::string value;
		};
		
		class iterator {
		public:
			inline iterator(char **a_ptr)
			 : m_ptr(a_ptr), m_item("", "") {
				normalize();
			}
			
			inline item const operator*() const {
				if(!m_ptr) throw RUNTIME_ERROR("!m_ptr");
				if(!(*m_ptr)) throw RUNTIME_ERROR("!(*m_ptr)");
				return item( std::string(*m_ptr, std::strlen(*m_ptr) ) );
			}
			
			inline item const* operator->() const {
				return &m_item;
			}
			
			inline bool operator==(iterator const& i) const { return m_ptr == i.m_ptr; }
			inline bool operator!=(iterator const& i) const { return m_ptr != i.m_ptr; }
			
			inline iterator& operator++() {
				if(!m_ptr) throw RUNTIME_ERROR("!m_ptr");
				++m_ptr;
				normalize();
				return *this;
			}
			
			//iterator& operator--() { if(!m_ptr) throw RUNTIME_ERROR("!m_ptr"); --m_ptr; return *this; }
			
			inline iterator operator++(int) {
				if(!m_ptr) throw RUNTIME_ERROR("!m_ptr");
				iterator i(m_ptr++);
				normalize();
				return i;
			}
			
			//iterator operator--(int) { if(!m_ptr) throw RUNTIME_ERROR("!m_ptr"); return iterator(m_ptr--); }
			
		private:
			char **m_ptr;
			item m_item; // Temporary for operator->
			
			inline void normalize() {
				if(!m_ptr) throw RUNTIME_ERROR("!m_ptr");
				if(*m_ptr) m_item = item( std::string(*m_ptr, std::strlen(*m_ptr) ) );
				else m_item = item("", "");
			}
			
		};
		
		inline env(char **a_env);
		inline iterator begin();
		inline iterator end();
	private:
		char **m_env;

		// For end()
    	bool m_end_once;
    	char **m_end_next;
		
	};
	
} // end of namespace


/*
 * The Source Implementation
 */

#include "logger.h"
//#include <cstdlib>              // for std::getenv and environ
//#include <cstdio>               // for environ
//extern char **environ;

/* Get environment variable */
inline std::string sendanor::getenv(const std::string& env) {
	SENDANOR_LOGGER_FUNCTION("getenv", "env=" << env);
	char* tmp = std::getenv(env.c_str());
	if(!tmp) return "";
	return std::string(tmp);
}

/* Constructor */
inline sendanor::env::env(char **a_env)
 : m_env(a_env)
 , m_end_once(false)
 , m_end_next(a_env) {
	SENDANOR_LOGGER_FUNCTION("env", "");
}
 
/* Get start iterator */
inline sendanor::env::iterator sendanor::env::begin() {
	SENDANOR_LOGGER_FUNCTION("begin", "");
	return iterator(m_env);
}

/* Get end iterator */
inline sendanor::env::iterator sendanor::env::end() {
	SENDANOR_LOGGER_FUNCTION("end", "");
	if(!m_end_once) {
		m_end_once = true;
		while (*m_end_next) m_end_next++;
	}
	return iterator(m_end_next);
}

#endif
/* EOF */
