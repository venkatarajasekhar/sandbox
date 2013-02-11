#!/usr/bin/env python 


import subprocess
import time

print 'One line at a time:'
proc = subprocess.Popen('repeater.py', 
                        shell=True,
                        stdin=subprocess.PIPE,
                        stdout=subprocess.PIPE,
                        stderr=subprocess.PIPE
                        )
for i in range(10):
    proc.stdin.write('%d\n' % i)
    output = proc.stdout.readline()		#<-- read one line only!
    #output = proc.stdout.readlines()		#<-- doesn't work!
    time.sleep(1)
    print "-"
    print output.rstrip()
(output, error) = proc.communicate()
print error

print
print 'All output at once:'
proc = subprocess.Popen('repeater.py', 
                        shell=True,
                        stdin=subprocess.PIPE,
                        stdout=subprocess.PIPE,
                        stderr=subprocess.PIPE
                        )
for i in range(10):
    proc.stdin.write('%d\n' % i)
    time.sleep(1)

output,error = proc.communicate()
#output = proc.communicate()[0]			#<-- get stdout only
#error = proc.communicate()[1]			#<-- get stderr only
print output
print error
