# Make 
# 	does a first pass of the entire file and get the variable
# 	execute the directive at the second pass
# = 
# 	variable are replaced and expanded when called
# :=
#	variable is expanded when initialized
#	variable is replaced when called
# ?=
# 	variable is set if doesn't exist
# +=
# 	variable is appended to existing one (prefixed with a space)

HELLO = hello_1
HELLO_WORLD = $(HELLO) world!
HELLO_WORLD ?= bye bye
BONJOUR := $(HELLO) = bonjour!
BYE_BYE ?= bye
BYE_BYE += bye
HELLO = hello_2
# NOT USER=`logname`
USER = $(shell logname )

all: print_1 print_2 print_3 print_4
print_1:
	@echo $(HELLO_WORLD)
print_2:
	@echo $(BYE_BYE)
print_3:
	@echo $(BONJOUR)
print_4:
	@echo $(USER)
HELLO = hello_3

	
