output: main.o list.o
	gcc main.o list.o -o output

main.o: main.c list.h
	gcc -c main.c

list.o: list.c list.h
	gcc -c list.c

clear:
	rm -f *.o
