#!/usr/bin/env python


import sys
from PyQt4.QtCore import Qt, QVariant
from PyQt4.QtGui import QApplication, QFont, QStandardItemModel, QTableView, \
     QTreeView
  
if __name__ == "__main__":
  
    app = QApplication(sys.argv)
  
    phonebook = {"Arthur": "Camelot",
                 "Monty": "The Circus",
                 "David": "Oslo"}
  
    model = QStandardItemModel(6, 4)
    row = 0
  
    for name, address in phonebook.items():
  
        model.setData(model.index(row, 0), QVariant(name))
        model.setData(model.index(row, 1), QVariant(address))
        font = QFont()
        font.setPointSize(16)
        font.setBold(True)
        model.setData(model.index(row, 0), QVariant(font), Qt.FontRole)
        model.setData(model.index(row, 1), QVariant(font), Qt.FontRole)
        row += 1
  
    model.setHeaderData(0, Qt.Horizontal, QVariant("Name"))
    model.setHeaderData(1, Qt.Horizontal, QVariant("Address"))
  
    tree = QTreeView()
    tree.setModel(model)
    tree.show()
  
    table = QTableView()
    table.setModel(model)
    table.show()
  
    sys.exit(app.exec_())
  
