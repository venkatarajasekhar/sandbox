#!/bin/sh


var1 = "toto1"
var2 = "toto2"
print "<text1> %s <text2>" % var1

print "<text1> %s <text2> %s <text3>" % (var1, var2)

print "<text1> %(name2)s <text2> %(name1)s <text3>" % {"name1":var1, "name2":var2}
