CXX=g++
CXXFLAGS=-ggdb3 -O2 -rdynamic -fmessage-length=0 -Wall -Wshadow -Wextra -Wpointer-arith -Wconversion

all: build
build: curl-get-1 curl-post-1 curl-post-2

%: %.cc
	$(CXX) $(CXXFLAGS) -o $@ $< -lcurl

clean:
	rm -f curl-get-test
