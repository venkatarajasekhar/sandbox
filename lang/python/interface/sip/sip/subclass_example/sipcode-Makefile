.SUFFIXES: .cpp

CXX=g++
QTDIR=/usr/share/qt4
PYTHON_PREFIX=/usr

LIBTOOL="../libtool"
PYTHONLIB=$(PYTHON_PREFIX)/lib/python2.2
PYTHONINC=$(PYTHON_PREFIX)/include/python2.2
MOC=$(QTDIR)/bin/moc

objs=$(patsubst %.cpp,%.lo, $(wildcard *.cpp) )


all: $(objs) libMyWidgetcmodule.so

sipMyWidgetProxyMyWidget.moc: sipMyWidgetProxyMyWidget.h
	$(MOC) -o $@ $<



MyWidgetcmodule.lo: sipMyWidgetProxyMyWidget.moc
	$(LIBTOOL) $(CXX) -I$(QTDIR)/include -I.. -I. -I$(PYTHONINC)  -c MyWidgetcmodule.cpp

%.lo: %.cpp
	$(LIBTOOL) $(CXX) -I$(QTDIR)/include -I.. -I.  -I$(PYTHONINC)  -c $<
	



libMyWidgetcmodule.so: MyWidgetcmodule.lo
	$(LIBTOOL) $(CXX) -shared  -rpath $(PYTHONLIB)/site-packages -export-dynamic -L$(QTDIR)/lib  -L$(PYTHONLIB)/site-packages -lsip   -lqtcmodule -lqt *.lo  -o libMyWidgetcmodule.la

install:
	$(LIBTOOL) cp libMyWidgetcmodule.la	$(PYTHONLIB)/site-packages
	$(LIBTOOL) cp MyWidget.py $(PYTHONLIB)/site-packages

clean:
	rm -rf .libs *.so *.lo
