/*
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * $Id: exception.h 7422 2009-03-31 21:53:06Z jheusala $
 */

/** 
 * \file: exception.h
 */

#ifndef SENDANOR_EXCEPTION_H
#define SENDANOR_EXCEPTION_H 1

#include <string>
#include <stdexcept>
#include <locale>
#include <boost/lexical_cast.hpp>
#include <msp/debug/backtrace.h>
#include "macros.h"                   // for MACRO_QUOTE

namespace sendanor {

	/** Base type for backtrace exceptions */
	class backtraceable {
	public:
		
		/** Destructor */
		inline virtual ~backtraceable() throw () { }
		
		/** Backtrace type */
		typedef Msp::Debug::Backtrace trace_t;
		
		/** Get backtrace */
		inline virtual const trace_t& trace() const = 0;
	};
	
	/** Wrapper for backtrace exceptions */
	template<class exception_t>
	class backtrace_error : public exception_t, public backtraceable {
	public:
		
		/** Constructor */
		inline backtrace_error(const std::string& arg)
		 : exception_t(arg), m_trace(trace_t::create()) { }
		
		/** Destructor */
		inline virtual ~backtrace_error() throw () { }
		
		/** Return exception's backtrace */
		inline const trace_t& trace() const { return m_trace; }
		
	private:
		trace_t m_trace;
	};
	
	typedef backtrace_error<std::runtime_error> backtrace_runtime_error;
	typedef backtrace_error<std::logic_error> backtrace_logic_error;
	
}

#define STD_RUNTIME_ERROR(X) std::runtime_error( std::string(__FILE__ ":" MACRO_QUOTE(__LINE__) ": ") + X )
#define STD_LOGIC_ERROR(X) std::logic_error( std::string(__FILE__ ":" MACRO_QUOTE(__LINE__) ": ") + X )

#define RUNTIME_ERROR(X) sendanor::backtrace_runtime_error( std::string(__FILE__ ":" MACRO_QUOTE(__LINE__) ": ") + X )
#define LOGIC_ERROR(X) sendanor::backtrace_logic_error( std::string(__FILE__ ":" MACRO_QUOTE(__LINE__) ": ") + X )

#endif
/* EOF */
