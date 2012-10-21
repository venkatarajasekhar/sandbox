#!/usr/bin/env python

import hashlib

x = hashlib.md5("hello")                        # <-- md5 of "hello"
print x                                         # <md5 HASH object >
print x.hexdigest()                             # printable version of the md5        
print hashlib.md5("hellO").hexdigest()          # Significantly different from above
print hashlib.md5("hello").hexdigest()          # Same as 2 lines above

secret = "keep this secret!"                    # Keep this string secret so that even if hackers knows md5 is used,
print hashlib.md5(secret + "hello").hexdigest() # they cannot reverse engineer the algo


import hmac
hmac.new(secret, "hello").hexdigest()           # <-- better because not simple addition in md5 string


