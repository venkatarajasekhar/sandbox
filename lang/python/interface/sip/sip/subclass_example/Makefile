CXX=g++
QTSIP=/usr/share/sip/qt
PYTHON_PREFIX=/usr

QTDIR=/usr/share/qt4

PYTHONLIB=$(PYTHON_PREFIX)/lib/python2.2
LIBTOOL="./libtool"


all:  mywidget.o sipcode

install:
	cd sipcode && $(MAKE) install

sipcode:
	mkdir sipcode
	cp sipcode-Makefile sipcode/Makefile
	cp sipQtFeatures.h sipcode/
	sip -I$(QTSIP)  -c sipcode \
	-t Qt_3_0_2 -t WS_X11  MyWidget.sip
	cd sipcode && $(MAKE)

mywidget.o: mywidget.cc mywidget.h
	$(LIBTOOL) $(CXX) -I$(QTDIR)/include  -I/usr/include/python2.2 -c mywidget.cc

clean: 
	rm -rf  sipcode
