all: help.exe strlength.exe strconcat.exe strcompare.exe

help.exe: help.c
	gcc -o help.exe help.c

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c

strlength.exe: strlength.c mystrings.o
	gcc -o strlength.exe strlength.c mystrings.o

strconcat.exe: strconcat.c mystrings.o
	gcc -o strconcat.exe strconcat.c mystrings.o

strcompare.exe: strcompare.c mystrings.o
	gcc -o strcompare.exe strcompare.c mystrings.o

clean:
	del -f *.o *.exe
