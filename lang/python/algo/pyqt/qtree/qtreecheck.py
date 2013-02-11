#!/usr/bin/env python


import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *

class TestItem():
    def __init__(self, name, checked):
        self.checked = checked
        self.name = name

class StbTreeView(QAbstractListModel):
    def __init__(self, args, parent=None):
        super(StbTreeView, self).__init__(parent)

        self.args = []
        for item_name in args:
            self.args.append(TestItem(item_name, False))

        for item in self.args:
            print item.name

    def rowCount(self, parent):
        return len(self.args)

    def headerData(self, section, orientation, role):
        if role == Qt.DisplayRole:
            if orientation == Qt.Horizontal:
                return QString("Select STB's")

    def flags(self, index):
        #return  Qt.ItemIsUserCheckable | Qt.ItemIsEditable | Qt.ItemIsSelectable | Qt.ItemIsEnabled
        return  Qt.ItemIsUserCheckable | Qt.ItemIsSelectable | Qt.ItemIsEnabled

    def data(self, index, role=Qt.DisplayRole):
        if role == Qt.DisplayRole:
            row = index.row()
            print self.args[row].name
            return self.args[row].name

        if role == Qt.CheckStateRole:
            row = index.row()
            print self.args[row].checked
            if self.args[row].checked == False:
                return QVariant(Qt.Unchecked)
            else:
                return QVariant(Qt.Checked)

    def setData(self, index, value, role):
        if role == Qt.CheckStateRole:
            row = index.row()
            self.args[row].checked = not self.args[row].checked             
        return True

def main():
    myapp = QApplication(sys.argv)

    data = ['STB1', 'STB2', 'STB3', 'STB4', 'STB5', 'STB6', 'STB7', 'STB8']

    model = StbTreeView(data)
    tree_view = QTreeView()
    tree_view.show()
    tree_view.setModel(model)

    myapp.exec_()

if __name__ == '__main__':
    main()
