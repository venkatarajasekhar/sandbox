

class C(object):
    def __init__(self):
        self.arg1 = 2
        arg2 = 'toto'



c = C()

try:
    c.arg1 = 3
    print 'ok'
except AttributeError as e:
    print 'attibute not found'
    
try:
    c.arg3 = 3
    print 'ok'
except AttributeError as e:
    print 'attibute not found'
    
try:
    x = c.arg4 
    print 'ok'
except AttributeError as e:
    print 'attibute not found'
    
try:
    x = c.arg5 
    print 'ok'
except AttributeError as e:
    print 'attibute not found'
finally:
    print 'but continutiong'
    
try:
    x = c.arg5 
    print 'ok'
finally:
    print 'but continutiong'
