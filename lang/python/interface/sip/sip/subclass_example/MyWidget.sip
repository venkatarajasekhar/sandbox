
%Import qt/qtmod.sip

%Module MyWidget

class MyWidget : QWidget
{

%TypeHeaderCode 
#include "mywidget.h"
%End

public:
    MyWidget(QWidget*);

};

