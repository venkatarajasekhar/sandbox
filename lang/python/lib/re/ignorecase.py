#!/usr/bin/env python

import re

s = "Test <tESTi class='toto'> BAR </tEsT>"
print re.sub(r'(?i)test', '##', s )

casesensitive = re.compile('test')
print casesensitive.match(s)

ignorecase = re.compile('test', re.IGNORECASE)
print ignorecase.match(s)
