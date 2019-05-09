UNITY_ROOT=../..

output: TestList.o unity.o list.o 
	gcc TestList.o unity.o list.o -o output

TestList.o: test/TestList.c src/list.h
	gcc -g -c -Itest -I. test/TestList.c

list.o: src/list.c src/list.h
	gcc -g -c -Isrc -I. src/list.c

unity.o: 
	gcc -g -c -I. $(UNITY_ROOT)/src/unity.c

clear:
	rm -f *.o
