CC = gcc
INCLUDES = -I/usr/include -I../include
LIBS = -lmy
LDFLAGS = -L../lib -L/usr/lib64 -L/usr/lib -L.

#NOTE THAT LIBS WILL FIND libmy.a !

all: libmy main

libmy: libmy.a libmy.so

mylib.objects:
	$(CC) -fPIC -c func1.c func2.c 

libmy.so: mylib.objects
	#$(CC) -shared libso.so libso1.o libso2.o 
	#$(CC) -shared -Wl,-soname,libmy.so.1 -o libmy.so.1.0.1 func1.o func2.o 
	$(CC) -shared -o libmy.so func1.o func2.o 

libmy.a: mylib.objects
	ar rc $@ func1.o func2.o

main: main_static main_dynamic
	echo "Tata"

#main_object: 
#	$(CC) -o main_object main.o func1.o func2.o

main_dynamic:
	$(CC) $(LDFLAGS) $(INCLUDES) main.c -o main_dynamic $(LIBS)
	echo "Toto"

main_static:
	$(CC)  $(LDFLAGS) $(INCLUDES) -static main.c -o main_static $(LIBS)


clean:
	rm -f main_* *.o *.a *.so
