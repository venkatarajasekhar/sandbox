#!/usr/bin/env python

import json

print json.dumps([1,2,3])
print json.dumps({"one":1, "two":2})
print json.dumps({"one":1, "two": 'the main said"cool!"'})                  # <-- automatic escaping of quotes
print json.dumps({"blah": ["one", 2, 'th"r"ee']})                           # <-- automatic escaping of quotes
