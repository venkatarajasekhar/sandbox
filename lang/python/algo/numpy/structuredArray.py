#!/usr/bin/env python

import numpy as np
from numpy.lib import recfunctions as rfn
from numpy import random as rdn


np.lookfor('binary representation')     # <-- numpy specific help
np.info(np.sum)				# <-- docstring for np.sum ~ help(np.sum)

#----------------------------------------------------------------------
# CREATING STRUCTURED ARRAYS
#
# Tuple = row
# The dtype is applicable on the tuple/record
# 
# ndarray = N-dymension array of fixed-size items( array of arrays)
# structured array = ndarray with a complex dtype (array of tuples )
# recarray = structured array with fields as properties
# masked arrays = arrays that may have missing or invalid entries
#
# ''' dtype definition '''
# bool : boolean
# int, float : 64 bit integer, float
# int8, int16, int24, int32: 8-bit, 16-bit, 24-bit, 32-bit integer
#
#--- CLASSIC INSTANCIATION
''' Split dtype (formats+names) '''
nrows = 3
r = np.recarray(nrows, formats='i4,f8,f8',names='id,x,y')     # <-- direct as a record array
r = np.recarray(nrows, dtype=[('id','i4'),('x','<f8'),('y','<f8')])
#r = np.recarray(nrows, dtype=[('id','str'),('x','<f8'),('y','<f8')])
r = np.recarray(nrows, dtype=[('id',np.str_,16),('x','<f8'),('y','<f8')])		# <-- str type!
r.id + "toto"

#If you want an empty array, you need at least one dimension of size 0:
dt_knobs = [('pvName',(str,40)),('start','float'),('stop','float'),('mode',(str,10))]	# <-- str type!
r_knobs = np.recarray([0], dtype=dt_knobs)						

nrows = 100000
#dt_r = np.dtype([('coln','int64')])
r = np.rec.fromarrays( [ np.arange(nrows),], names = 'coln')

''' Initialized with whatever was in memory '''
r = np.empty(3, dtype=np.dtype([('name','|S5'),('foo', '<i4'), ('bar', 'float')]))	#<-- str type!
r = np.empty(3, dtype=np.dtype([('name','str_',5),('foo', 'int'), ('bar', 'float')]))
r = np.empty((3,), dtype=np.dtype([('name','|S5'),('foo', 'int'), ('bar', 'float')]))
''' 3x2 matrix filled with tuples/records '''
r = np.empty((3,2), dtype=np.dtype([('name','|S5'),('foo', 'int'), ('bar', 'float')]))

''' Filled with zeros '''
r1 = np.zeros(3, dtype=np.dtype([('foo', 'int'), ('bar', 'float')]))
r2 = np.zeros((3,), dtype=np.dtype([('foo', 'int'), ('bar', 'float')]))
all(r1==r2)

''' Filled with ones '''
r1 = np.ones(3, dtype=np.dtype([('foo', 'int'), ('bar', 'float')]))
r2 = np.ones((3,), dtype=np.dtype([('foo', 'int'), ('bar', 'float')]))
all(r1==r2)
''' 3x2 matrix filled with tuples/records '''
r = np.ones((3,2), dtype=np.dtype([('foo', 'int'), ('bar', 'float')]))

''' Filled with whatever '''
r = np.empty(3, dtype=np.dtype([('name','|S5'),('foo', 'int'), ('bar', 'float')]))
r.fill(('toto',1,1.0))

''' Filled with random '''
r = np.random.randint(9, size=(3, 3))
.....


''' With same dtype as '''
r1 = np.empty_like(r)
r1 = np.zeros_like(r)
r1 = np.ones_like(r)

#--- Non automated dtype with string 

''' With separate dtype definition '''
l_dt = [('age','int16'),('Nchildren','int8'),('weight','float32',(2,))]    # <-- Not a np.dtype list, but simple list
r_array = np.array([(64,2,(75.0,80.0)),(25,0,(60.0,31.5))], dtype=l_dt)    # <-- Notice the field 'weight' takes a tuple of size (2,)
# Note: List of tuples is ok, but list of list doesn't work!!
# r_array = np.array([[64,2,75.0],[25,0,60.0]], dtype=l_dt)  # <-- Doesn't work ! Must be tuples !!!

