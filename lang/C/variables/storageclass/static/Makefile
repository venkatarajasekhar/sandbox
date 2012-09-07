all: clean static extern

extern:
	$(CC) extern.c extern2.c -o extern

#No impact
extern2:
	$(CC) extern2.c extern.c -o extern

extern3: extern.o extern2.o
	$(CC) extern.o extern2.o -o extern

clean:
	rm -f extern static 
