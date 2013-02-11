#!/usr/bin/env python 

from PyQt4.QtGui import *
from PyQt4.QtCore import *

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    button = QPushButton()
    machine = QStateMachine()

    off = QState()
    off.assignProperty(button, 'text', 'Off')
    off.setObjectName('off')

    on = QState()
    on.setObjectName('on')
    on.assignProperty(button, 'text', 'On')

    off.addTransition(button, SIGNAL('clicked()'), on)
    on.addTransition(button, SIGNAL('clicked()'), off)

    machine.addState(off)
    machine.addState(on)
    machine.setInitialState(off)
    machine.start()
    button.resize(100, 50)
    button.show()
    sys.exit(app.exec_())