''' Note that the strings are troncated '''
dt_particles1 = np.dtype([('name','|S5'),('mass','float32'),('velocity','float32')])
r_particles1 = np.array([('electron',1,1),('proton',1,2),('neutrino',2,1),('quark',1,3)],dtype=dt_particle1)

dt_particles2 = np.dtype([('name','|S5'),('mass','float32'),('velocity','float32'),('calc','float32')])
''' Beware: tuple must match number of fields in dtype '''
r_particles2 = np.array([('electron',1,1,0),('proton',1,2,0),('netrino',2,1,0),('quark',1,3,0)],dtype=dt_particles2)

''' NESTED RECARRAYS '''
dt_nested_particles = np.dtype([('name','|S5'),('mass','float32'),('velocity','float32'),('calcs',[('mass^2','float32'),('energy','float32')])])
r_nested_particles = np.array([('electron',1.0, 2.0, (1,2)),('neutron',2.0,5.9,(3,4))], dtype=dt_nested_particles)
r_nested_particles['calcs']

#--- MORE CREATIVE WAYS
#core.records.array(obj[, dtype, shape, ...])   Construct a record array from a wide-variety of objects.

#Automated dtype (dtype omitted)
r = np.core.records.fromrecords([(456,'dbe',1.2)])
r = np.rec.fromrecords([(456,'dbe',1.2)])

#Init 10000 lines
''' [ (1,2),(3,4) ] * 2 = [ (1,2),(3,4),(1,2),(3,4) ] '''
r = np.core.records.fromrecords([(456,'dbe',1.2)]*10000)

''' From arrays (One column at a time) '''
x = np.array(['Smith','Johnson','McDonald'])
y = np.array(['F','F','M'], dtype='S1')
z = np.array([20,25,23])
data = np.rec.fromarrays([x,y,z], names='surname, gender, age')

nrows = 1000
r_nrows = np.rec.fromarrays( [ np.arange(nrows),], names = 'coln')
r_nrows2 = np.rec.fromarrays( [ range(nrows),], names = 'coln')
all(r_nrows == r_nrows2) == True

''' From a file '''
#core.records.fromfile(fd[, dtype, shape, ...])         Create an array from binary file data
r_nested_particles.tofile('nested_particles.dat')
data = np.fromfile('nested_particles.dat',dtype = r_nested_particles.dtype)
# Beware: You need to know dtype of stored data !!!

from tempfile import TemporaryFile
a = np.empty(10,dtype='f8,i4,a5')
a[5] = (0.5,10,'abcde')
fd = TemporaryFile()
a = a.newbyteorder('<')
a.tofile(fd)
fd.seek(0)
r = np.core.records.fromfile(fd, formats='f8,i4,a5', shape=10,byteorder='<')

''' From a string '''     
''' create a (read-only) record array from binary data contained in a string '''
r2 = np.core.records.fromstring(r1.tostring(), dtype=r1.dtype) 
r3 = np.core.records.fromstring('\x01\x02\x03\x04\x05',dtype=np.unint8i,count=3)
all( r3 == np.array([1,2,3],dtype=unint8) ) == True

#----------------------------------------------------------------------
# Populating (existing arrays)

r_input = np.array([(1, 10.), (2, 20.)], dtype=[('A', 'int'), ('B', 'float')])
r_output = np.empty((3,), dtype=r_input.dtype)
rfn.recursive_fill_fields(r_input, r_output)

''' change column '''
r = np.empty((3,), dtype=[('A', 'int'), ('B', 'float')]).view(np.recarray)
r.A = [11,12,13]


#----------------------------------------------------------------------
# Extraction
#
# In structured array, columns have names and rows have numbers
# r[1] is a row
# r['name'] is a column
#

