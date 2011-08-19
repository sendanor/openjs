
CXX=g++
LDFLAGS=
CFLAGS=-ggdb3 -O2 -rdynamic -fmessage-length=0 -Wall -Wshadow -Wextra -Wpointer-arith -Wconversion
CXXFLAGS=-ggdb3 -O2 -rdynamic -fmessage-length=0 -Wall -Wshadow -Wextra -Wpointer-arith -Wconversion

all: build
build: test-1

dummy.so: dummy.cc
	$(CXX) -shared -Wl,-soname,dummy.so -o dummy.so dummy.cc

test-1: test-1.cc dummy.so
	$(CXX) $(CXXFLAGS) -o test-1 test-1.cc -ldl

clean:
	rm -rf *.o test-1 dummy.so
