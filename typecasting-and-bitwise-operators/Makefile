all: quadratic.exe smartlight.exe

quadratic.exe: main.o quadraticroots.o
	gcc -o quadratic.exe main.o quadraticroots.o -lm

main.o: main.c quadraticroots.h
	gcc -c main.c

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c

smartlight.exe: smartlight.o
	gcc -o smartlight.exe smartlight.o

smartlight.o: smartlight.c
	gcc -c smartlight.c

clean:
	del *.o *.exe