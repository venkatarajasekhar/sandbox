######################################################################
# Automatically generated by qmake (2.01a) Wed Mar 16 15:22:23 2011
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += .
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include

LIBS += -L$$(QCAFRAMEWORK)/plugins -lQCaPlugin
LIBS += -L/opt/fontconfig/lib


# Input
SOURCES += main.cpp