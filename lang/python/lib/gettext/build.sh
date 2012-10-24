#!/bin/sh -x 


rm -rf locale
python gettext_example.py                                                   # <-- no translation

# -d default domain
# -o output file
# <arg> file to process
xgettext -d gettext_example -o gettext_example.pot gettext_example.py

export LC_DIR=locale/en_US/LC_MESSAGES
mkdir --parent ${LC_DIR}

sed -e 's/CHARSET/UTF-8/' -e 's/^msgstr ""$/msgstr "This is in the en_US catalog"/' gettext_example.pot > ${LC_DIR}/gettext_example.po

cd ${LC_DIR}; msgfmt -o gettext_example.mo gettext_example.po


python ../../../gettext_example.py                                          # <-- without translation (cannot find locale in local dir)

cd ../../.. ; python gettext_example.py                                     # <-- with translation from ./locale
