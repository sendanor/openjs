/* 
 * Diff library originally from tdb on #c++.fi @ IRCNet
 * 
 * 18:01:52 [IRCNet] -!- tdb [tdb@tdb.fi]
 * 18:01:52 [IRCNet] -!-  ircname  : Mikko Rasa "The DataBeaver"
 * 18:01:52 [IRCNet] -!-  channels : @#aaretontylsyys @#c++ @#c++.fi @#FooBar
 *                                  @#linux^n00bs @#supcom @#utf-8 @#debian.fi
 * 18:01:52 [IRCNet] -!-  server   : irc.song.fi [TDC Song, Finland]
 * 18:01:52 [IRCNet] -!- End of WHOIS
 * 
 * License: LGPL
 * 
 * $Id: Diff.h 806 2008-06-29 20:25:37Z jheusala $
 */

#ifndef TDB_DIFF_H_
#define TDB_DIFF_H_ 1

#include <istream>
#include <list>
#include <ostream>
#include <string>
#include <vector>
#include <cstdlib>

namespace diff {

  /** */
  class Diff {
  public:

    /** Constructor */
	inline Diff();

    /** */
	inline void set_ignore_empty(bool i)	{ ignore_empty=i; }
    
    /** Produces a diff between two input streams. */
    inline void create(std::istream &, std::istream &);

    /** Applies the diff to an input stream and writes the result to an output stream. */
	inline void apply(std::istream &, std::ostream &) const;
    
    /** Returns 0 if the diff can be applied successfully, 1 if it doesn't match, or 2
     * if it was already applied
     */
	inline int check(std::istream &) const;
    
    /** Checks if this diff conflicts with another.  Both diffs have to be created from
     * the same "original" input.  Returns 0 for no conflicts, 1 otherwise.
     */
	inline int check_conflicts(const Diff &) const;
    
    /** Writes the diff itself to an output stream. */
	inline void write(std::ostream &) const;
    
    /** Reads a diff description from an input stream. */
	inline void read(std::istream &);
    
private:
	struct Line
	{
		char			type;
		std::string	line;

		inline Line(char t, const std::string &l): type(t), line(l)	{ }
	};
	struct Block
	{
		unsigned				start1;
		unsigned				start2;
		std::list<Line>	lines;

		inline Block(unsigned s1, unsigned s2): start1(s1), start2(s2)	{ }
	};
	class Input
	{
	public:
		inline Input(std::istream &);
		inline bool			getline(unsigned, std::string &);
		inline void			prune(unsigned);
		inline std::string	operator[](unsigned n)	{ std::string l; getline(n,l); return l; }
		inline bool			eof() const					{ return in.eof(); }
		inline unsigned		get_start() const			{ return start; }
		inline unsigned		get_end() const			{ return end; }
	private:
		std::istream				&in;
		std::list<std::string>	buf;
		unsigned						start;
		unsigned						end;
	};

	bool					ignore_empty;
	std::list<Block>	blocks;
	unsigned				context;

	inline bool					compare(const std::string &, const std::string &) const;
	inline bool					is_empty(const std::string &) const;
	inline std::vector<unsigned>	get_affected_lines() const;
  };

}
    
//#include "errors.h"
#include <stdexcept>

inline diff::Diff::Diff():
	ignore_empty(false),
	context(3)
{ }

/*
Produces a diff between two input streams.
*/
inline void diff::Diff::create(std::istream &is1, std::istream &is2)
{
	blocks.clear();

	Input    in1(is1);
	Input    in2(is2);
	unsigned pos1=0;
	unsigned pos2=0;
	Block    *cur_block=0;
	unsigned same=0;

	while(1)
	{
		if(in1[pos1]!=in2[pos2])
		{
			// Start a new block if needed
			if(!cur_block)
			{
				unsigned i=(pos1>context)?pos1-context:0;
				unsigned j=(pos2>context)?pos2-context:0;
				blocks.push_back(Block(i,j));
				cur_block=&blocks.back();
				// Add preceding context
				for(; i<pos1; ++i)
					cur_block->lines.push_back(Line(' ',in1[i]));
			}

			// Find the next position with identical content
			unsigned delta1=0,delta2=0;
			unsigned best_score=0;
			unsigned limit=0;
			for(unsigned i=1;; ++i)
			{
				for(unsigned j=0; j<=i; ++j)
				{
					// Check how many identical lines we have here
					unsigned k;
					for(k=0; (k<context*2 && compare(in1[pos1+j+k],in2[pos2+i-j+k])); ++k);
					if(!k) continue;

					if(!best_score) limit=i+200;
					if(k>best_score)
					{
						delta1=j;
						delta2=i-j;
						best_score=k;
					}
				}

				// Stop when we have reached the limit of looking for better matches
				if(limit && i>limit) break;
				if(best_score==context*2) break;

				// Stop when we have reached the end of both streams
				if(in1.eof() && pos1+i>=in1.get_end() && in2.eof() && pos2+i>=in2.get_end())
				{
					delta1=in1.get_end()-pos1;
					delta2=in2.get_end()-pos2;
					break;
				}
			}

			// Add the changes to the block
			for(unsigned i=0; i<delta1; ++i,++pos1)
				cur_block->lines.push_back(Line('-',in1[pos1]));
			for(unsigned i=0; i<delta2; ++i,++pos2)
				cur_block->lines.push_back(Line('+',in2[pos2]));
			same=0;
		}
		else
		{
			if(cur_block)
			{
				// Add trailing context
				cur_block->lines.push_back(Line(' ',in1[pos1]));
				++same;
				if(same>=context) cur_block=0;
			}
			// Drop unnecessary lines from the input buffers
			if(pos1>context) in1.prune(pos1-context);
			if(pos2>context) in2.prune(pos2-context);
			++pos1;
			++pos2;
		}
		// Check if we reached the end-of-stream
		if(in1.eof() && pos1>=in1.get_end() && in2.eof() && pos2>=in2.get_end()) break;
	}
}

