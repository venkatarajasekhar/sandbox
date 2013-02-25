#!/usr/bin/sudo /bin/sh

# http://www.linux.org/article/view/mount-your-box-net-box-com-account-in-linux
# http://linuxfordummies.org/mount-your-box-com-account-in-linux/

if [ ! -d /box ]; then
    yum install -y davfs2
    cat >>/etc/fstab <<EOT
https://www.box.com/dav /box davfs rw,user,noauto 0 0
EOT

    # ~/.davfs2/secrets
    cat >>/etc/davfs2/secrets <<EOT
https://www.box.com/dav emayssat@gmail.com 123QWEasd
EOT

    cat >>/etc/davfs2/davfs2.conf <<EOT
use_locks 0
EOT
    mkdir /box
    mount /box
fi

