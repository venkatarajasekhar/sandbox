import h5py
import numpy as np
import os
import time


rowNames = [ 'Time', 'TEST:AI', 'TEST:1:AI']
#for pvName in sys.stdin:
#    rowNames.append(pvName)

dirName = "./"
fileName =  "%s.h5" % time.strftime("%Y%m%d")

cannonicalName = os.path.join(dirName, fileName)

createFile = True
if os.path.isfile(cannonicalName):
    createFile = False

h5top = h5py.File(cannonicalName, 'w')
print h5top.file

nrows = len(rowNames)
dt = [ ('rowName', (str,10)),]
if createFile:
    dataset = h5top.create_dataset('MyDataset', (1,nrows), dt, chunks=True, compression='gzip', compression_opts=4,maxshape=(None,nrows))
    #dataset[1] = rowNames
else:
    dataset = h5top['/MyDataset']

#pvNames = dataset[1]

#dt = [('rowName',(str,40)),('value','float')]


#dataset = h5top.create_dataset('MyDataset', (2,nrows), dt, chunks=True, compression='gzip', compression_opts=4,maxshape=(None,nrows))

h5top['HardLink'] = dataset 

print dataset.name
print dataset.shape
print dataset.maxshape

#--- Softlink
cls = group.get('foo', getclass=True)
if cls == SoftLink:
    print '"foo" is a soft link!'

#--- external files
myfile = h5py.File('foo.hdf5','w')
myfile['ext link'] = h5py.ExternalLink("otherfile.hdf5", "/path/to/resource")
#When the link is accessed, the file otherfile.hdf5 is opened, and object at /path/to/resource is returned.


#----------------------------------------------------------------------
#
subgroup = h5top.create_group("SubGroup")
print subgroup.name

h5top.copy(subgroup.name, 'toto')			# cp equivalent

print list(h5top)					# ls equivalent
print h5top.listnames()





dataset2 = subgroup.create_dataset('MyOtherDataset', (nrows,1), dt, chunks=True, compression='gzip', compression_opts=4,maxshape=(None,nrows))

dset2 = subgroup['MyOtherDataset']
dset3 = h5top['/SubGroup/MyOtherDataset']

if dset2 == dset3 :
    print "hurray!"


cls = group.get('foo', getclass=True)
if cls == SoftLink:
   print '"foo" is a soft link!'

# NUMPY <--> H5Py
f = h5py.File("myfile.hdf5", 'w') 
f["MyDataset"] = numpy.ones((100,20))
    <-- dset = f.create_dataset("MyDataset", (100, 100), 'i') ?
    <-- arr = np.ones((2,3), '=i4') ; dset = f.create_dataset('AnotherDataset', data=arr)
dset = f["MyDataset"] 
subset = dset[20:80,:]

h5top.close()



