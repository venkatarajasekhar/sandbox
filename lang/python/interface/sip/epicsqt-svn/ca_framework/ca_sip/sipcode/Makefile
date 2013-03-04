TARGET = CaFramework.so
OFILES = sipCaFrameworkcmodule.o sipCaFrameworkVariableNameManager.o sipCaFrameworkUserMessage.o sipCaFrameworkQCaToolTip.o sipCaFrameworkqcaobjectQCaObject.o sipCaFrameworkqcaobject.o sipCaFrameworkQCaEventUpdate.o sipCaFrameworkQCaEventItem.o sipCaFrameworkQCaEventFilter.o sipCaFrameworkQCaInstalledFiltersListItem.o sipCaFrameworkQCaDateTime.o sipCaFrameworkQCaConnectionInfo.o sipCaFrameworkQCaAlarmInfo.o sipCaFrameworkstdstring.o sipCaFrameworkGuiPushButton.o sipCaFrameworkgeneric.o sipCaFrameworkCmdPushButton.o sipCaFrameworkcarecordCaRecord.o sipCaFrameworkgenericGeneric.o sipCaFrameworkcarecordca_limit.o sipCaFrameworkcarecord.o sipCaFrameworkcaobjectCaObject.o sipCaFrameworkcaobject.o sipCaFrameworkcaconnectionCaConnection.o sipCaFrameworkcaconnectioncaSubscription.o sipCaFrameworkcaconnectioncaContext.o sipCaFrameworkcaconnectioncaLink.o sipCaFrameworkcaconnection.o sipCaFrameworkASguiForm.o
HFILES = sipAPICaFramework.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_NO_DEBUG -DQT_CORE_LIB -DQT_GUI_LIB -I. -I/usr/local/epics/base/official/include -I/usr/local/epics/base/official/src/libCom/osi/os/posix -I/home/cls1fs/epics/epics2//workspace/epicsqt/epicsqt-svn//ca_framework//widgets/include -I/home/cls1fs/epics/epics2//workspace/epicsqt/epicsqt-svn//ca_framework//data/include -I/home/cls1fs/epics/epics2//workspace/epicsqt/epicsqt-svn//ca_framework//api/include -I/home/cls1fs/epics/epics2//workspace/epicsqt/epicsqt-svn//ca_framework//plugins/include -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include/python2.6 -I/usr/lib64/qt4/mkspecs/default -I/usr/include -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2  -fstack-protector --param=ssp-buffer-size=4 -m64 -mtune=generic -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2  -fstack-protector --param=ssp-buffer-size=4 -m64 -mtune=generic -Wall -W -D_REENTRANT
LFLAGS = -shared -Wl,-O1 -Wl,-rpath,/home/cls1fs/epics/epics2//workspace/epicsqt/epicsqt-svn//ca_framework//plugins/ -Wl,--version-script=CaFramework.exp
LIBS = -L/home/cls1fs/epics/epics2//workspace/epicsqt/epicsqt-svn//ca_framework//plugins/ -L/usr/X11R6/lib -lQCaPlugin -lQtCore -lQtGui -lXext -lX11 -lm -lpthread
MOC = /usr/lib64/qt4/bin/moc
VPATH = /home/cls1fs/epics/epics2//workspace/epicsqt/epicsqt-svn//ca_framework//ca_sip//sipcode

.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: initCaFramework; local: *; };' > CaFramework.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib64/python2.6/site-packages || mkdir -p $(DESTDIR)/usr/lib64/python2.6/site-packages
	cp -f $(TARGET) $(DESTDIR)/usr/lib64/python2.6/site-packages/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/CaFramework || mkdir -p $(DESTDIR)/usr/share/sip/CaFramework
	cp -f /home/cls1fs/epics/epics2//workspace/epicsqt/epicsqt-svn//ca_framework//ca_sip/CaFramework.sip $(DESTDIR)/usr/share/sip/CaFramework/CaFramework.sip
	@test -d $(DESTDIR)/usr/lib64/python2.6/site-packages || mkdir -p $(DESTDIR)/usr/lib64/python2.6/site-packages
	cp -f CaFramework_config.py $(DESTDIR)/usr/lib64/python2.6/site-packages/CaFramework_config.py

clean:
	-rm -f $(TARGET)
	-rm -f sipCaFrameworkcmodule.o
	-rm -f sipCaFrameworkVariableNameManager.o
	-rm -f sipCaFrameworkUserMessage.o
	-rm -f sipCaFrameworkQCaToolTip.o
	-rm -f sipCaFrameworkqcaobjectQCaObject.o
	-rm -f sipCaFrameworkqcaobject.o
	-rm -f sipCaFrameworkQCaEventUpdate.o
	-rm -f sipCaFrameworkQCaEventItem.o
	-rm -f sipCaFrameworkQCaEventFilter.o
	-rm -f sipCaFrameworkQCaInstalledFiltersListItem.o
	-rm -f sipCaFrameworkQCaDateTime.o
	-rm -f sipCaFrameworkQCaConnectionInfo.o
	-rm -f sipCaFrameworkQCaAlarmInfo.o
	-rm -f sipCaFrameworkstdstring.o
	-rm -f sipCaFrameworkGuiPushButton.o
	-rm -f sipCaFrameworkgeneric.o
	-rm -f sipCaFrameworkCmdPushButton.o
	-rm -f sipCaFrameworkcarecordCaRecord.o
	-rm -f sipCaFrameworkgenericGeneric.o
	-rm -f sipCaFrameworkcarecordca_limit.o
	-rm -f sipCaFrameworkcarecord.o
	-rm -f sipCaFrameworkcaobjectCaObject.o
	-rm -f sipCaFrameworkcaobject.o
	-rm -f sipCaFrameworkcaconnectionCaConnection.o
	-rm -f sipCaFrameworkcaconnectioncaSubscription.o
	-rm -f sipCaFrameworkcaconnectioncaContext.o
	-rm -f sipCaFrameworkcaconnectioncaLink.o
	-rm -f sipCaFrameworkcaconnection.o
	-rm -f sipCaFrameworkASguiForm.o
	-rm -f CaFramework.exp
