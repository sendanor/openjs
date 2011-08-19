
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

dummy.so: dummy.cc
	$(CXX) -shared -Wl,-soname,dummy.so -o dummy.so dummy.cc

BarModule.o: BarModule.cc BarModule.h Module.h
	$(CXX) -c $(CXXFLAGS) -o BarModule.o BarModule.cc

BarModule.so: BarModule.o
	$(CXX) -shared -Wl,-soname,BarModule.so -o BarModule.so BarModule.o

ModuleRegister.o: ModuleRegister.cc ModuleRegister.h Module.h
	$(CXX) -c $(CXXFLAGS) -o ModuleRegister.o ModuleRegister.cc

main.o: main.cc Module.h ModuleRegister.h
	$(CXX) -c $(CXXFLAGS) -o main.o main.cc

program: main.o ModuleRegister.o
	$(CXX) $(CXXFLAGS) -o program main.o ModuleRegister.o -ldl

test-1: test-1.cc ModuleRegister.o dummy.so
	$(CXX) $(CXXFLAGS) -o test-1 test-1.cc ModuleRegister.o -ldl

clean:
	rm -rf *.o program FooModule.so BarModule.so