''' Get a column '''
r_particles['mass']
r_particles['mass'] * 3
r_particles['mass'] = r_particles['mass'] * 3
r_particles['mass'] *= 2

''' Get a cell and operation on cell '''
r_particles['mass'][2]
r_particles['mass'][1]  = r_particles['mass'][2]
r_particles['calc'] = r_particles['mass'] * 2 + r_particles['velocity']

''' Get a row (a tuple) '''
r_particles[0]
t_row = r_particles[1]                          # <-- get tuple/row only !!!
r_row = r_particles[1:2]                        # <-- get sub rec array (1 row)

''' Get several rows '''
nrows = 1000
r_nrows = np.rec.fromarrays( [ np.arange(nrows),], names = 'coln')
r_sub = r_nrows[10:100]                        # <-- get sub rec array (2 rows)
r_sub = r_nrows.take(range(2,45,2))

''' Get rows matching a condition '''
l_dt = [('age','int16'),('Nchildren','int8'),('weight','float32',(2,))] 
r_array = np.array([(64,2,(75.0,80.0)),(25,0,(60.0,31.5)),(62,4,(70.0,81.0))], dtype=l_dt).view(np.recarray)
index = np.where(r_array.age>25)               # index = (array([0, 2]),)
r_array.take(index)				
# returns rec.array([[(64, 2, [75.0, 80.0]), (62, 4, [70.0, 81.0])]], dtype=[('age', '<i2'), ('Nchildren', '|i1'), ('weight', '<f4', (2,))])


#----------------------------------------------------------------------
# Columns operations

''' Number of columns ''' ?
ncol = r_particles.size
t_ncol = r_particles.shape		# <-- returns a *tuple* of array dimensions

''' Columns names '''
t_names = rfn.get_names(particles_dt)		
t_names = rfn.get_names_flat(particles_dt)
l_first_nested_names = dt_nested_particles.fields.keys()
''' Find column number '''
column = rfn.get_names(particles_dt).index('mass')

''' removing a column/field '''
drop_fields(r_nested_particles, [ 'mass^2','energy']))

''' Extracting '''
l_fields = r_particles['name']

''' Changing a column '''
r_nested_particles['mass'] = 0
r_nested_particles['mass'] = r_nested_particles['velocity']
r_nested_particlesi['calc']['energy'] = r_nested_particles['mass'] * c^2 

''' Adding a single column '''
''' Note: Because you change itemsize, you need to make a copy '''
data = np.rec.array([('Smith', 'F', 1), ('Johnson', 'F', 1), ('McDonald', 'M', 1)], 
      dtype=[('surname', '|S8'), ('gender', '|S1'), ('age', '<i8')])
data2 = rfn.append_fields(data, 'toto', [1,2,3], dtypes='int',usemask=False)
data3 = rfn.append_fields(data, 'toto', [1,2,3,4], dtypes='int',usemask=False)   # <--- add 1 column, 1 row

r_nested_particles = rfn.append_fields(r_nested_particles,'total', 2* r_nested_particles['velocity'],usemask=False)

r1 = np.zeros(3, dtype=np.dtype([('foo', 'int'), ('bar', 'float')]))
rfn.append_fields(r1,'f',range(r1.size),usemask=False,dtypes='float')
rfn.append_fields(r1,('f',),(range(r1.size),),usemask=False,dtypes='|S5')

''' Adding several column at once (no merge) '''
r1 = np.zeros(3, dtype=np.dtype([('foo', 'int'), ('bar', 'float')]))
r2 = rfn.append_fields(r1,('f1','f2'),(range(r1.size),range(r1.size)),usemask=False,dtypes='float')

l_dt2 = [('name','|S5')]
r2 = np.array([('pierre',),('robert',)],dtype=l_dt2)
r3 = rfn.append_fields(r1,r2.dtype.names, [r2[0][0]] * r1.size, dtypes='|S5')

