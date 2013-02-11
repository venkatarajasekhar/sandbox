import tarfile

with tarfile.open("sample.tgz","w:gz") as tar :
    tar.add('tmp/mydir')

