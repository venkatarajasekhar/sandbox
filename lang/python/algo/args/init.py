



class Toto(object):
    def __init__(self, one):
        print one
    def __init__(self, one, two):
        print one
        print two
#    def __init__(self, one, two, one):
#        print one
#        print two


t = Toto(1,2,1)
t = Toto(1,2)
t = Toto(1)
