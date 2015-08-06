main.o: main.c my_library.c my_library.h
	gcc -c main.c
my_library.o: my_library.c my_library.h
	gcc -c my_library.c
analisys: main.o my_library.o
	gcc main.o my_library.o -o analisys
