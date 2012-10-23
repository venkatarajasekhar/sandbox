#!/usr/bin/env python

import gettext

t = gettext.translation('gettext_example', 'locale', fallback=True)
_ = t.ugettext                                                          # <-- Using unicode version of the lookup function

print _('This message is in the script.')
