CC = gcc
CFLAGS = -I /usr/include/libxml2
LIBS = xml2
#LDFLAGS =  -lpthread
LDFLAGS =  $(addprefix -l,$(LIBS))



all: createxml parsexml parsexml2

clean:
	rm  createxml parsexml
