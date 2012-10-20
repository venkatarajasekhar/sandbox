#!/usr/bin/env python

import hashlib

x = hashlib.md5("foo!")                         # <-- md5 of "foo!"
print x                                         # <md5 HASH object >
print x.hexdigest()                             # printable version of the md5        
print hashlib.md5("hello hello").hexdigest()
print hashlib.md5("hello hellO").hexdigest()    # Significantly different from above
print hashlib.md5("hello hello").hexdigest()    # Same as 2 lines above
