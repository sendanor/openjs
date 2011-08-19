/* $Id: $
 *
 * This file is part of libmspcore
 * Copyright © 2007 Mikko Rasa, Mikkosoft Productions
 * Distributed under the LGPL
 */
#ifndef MSP_DEBUG_BACKTRACE_H_
#define MSP_DEBUG_BACKTRACE_H_

#include <list>
#include <ostream>
#include <string>

namespace Msp {
namespace Debug {

class Backtrace
{
public:
	struct StackFrame
	{
		void *address;
		std::string file;
		std::string symbol;

		//StackFrame(void *a, const std::string &s): address(a), symbol(s) { }
	};
	typedef std::list<StackFrame> FrameSeq;

	inline const FrameSeq &get_frames() const { return frames; }

	inline static Backtrace create();
private:
	FrameSeq frames;
};

inline std::ostream &operator<<(std::ostream &, const Backtrace &);
inline std::ostream &operator<<(std::ostream &, const Backtrace::StackFrame &);

} // namespace Debug
} // namespace Msp


/*
 * The Source Implementation
 */

// Must include something to test for glibc
#include <cstdlib>
#if !defined(WIN32) && defined(__GLIBC__)
#include <dlfcn.h>
#include <execinfo.h>
#endif
#include "demangle.h"

namespace Msp {
namespace Debug {

inline Backtrace Backtrace::create()
{
#if !defined(WIN32) && defined(__GLIBC__)
	void *addresses[50];
	int count=::backtrace(addresses, 50);

	Backtrace bt;
	Dl_info dli;
	for(int i=0; i<count; ++i)
	{
		StackFrame frame;
		frame.address=addresses[i];
		if(dladdr(addresses[i], &dli))
		{
			frame.file=dli.dli_fname;
			if(dli.dli_sname)
				frame.symbol=demangle(dli.dli_sname);
		}
		else
			frame.file="<unknown>";
		bt.frames.push_back(frame);
	}

	return bt;
#else
	return Backtrace();
#endif
}

inline std::ostream &operator<<(std::ostream &out, const Backtrace &bt)
{
	const Backtrace::FrameSeq &frames=bt.get_frames();
	for(Backtrace::FrameSeq::const_iterator i=frames.begin(); i!=frames.end(); ++i)
		out<<*i<<'\n';

	return out;
}

inline std::ostream &operator<<(std::ostream &out, const Backtrace::StackFrame &sf)
{
	out<<sf.address;
	if(!sf.symbol.empty())
		out<<" in "<<sf.symbol;
	out<<" from "<<sf.file;

	return out;
}

} // namespace Debug
} // namespace Msp

#endif
/* EOF */
