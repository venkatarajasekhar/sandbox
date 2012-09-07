CC = gcc
LIBS = python2.7 m 
INCLUDES = /usr/include/python2.7


LDFLAGS =  $(addprefix -l,$(LIBS))
CFLAGS =  $(addprefix -I,$(INCLUDES))

all: pureembedding expressioncalc c_python


.PHONY = clean
clean:
	rm -f c_python

