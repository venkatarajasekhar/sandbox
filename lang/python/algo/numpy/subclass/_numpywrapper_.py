import numpy as np

class LRecArray(np.recarray):
    """
    >>> arr = np.array([(1.0, 2), (3.0, 4)], dtype=[('x', float), ('y', int)])
    >>> rec = arr.view(LRecArray)
    >>> rec.metadata = { 'data': '3/12/2012' }
    >>> rec
    l.rec.array([(1.0, 2), (3.0, 4)], 
          dtype=[('x', '<f8'), ('y', '<i8')]),
          metadata = {'data': '3/12/2012'} )
    >>> rec.x
    array([ 1.,  3.])
    >>> rec.metadata
    {'data': '3/12/2012'}
    >>> type(rec)
    <class '__main__.LRecArray'>

    >>> view = rec[1:]
    >>> view
    l.rec.array([(3.0, 4)], 
          dtype=[('x', '<f8'), ('y', '<i8')]),
          metadata = {'data': '3/12/2012'} )

    >>> rec.metada = None
    >>> view.metadata
    {'data': '3/12/2012'}

    >>> rec = LRecArray(3, formats='f8,f8,f8',names='x,y,z',metadata={'operator': 'emayssat'})
    >>> from numpy.lib import recfunctions as rfn
    >>> rfn.get_names(rec.dtype)
    ('x', 'y', 'z')

    """

    def __new__(subtype, shape, dtype=None, buf=None, offset=0, strides=None,
                formats=None, names=None, titles=None,
                byteorder=None, aligned=False, order='C',metadata={}):

        self = np.recarray.__new__(subtype, shape, dtype, buf, offset, strides,
                formats, names, titles, byteorder, aligned, order)

        self.metadata = metadata
        return self


    def __array_finalize__(self, obj):
        # see InfoArray.__array_finalize__ for comments
        if obj is None: return
        self.metadata = getattr(obj, 'metadata', None)

    def __repr__(self) :
        s = np.ndarray.__repr__(self)
        s.strip() 
        s += ',\n      '
        s += 'metadata = %s )' % self.metadata
        return s.replace("LRecArray", "l.rec.array", 1)

#----------------------------------------------------------------------
# MAIN
#----------------------------------------------------------------------

if __name__ == "__main__":
    import doctest
    doctest.testmod()


