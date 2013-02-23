



class LIter(object):
    def __init__(self,parent=None):
        super(LIter, self).__init__()
        self.toto = 3
        self.tata = 'terto'

    def __getitem__(self,index):
        if index == 0 : return self.toto
        if index == 1 : return self.tata



if __name__ == "__main__":
    i = LIter()
    print i[0]
    print i[1]
    i.toto = 2
    i.tata = 'bye'
    print i[0]
    print i[1]
    i[0] = -1
    i[1] = 'salut'
    print i[0]
    print i[1]
