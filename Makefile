test.exe : main.c Queue.h Queue.o
	gcc -std=c99 -o test.exe main.c Queue.o

Queue.o : Queue.c Queue.h
	gcc -c -std=c99 Queue.c