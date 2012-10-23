#!/usr/bin/env python

import json

print json.dumps([1,2,3])
print json.dumps({"one":1, "two":2})
print json.dumps({"one":1, "two": 'the main said"cool!"'})                  # <-- automatic escaping of quotes