/*
Applies the diff to an input stream and writes the result to an output stream.
*/
inline void diff::Diff::apply(std::istream &is, std::ostream &out) const
{
	Input    in(is);
	unsigned pos=0;

	for(std::list<Block>::const_iterator i=blocks.begin(); i!=blocks.end(); ++i)
	{
		const std::list<Line> &lines=i->lines;
		int delta=0;
		// Try to find the start position of this block
		for(unsigned j=0;; ++j)
		{
			delta=(j&1)?-(int)j/2:j/2;
			if(delta<0 && (unsigned)-delta>i->start1)
				continue;
			if(delta>0 && i->start1+delta>in.get_end() && in.eof())
				throw std::runtime_error("Unable to apply diff");

			// Compare the preceding context and any deleted lines
			bool ok=true;
			unsigned n=0;
			for(std::list<Line>::const_iterator k=lines.begin(); (k!=lines.end() && (k->type==' ' || k->type=='-') && ok); ++k,++n)
				ok=compare(in[i->start1+delta+n], k->line);
			if(ok) break;
		}

		// Copy everything up to the start of the block
		unsigned start=i->start1+delta;
		for(; pos<start; ++pos)
			out<<in[pos]<<'\n';

		for(std::list<Line>::const_iterator j=lines.begin(); j!=lines.end(); ++j)
		{
			if(j->type==' ')
			{
				if(!compare(in[pos],j->line))
					throw std::runtime_error("Unable to apply diff");
				out<<j->line<<'\n';
				++pos;
			}
			else if(j->type=='-')
			{
				if(!compare(in[pos],j->line))
					throw std::runtime_error("Unable to apply diff");
				++pos;
			}
			else if(j->type=='+')
				out<<j->line<<'\n';
		}
		in.prune(pos);
	}

	for(; (!in.eof() || pos<in.get_end()); ++pos)
		out<<in[pos]<<'\n';
}

/*
Returns 0 if the diff can be applied successfully, 1 if it doesn't match, or 2
if it was already applied
*/
inline int diff::Diff::check(std::istream &is) const
{
	Input    in(is);
	unsigned pos=0;
	bool     applied=false;

	for(std::list<Block>::const_iterator i=blocks.begin(); i!=blocks.end(); ++i)
	{
		const std::list<Line>	&lines=i->lines;
		int	delta=0;
		for(unsigned j=0;; ++j)
		{
			delta=(j&1)?-(int)j/2:j/2;
			if(delta<0 && (unsigned)-delta>i->start1) continue;
			if(delta>0 && i->start1+delta>in.get_end() && in.eof()) return 1;
			bool     ok=true;
			unsigned n=0;
			for(std::list<Line>::const_iterator k=lines.begin(); (k!=lines.end() && (k->type==' ' || k->type=='-') && ok); ++k,++n)
				ok=compare(in[i->start1+delta+n],k->line);
			if(ok) break;
		}
		unsigned	start=i->start1+delta;
		pos=start;
		unsigned	ok=3;
		for(std::list<Line>::const_iterator j=lines.begin(); j!=lines.end(); ++j)
		{
			if(j->type==' ')
			{
				if(!compare(in[pos],j->line))
					return 1;
				++pos;
			}
			else if(j->type=='-')
			{
				if(!compare(in[pos],j->line)) ok&=~1;
				++pos;
			}
			else if(j->type=='+')
			{
				if(!compare(in[pos],j->line)) ok&=~2;
			}
		}
		if(!ok) return 1;
		if(ok==1 && applied) return 1;
		if(ok==2)
		{
			if(i==blocks.begin())
				applied=true;
			else
				return 1;
		}
		in.prune(pos);
	}

	return applied?2:0;
}

