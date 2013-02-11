import re

entry = '1.2'
entry = '-1r2'
entry = '-1.2'
entry = '-104.203'
entry = 'true'

if re.match('([Tt]rue|[Ff]alse)', entry): print 'yes'
else: print 'No'
if re.match('(a|b)', entry): print 'Yes'
else: print 'No'

if re.match('^[+-]*[0-9]+\.[0-9]+$', entry): print 'Yes'
else: print 'No'

if re.match('1.2', entry): print 'Yes'
else: print 'No'
