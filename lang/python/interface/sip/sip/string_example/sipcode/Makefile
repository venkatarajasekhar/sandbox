module=String
class=stdstring

objs=$(module)cmodule.o sip$(module)$(class).o

PYTHON_INCLUDES=-I/usr/include/python2.2
SIP_INCLUDES=-I/usr/local/include/sip
PYTHONLIBS=-L/usr/lib/python2.2/site-packages 

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c -I.. -I. $(PYTHON_INCLUDES) $(SIP_INCLUDES)  $<
	
	
all: libs

libs:  $(objs)
	$(CXX) -shared $(PYTHONLIBS) -lsip -o lib$(module)cmodule.so *.o 


clean:
	rm -f *.o *.so *.cc *.h sip_helper *.py *.pyc
