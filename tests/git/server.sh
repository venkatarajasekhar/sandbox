GIT CLIENT
-----------
Generate a rsa key
ssh-keygen -t rsa



GIT SERVER
-----------

sudo apt-get update
sudo apt-get install git-core
sudo adduser git

su - git
mkdir myrepo.git
cd !$
git --bare init

