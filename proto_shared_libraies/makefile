build: main.o program.o my_library_1.o my_library_2.o
	gcc main.o program.o my_library_1.o my_library_2.o -o program
main.o: main.c program.h my_library_1.h my_library_2.h
	gcc -c main.c
program.o: program.c program.h
	gcc -c program.c
my_library_1.o: my_library_1.c my_library_1.h
	gcc -c my_library_1.c
my_library_2.o: my_library_2.c my_library_2.h
	gcc -c my_library_2.c