/*
Checks if this diff conflicts with another.  Both diffs have to be created from
the same "original" input.  Returns 0 for no conflicts, 1 otherwise.
*/
inline int diff::Diff::check_conflicts(const Diff &diff) const
{
	std::vector<unsigned>	lines1=get_affected_lines();
	std::vector<unsigned>	lines2=diff.get_affected_lines();
	std::vector<unsigned>::iterator	i1=lines1.begin();
	std::vector<unsigned>::iterator	i2=lines2.begin();
	while(i1!=lines1.end() && i2!=lines2.end())
	{
		unsigned	pos1=(*i1)&0x3FFFFFFF;
		unsigned	pos2=(*i2)&0x3FFFFFFF;
		unsigned	type1=(*i1)>>30;
		unsigned	type2=(*i2)>>30;
		if(pos1==pos2)
		{
			// If one diff affects in any way a line the other deletes, it's a conflict
			if(type1==1 || type2==1) return 1;
			// Inserting between lines the other diff modifies is a conflict
			if(type1==2 && type2!=3) return 1;
			if(type1!=3 && type2==2) return 1;
			++i1;
			++i2;
		}
		else if(pos1<pos2)
			++i1;
		else
			++i2;
	}

	return 0;
}

/*
Writes the diff itself to an output stream.
*/
inline void diff::Diff::write(std::ostream &out) const
{
	for(std::list<Block>::const_iterator i=blocks.begin(); i!=blocks.end(); ++i)
	{
		unsigned	minus=0;
		unsigned	plus=0;
		for(std::list<Line>::const_iterator j=i->lines.begin(); j!=i->lines.end(); ++j)
		{
			if(j->type!='+')
				++minus;
			if(j->type!='-')
				++plus;
		}
		out<<"@@ -"<<i->start1+1<<','<<minus<<" +"<<i->start2+1<<','<<plus<<" @@\n";
		for(std::list<Line>::const_iterator j=i->lines.begin(); j!=i->lines.end(); ++j)
			out<<j->type<<j->line<<'\n';
	}
}

/*
Reads a diff description from an input stream.
*/
inline void diff::Diff::read(std::istream &in)
{
	blocks.clear();

	std::string line;
	Block  *cur_block=NULL;

	while(getline(in,line))
	{
		if(!line.compare(0,2,"@@"))
		{
			unsigned	i,j;
			for(i=2; (i<line.size() && line[i]!='-'); ++i);
			++i;
			for(j=i; (j<line.size() && line[j]!=','); ++j);
			unsigned pos1=strtol(line.substr(i,j-i).c_str(),NULL,10)-1;
			for(i=j; (i<line.size() && line[i]!='+'); ++i);
			++i;
			for(j=i; (j<line.size() && line[j]!=','); ++j);
			unsigned pos2=strtol(line.substr(i,j-i).c_str(),NULL,10)-1;
			blocks.push_back(Block(pos1,pos2));
			cur_block=&blocks.back();
		}
		else if(cur_block && (line[0]==' ' || line[0]=='+' || line[0]=='-'))
			cur_block->lines.push_back(Line(line[0],line.substr(1)));
	}
}

/*
Returns true if the two lines are considered equal, false otherwise
*/
inline bool diff::Diff::compare(const std::string &line1, const std::string &line2) const
{
	if(ignore_empty && is_empty(line1) && is_empty(line2)) return true;
	return (line1==line2);
}

/*
Checks whether a line consist of whitespace only
*/
inline bool diff::Diff::is_empty(const std::string &line) const
{
	for(std::string::const_iterator i=line.begin(); i!=line.end(); ++i)
		if(!isspace(*i)) return false;
	return true;
}

/*
Returns a list of the lines affected by the diff.  Highest two bits tell how
the line is affected - 00=context, 01=removed, 10=insert before, 11=block start
*/
inline std::vector<unsigned> diff::Diff::get_affected_lines() const
{
	std::vector<unsigned>	result;
	for(std::list<Block>::const_iterator i=blocks.begin(); i!=blocks.end(); ++i)
	{
		unsigned	pos=i->start1;
		for(std::list<Line>::const_iterator j=i->lines.begin(); j!=i->lines.end(); ++j)
		{
			if(j->type==' ')
			{
				if(j==i->lines.begin())
					result.push_back(pos|0xC0000000);
				else
					result.push_back(pos);
				++pos;
			}
			else if(j->type=='-')
			{
				result.push_back(pos|0x40000000);
				++pos;
			}
			else if(j->type=='+')
				result.push_back(pos|0x80000000);
		}
	}

	return result;
}

/*******************
** diff::Diff::Input
*/

inline diff::Diff::Input::Input(std::istream &i):
	in(i),
	start(0),
	end(0)
{ }

/*
Gets line n from the input and stores it into l.  Fails if the line is already
discarded from the buffer or is past the end-of-input.  Returns true on success
and false on failure (similar to std::getline).
*/
inline bool diff::Diff::Input::getline(unsigned n, std::string &l)
{
	if(n<start) return false;
	if(in.eof() && n>=end) return false;
	while(n>=end)
	{
		std::string	line;
		if(!std::getline(in,line))
			return false;
		if(*line.rbegin()=='\r') line=line.substr(0,line.size()-1);
		buf.push_back(line);
		++end;
	}
	std::list<std::string>::iterator	i=buf.begin();
	advance(i,n-start);
	l=*i;

	return true;
}

/*
Discards any lines before n from the buffer.
*/
inline void diff::Diff::Input::prune(unsigned n)
{
	while(start<n)
	{
		buf.erase(buf.begin());
		++start;
	}
}

#endif
/* EOF */
