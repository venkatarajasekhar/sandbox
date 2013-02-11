class E(object):
     def f(x):
          print x
          #debug('toto', 3)         # <-- doesn't work
          #self.debug('toto', 3)         # <-- doesn't work
          return 4
     f = staticmethod(f)

     def debug(message, level):
         print "d " + message

print E.f(3)
print '--------------'
print E().f(3)
