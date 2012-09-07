CC = gcc
#CPP = $(CC) -E	
CXX = g++
CFLAGS = 
CPPFLAGS = 
TARGET_ARCH = 

LIBS = pthread
#LDFLAGS =  -lpthread
LDFLAGS =  $(addprefix -l,$(LIBS))


all: threadlock tests


.PHONY = clean
clean:
	rm -f threadlock
#----------------------------------------------------------------------
# MAKEFILE TESTS BELOW THIS LINE
#----------------------------------------------------------------------
# http://www.gnu.org/software/make/manual/make.html#Automatic-Variables
# make -n
# make -p 
# make -k	: keep on going even if failure

#target: prerequisite(s)
#	execute one line at a time

#%.o : %.c
#	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

tests: toto tata

#include toto

threadlock2: threadlock.c
	$(CC) threadlock.c -lpthread -o threadlock

BAR = $PATH
FOO = $PATH

toto:
	@echo $(BAR)
	@echo $(FOO)
	@echo $(value FOO)
	touch toto.o

tata: clean2
	touch tata.o


OBJECTS := $(wildcard *.o)

clean2: $(OBJECTS)
	ls -al $(OBJETS) 

objects := $(patsubst %.c,%.o,$(wildcard *.c))
foo : $(objects)
	#cc -o foo $(objects)
	ls  $(objects)

LIB1 = pthread 
LIB2 = png12
LIBS_ = $(join $(LIB1), $(LIB2))

contents := $(shell cat Makefile)

ifdef ERROR1
$(error error is $(ERROR1))
$(warning error is $(ERROR1))
$(info error is $(ERROR1))
endif


# IMMEDIATE = first pass
# DEFERRED = second pass? when used?
#immediate = deferred
#immediate ?= deferred
#immediate := immediate
#immediate += deferred or immediate
#     
#define immediate
#  deferred
#endef
#     
#define immediate =
#  deferred
#endef
#     
#define immediate ?=
#  deferred
#endef
#     
#define immediate :=
#  immediate
#endef
#     
#define immediate +=
#  deferred or immediate
#endef
#
#For the append operator, ‘+=’, the right-hand side is considered immediate if the variable was previously set as a simple variable (‘:=’), and deferred otherwise. 