''' Adding several column at once (merge) '''
l_dt1 = [('age','int16'),('Nchildren','int8')]
r1 = np.array([(64,2),(25,0)], dtype=l_dt)
l_dt2 = [('name','|S5')]
r2 = np.array([('pierre',),('robert',)],dtype=l_dt2)
r3 = rfn.merge_arrays((r2,r1), flatten=True,usemask=False)

''' statistics on column '''
_sum = r_nested_particles['velocity'].sum()
_average = r_nested_particles['velocity'].mean()
_stdev = r_nested_particles['velocity'].std() 
_variance = r_nested_particles['velocity'].var()        # <-- stdev^2 
_min = r_nested_particles['velocity'].min()
_index_min = r_nested_particles['velocity'].argmin()
_max = r_nested_particles['velocity'].max()
_index_max = r_nested_particles['velocity'].argmax()
_peakToPeak = r_nested_particles['velocity'].ptp()

''' mathematical operations '''
data['age'] = np.sin(data['age'])

''' copying a column '''
r_names = r_nested_particles['names'].copy()
l_names = r_nested_particles['names'].tolist()

''' view on column '''
r_names = r_nested_particles['names']

''' Reordering columns '''
rdn.shuffle(r_nested_particles)

''' Sorting columns '''

#----------------------------------------------------------------------
# Rows operations

#--- Row and columns
''' Number of rows (number of elements in array)'''
ncol = r_particles.size
t_ncol = r_particles.shape		# <-- returns a *tuple* of array dimensions

#--- Adding/Removing/Changing/Extracting a Row
''' extracting a row '''
row = 0
t_row = r_nested_particles[0]

''' changing row '''
row = 0
r_nested_particles[row]='toto'
r_nested_particles[row]=('elect', 1.0, 2.0, (1.0, 2.0))

''' adding a row '''
#r_nested_particles[1]=('elect', 1.0, 2.0, (1.0, 2.0))  # <-- Doesn't work
''' SLOW: convert to list and back to numpy recarray '''
r = np.core.records.fromrecords(r_particles.tolist()+[('neutrino',3,2,0)],dtype=r_particles.dtype)

''' appending rows '''
l_dt = [('age','int16'),('Nchildren','int8')]
r1 = np.array([(1,1),(2,2)], dtype=l_dt)
r2 = np.array([(3,3),(3,3)], dtype=l_dt)
r3 = np.concatenate((r1,r2),axis=0)

r1 = np.array([('A', 1), ('B', 2)], dtype=[('A', '|S3'), ('B', float)])
r2 = np.array([('a', 10., 100.), ('b', 20., 200.), ('c', 30., 300.)],dtype=[('A', '|S3'), ('B', float), ('C', float)])
m3 = rfn.stack_arrays((r1,r2))		# <-- masked array


''' sorting of rows '''
r_nested_particles.sort(order=('velocity','mass'))

''' make rows unique '''
r2 = np.unique(r1)

''' creating a view '''
r4 = r3[:]	       # <-- all rows are included
r4 = r3[1:3]	       # <-- row 1 is included, row 3+ are not included 
(r4.base is r3 ) == True

##########
''' deleting a row or rows '''
r4 = np.delete(r_nested_particles,[2,3])
r5 = r_nested_particles.take(range(1,30)+range(34,56))

''' compare rows '''
r = np.array([('toto', 64, 2), ('tata', 25, 0)], dtype=[('name', '|S5'), ('age', '<i2'), ('Nchildren', '|i1')])
r[0] == ('toto', 64, 2) # <-- False because compare pointer address, not content!

''' reordering of rows '''


''' copying a row '''
r_nested_particles2 = np.zeros(r_nested_particles.size,dtype=r_nested_particles.dtype)
r_nested_particles2['name'] = r_nested_particles['name']

''' inserting a row '''

''' statistics on row '''
average =
stdev = 

#----------------------------------------------------------------------
# entire array

