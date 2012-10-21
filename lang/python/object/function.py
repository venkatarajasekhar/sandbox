#!/usr/bin/python


def myfunction():
    pass

print myfunction                          # <-- Address of function!
print myfunction()                        # <-- return value of fucntion

if myfunction() is None:
    print "Yes, returned None!"
