#!/usr/bin/env python



d1 = dict()
d2 = {}


d1['a']='AAAAA'
d2[1]=d1['a']

try:
    print "d1['a']=%s" % d1['a']
    print "d1['b']=%s" % d1.get('b')                # Return None if not found
    print "d1['c']=%s" % d1['c']
except NameError as e:
    print "NameError %s" % e
except KeyError as e:
    print "KeyError %s" % e
