all: clean install

clean:
	rm -f ~/.mailcap
	rm -f ~/.mime.types
	rm -f ~/.muttrc
	rm -f ~/.mutt

install:
	ln -s `pwd` ~/.mutt 
	ln -s ~/.mutt/muttrc ~/.muttrc
	ln -s ~/.mutt/mime.types ~/.mime.types
	ln -s ~/.mutt/mailcap ~/.mailcap
