#!/bin/sh


curl -L "http://c758482.r82.cf2.rackcdn.com/Sublime%20Text%202.0.1%20x64.tar.bz2" -o "/usr/local/src/SublimeText.2.0.1.tar.bz2"
cd /usr/local/src
tar -xvjf SublimeText.2.0.1.tar.bz2

cd "Sublime Text 2"
rm -rf /usr/local/sublime-text-2
mkdir -pv /usr/local/sublime-text-2
mv -fv * /usr/local/sublime-text-2/

cat > /usr/local/bin/subl <<EOT
#!/bin/sh
if [ "\${1}" == "--help" ]; then
    /usr/local/sublime-text-2/sublime_text --help
else
    /usr/local/sublime-text-2/sublime_text \$@ > /dev/null 2>&1 &
fi
EOT

chmod +x "/usr/local/bin/subl"

cat > /usr/share/applications/sublime-text-2.desktop <<EOT
[Desktop Entry]
Name=Sublime Text 2
Comment=Edit text files
Exec=/usr/local/sublime-text-2/sublime_text
Icon=/usr/local/sublime-text-2/Icon/128x128/sublime_text.png
Terminal=false
Type=Application
Encoding=UTF-8
Categories=Utility;TextEditor;
EOT
 
echo "Finish!"