''' Create a recarray from a structured array '''
''' Record arrays expose the fields of structured arrays as properties. '''
a = np.array([(1, 2.0), (1, 2.0)], dtype=[('x', int), ('y', float)])
ar = a.view(np.recarray)
all( ar.x == ar['x'] ) == True

''' independent copy '''
r_nested_particles2 = r_nested_particles.copy()
r_nested_particles2[0][0] ='toto'
all(r_nested_particles2 == r_nested_particles) == False
#r_nested_particles2 = rfn.rename_fields(r_nested_particles, {})

''' iterator per row '''
iter = r_nested_particles.flat  # <-- flat is different from flatten() !!!
iter.next()
iter.index			# <-- return index on iterated object
iter.base			# <-- iterated object

''' view (same data, <> dtype ) '''
dt = dtype({'names': ['gender','age'], 'formats': ['S1', 'i2']})	# <-- Using a dictionary
r = array([('M',25),('F',30)], dtype=r_dt)
b = a.view(recarray)						        # <-- change structured array into recarray
a['age'] # works with 'a' but not with 'b'
b.age # works with 'b' but not with 'a'

''' save in, load from file (Binary format) '''
#core.records.fromfile(fd[, dtype, shape, ...])         Create an array from binary file data
r_nested_particles.tofile('nested_particles.dat')
r_nested_particles = np.fromfile('nested_particles.dat')
data = np.fromfile('nested_particles.dat',dtype = r_nested_particles.dtype)
# Beware: You need to know dtype of stored data !!!

fd = file.open('nested_particles.dat')
fd.write.(r_nested_particles.tostring())
data2 = np.fromfile('nested_particles.dat', dtype = r_nested_particles.dtype)

''' save in, load from file (Text format) '''
r = np.ones(3,dtype=[('name', '|S5'), ('foo', '<i8'), ('bar', '<f8')])
r.tofile('toto.txt',sep='\n')
cnv =  {0: lambda s: s.lstrip("('").rstrip("'"), -1: lambda s: s.rstrip(')')}
r2 = np.loadtxt('toto.txt', delimiter=',', converters=cnv, dtype=r.dtype)
# r2 = np.fromfile('toto.txt',dtype = r.dtype)
# BEWARE: Restore doesn't work !!!

np.savetxt('toto.txt',r,fmt='%s,%d,%f')
r2 = np.loadtxt('toto.txt',dtype=r.dtype,delimiter=',')

fh = open('toto.txt','w')
fh.write(str(r.dtype)+'\n')
np.savetxt(fh,r,fmt='%s')
fh.close()

