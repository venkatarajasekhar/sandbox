all: use_cppcode

lib:
	$(CXX) -c cppcode.cpp -o cppcode.o
	$(AR) crf libcppcode.a cppcode.o

use_cppcode: lib
	$(CXX) use_cppcode.c -L. -lcppcode -o use_cppcode

clean:
	rm -rf libcppcode.a cppcode.o use_cppcode
