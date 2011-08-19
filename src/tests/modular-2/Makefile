
CXX=g++
LDFLAGS=
CFLAGS=-ggdb3 -O2 -rdynamic -fmessage-length=0 -Wall -Wshadow -Wextra -Wpointer-arith -Wconversion
CXXFLAGS=-ggdb3 -O2 -rdynamic -fmessage-length=0 -Wall -Wshadow -Wextra -Wpointer-arith -Wconversion

all: build
build: program FooModule.so BarModule.so

FooModule.o: FooModule.cc FooModule.h Module.h
	$(CXX) -c $(CXXFLAGS) -o FooModule.o FooModule.cc

FooModule.so: FooModule.o
	$(CXX) -shared -Wl,-soname,FooModule.so -o FooModule.so FooModule.o

BarModule.o: BarModule.cc BarModule.h Module.h
	$(CXX) -c $(CXXFLAGS) -o BarModule.o BarModule.cc

BarModule.so: BarModule.o
	$(CXX) -shared -Wl,-soname,BarModule.so -o BarModule.so BarModule.o

main.o: main.cc Module.h Modular.h
	$(CXX) -c $(CXXFLAGS) -o main.o main.cc

program: main.o
	$(CXX) $(CXXFLAGS) -o program main.o -ldl

clean:
	rm -rf *.o program FooModule.so BarModule.so