with open('toto.txt' as fh :
    dt = fh.readline().strip()
    r2 = np.loadtxt(fh).astype(dt)

from StringIO import StringIO
hereDoc = StringIO("M 21 72\nF 35 58")
r = np.loadtxt(hereDoc, dtype={'names': ('gender','age','weight'), 'formats': ('S1','i4','f4')})

''' Load from text file (using regex) '''
f = open('test.txt','w')
f.write("1321 foo\n1534 bar\n444 qnx")
f.close()
np.fromregex('test.txt',r"(\d+)\s(...)", [('num',np.int64), ('key','S3')])

''' Using a memorymap '''
from tempfile import mkdtemp
import os.path as path
filename = path.join(mktemp(),'newfile.dat')
fp = np.memmap(filename, dtype='float32',mode='w+',shape(3,4))
fp[:] = data[:]						# <-- write to memory map
dat2[:] = fp[:]						# <-- read from memory map
del fp 

#####

''' join '''
r = rfn.join_by()

''' iterator per column '''

#----------------------------------------------------------------------
# Special operation


#--- Display
''' Display without the dtype '''
print r_particles
''' Transform in list of tuples '''
l_particles = r_particles.tolist()

# Storage space required per item
nbytes = particles.itemsize

#--- Comparison

''' elementwise comparison '''
r_ones1 = np.ones(3, dtype=np.dtype([('foo', int), ('bar', float)]))
r_ones2 = np.ones((3,), dtype=np.dtype([('foo', int), ('bar', float)]))
r_compare = (r_ones1 == r_ones2 )

''' global comparison '''
if all(r_ones1 == r_ones2 ) : print "all elements are equal"

#----------------------------------------------------------------------
# DTYPE OPERATIONS
#
# A data type object describes how the bytes in the fixed-size block
# of memory corresponding to an array item should be interpreted.
#
#
# http://docs.scipy.org/doc/numpy/reference/arrays.dtypes.html
# 
# 'b' 		Boolean
# 'i' 		(signed) integer
# 'u' 		unsigned integer
# 'f' 		floating-point
# 'c' 		complex-floating point
# 'S', 'a' 	string
# 'U' 		unicode
# 'V' 		raw data (void)

dt = np.dtype('i4')   # 32-bit signed integer
dt = np.dtype('f8')   # 64-bit floating-point number
dt = np.dtype('c16')  # 128-bit complex floating-point number
dt = np.dtype('a25')  # 25-character string

dt = np.dtype((void, 10))  # 10-byte wide data block
dt = np.dtype((str, 35))   # 35-character string
dt = np.dtype(('U', 10))   # 10-character unicode string

dt = np.dtype((np.int32, (2,2)))          # 2 x 2 integer sub-array
dt = np.dtype(('S10', 1))                 # 10-character string
dt = np.dtype(('i4, (2,3)f8, f4', (2,3))) # 2 x 3 record sub-array

''' with column number '''
print r.dtype[0] 
#r.dtype[0] = 'float' 						# <-- Doesn't support assignment !


''' With same dtype as '''
r1 = np.empty_like(r)
r1 = np.zeros_like(r)
r1 = np.ones_like(r)

''' return dtype '''
dt_nested_particles = r_nested_particles.dtype
dt_flat_particles = rfn.flatten_desc(dt_nested_particles)

''' returned as a list (format change)'''
l_types = dt_nested_particles.descr

''' Columns names '''
dt_nested_particles = r.nested_particles.dtype
t_nested_names = rfn.get_names(dt_nested_particles)		# <-- All level names in leveled tuple
t_names = rfn.get_names_flat(dt_nested_particles)		# <-- All level names in 1-level tuple
l_first_nested_names = dt_nested_particles.fields.keys()	# <-- First level names

''' Column formats '''
l_formats = dt_nested_particles.fields.values()			# <-- Multilevel dtype formats
[(dtype('float32'), 9),
 (dtype([('mass^2', '<f4'), ('energy', '<f4')]), 13),
 (dtype('float32'), 5),
 (dtype('|S5'), 0)]

''' names,format to dtype '''
dt = np.dtype({'names': l_names,'formats': l_formats})


#--- renaming fields
''' renaming fields. Fields don't need to exist'''
''' NOTE": Returned array points to same data, but different dtype !!!! '''
r_nested_particles = rfn.rename_fields(r_nested_particles, {'mass':'Mass', 'toto':'tata'})

#--- combine dtype
dt_flat_combined = rfn.zip_desc( (r_nested_particles, r2),flatten=True)
dt_page_combined = rfn.zip_desc( (r_nested_particles, r2),flatten=False)

#--- Path to field
dt_super_nested =  np.dtype([('A', int), ('B', [('BA', int), ('BB', [('BBA', int), ('BBB', int)])])])
d_field_path = rfn.get_fieldstructure(dt_super_nested)


#----------------------------------------------------------------------
# Arithmetic operations
#

b = np.arange( 4 )
b**2
r = b.view(p.recarray)

r = np.sqrt(b.view(np.recarray))		# <-- not the math.sqrt which would fail on this array!
r = r**2					# <-- ** operation are operator overload

#----------------------------------------------------------------------
# OTHER MISC

2'' vectorize a function '''
def myfunc(a, b):
    """Return a-b if a>b, otherwise return a+b"""
    if a > b: 
        return a - b
    else:
        return a + b 

vfunc = np.vectorize(myfunc)
( vfunc([1,2,3,4],2) == array([3,4,1,2]) ) == True
