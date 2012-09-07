Git Help 
========

Every command related to git start with ‘git’
To access the help for a specific command (here commit)

    git help commit				# Access help for git command ‘commit’
    git commit --help			# Access help for git command ‘commit’

Configure GIT
-------------

To Configure your locla git repositoryi, there are 2 configuration files:
    * The GIT global config file is ~/.gitconfig
    * The repository specific configuration file is repo/.git/config

To Setup user name and email (required), password caching (optional), and command aliases (optional)

    git config --global user.name "FirstName.LastName"
    git config --global user.email "me@domain.com"
    git config --global credential.helper cache
    git config --global alias.st status                     # git st = git status
    git config --global alias.co checkout                   # git co = git checkout
    git config --global alias.rename mv                     # git rename = git mv
    git config --global alias.delete rm                     # git delete = git rm
    git config -l				                            # show ~/.gitconfig and repo/.git/config contents

ITERACT WITH A REMOTE GIT REPOSITORY
-------------------------------------   
To create a local copy of a GIT repository (with history, etc)
To clone Henry’s intial directory (For the password, ask Henry!)

    git clone ssh://git@github.com:emayssat/sandbox.git
    git clone https://github.com/emayssat/sandbox.git
    git clone ssh://git@ccafe.no-ip.info/bigmap.git motu    # Local top dir is ‘motu’
    git clone motu motu2        		                    # create a new repo (motu2) based on another local repo
    git config -l            		                        # Show where the remote is and which branch
    git ls-remote				                            # Show info about remote (all references/branches, etc)

A directory named “bigmap” should have appeared in your local dir   

    cd motu
    touch YYY				                                # Create an empty file YYY
    git add YYY				                                # Tell GIT to monitor this file
    vi YYY					                                # edit/modify the file
    git commit -m "Add: YYY: file creation"                 # commit file to local repo
    git show				                                # show details of most recent commit

Push to the remote, shared, authoritative  repository
If you do not push to master repository, others cannot see

    git pull                    		                    # Update local repo with remote’s content and refs
    git push origin master            	                    # origin is parent repo
    git fetch                		                        # Update local *refs* with remote’s *refs*

basic operations
------------------

    git mv YYY XXX            		                        # rename the monitored file YYY to XXX
    git rm XXX                		                        # delete the file
    git commit -m “removed XXX”    		                    # commit changes
    git log					                                # view past commits
    git show as7d65a7s5dasdasd7a		                    # show detail of a specific commit

Create a new repository from scratch on the command line

    mkdir sandbox
    cd sandbox
    touch README.md

Initialize empty Git repository in sandbox/.git/

    git init
    git add README.md
    git commit -m "first commit"
    git remote add origin https://github.com/emayssat/sandbox.git
    git push -u origin master

Push an existing GIT repository from the command line
An existing GIT repository has a .../.git directory 

    git remote add origin https://github.com/emayssat/sandbox.git
    git push -u origin master

