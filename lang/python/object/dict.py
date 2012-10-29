#!/usr/bin/env python

def section(s):
    print "\n*** %s ***\n" % s.upper()

section("INTRO")
d1 = dict()
d2 = {}

print d1 == d2                                      # True


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


#----------------------------------------------------------------------
section("KEYS")

d = dict()
t = (2,3)                                           # You can use tuple as dictionary keys !!!
d[t] = "hello"
print d[t]

print t in d
print (2,3) in d
print (4,3) in d

#----------------------------------------------------------------------
section( "CACHING" )
import time

cache = dict()
def complex_computation(a, b):
    time.sleep(.5)
    return a + b

def cached_computation(a, b):
    key = (a, b)
    try:
        return cache[key]                                       # <-- instantaneous 
    except KeyError:
        cache[key] = complex_computation(a,b)                   # <-- take .5 sec
        return cache[key]

start_time = time.time()
print cached_computation(1,2)
intermediate_time = time.time()
print("the 1st computation took %f seconds" % (intermediate_time-start_time))
print cached_computation(1,2)
print("the 2nd computation took %f seconds" % (time.time()-intermediate_time))
print cached_computation(4,2)

#----------------------------------------------------------------------
section("copy")

d = { 'toto':1, 'tata':2 }
d1 = { 'titi': 4}
d1 = d.copy()

print "Original dict d=%s" % d
print "Copy d into d1. d1 = %s" % d1

d['toto'] = 3

print "Changed d to %s" % d 
print "Other d1 stays the same %s" % d1

#----------------------------------------------------------------------
section("deepcopy")

print "not imlpemented yet!"

#----------------------------------------------------------------------
section("function")

d = { 'toto':1, 'tata':2 }

def pprint(*a, **kw):
    for key, value in kw.items():                               # <-- notice how kw is parsed 
        print "%s --> %s" % (key, value)

pprint(**d)                                                     # <-- notice how d is passed
                                                                # equivalent to pprint(toto=1, tata=2)


