#!/usr/bin/env python 





import os
import shutil
import numpy as np
import zipfile as z

dir = 'mydir'
if os.path.exists(dir):
    shutil.rmtree('mydir')
os.makedirs(dir)

with open(dir+'/tmp1.txt','w') as f :
    print >>f, "hello1"


with open(dir+'/tmp2.txt','w') as f :
    print >>f, "hello2"


r = np.ones((3,),dtype=[('name','str_',5),('age','int'),('height','float')])
with open(dir + '/tmp3.txt','w') as fh :
    print >>fh, r.dtype
    np.savetxt(fh,r,fmt='%s')

with z.ZipFile(dir + '.zip','w') as fh:
    fh.write(dir + '/tmp1.txt')
    fh.write(dir + '/tmp2.txt')
    fh.write(dir + '/tmp3.txt')

z2 = z.ZipFile(dir + '.zip','r')
l_info = z2.infolist()
for info in l_info :
    print info.filename

z2.extractall()

fn = dir + '/tmp3.txt'
fh = open(fn,'r')
dt = fh.readline().strip()
print dt

#r2  = np.loadtxt(fn,skiprows=1).astype(dt)
r2  = np.loadtxt(fn,skiprows=1)
r2  = np.loadtxt(fh,skiprows=0,dtype=eval(dt))
fh.close()

print r2

