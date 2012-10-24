#!/usr/bin/env python

import json

j = '{"one":1, "numbers": [1,2,3,5] }'

json.loads(j)                                           # <-- load string
py_dict = json.loads(j)
print py_dict['numbers']
print py_dict.get('numberX')

py_dict2 = eval(j)                                      # <-- Works, but never uses, because may execute more than what you think!
print py_dict2['numbers']

