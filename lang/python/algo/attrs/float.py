
i = 1
f1 = 3.0
f2 = 3.1
s = 'sdfsdf sdfsd 434   + sdf '

def func(v):
    try:
        r = int(v)
        print 'int %d' % r
    except Exception as e:
        try :
            r = float(v)
            print 'float %f' % f
        except Exception as e:
            r = v
            print 'string %s' % r
    finally:
        return r



func(i)
func(f1)
func(f2)
func(s)
  
   
