#!/usr/bin/env python



from PyQt4.QtCore import *
from PyQt4.QtGui import *

import sys

def treed (top):
    e = QTreeWidgetItem(top, ["ea"])
    f = QTreeWidgetItem(top, ["eb"])


qApp = QApplication(sys.argv)
tree = QTreeWidget()
a = QTreeWidgetItem(tree, ["ab","t"])
b = QTreeWidgetItem(a, ["b","c","d"])
a.setCheckState(0, Qt.Checked)
c = QTreeWidgetItem(tree, ["c"])
e = QTreeWidgetItem(tree, ["e"])
e.setFlags(Qt.ItemIsEditable)
treed(e)

tree.show()
tree.expandAll()
tree.collapseAll()
sys.exit(qApp.exec_())


