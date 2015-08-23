#include<stdio.h>
#include<unistd.h>
#include"program.h"
#include"my_library_1.h"
#include"my_library_2.h"

char option = NULL;

int main ( int argc, char * argv[] ) {
	while ( ( option = getopt ( argc, argv, "a:b:c" ) ) != EOF )
		switch ( option ) {
			case 'a':
				aflag = 1;
				aargum = optarg;
				break;
			case 'b':
				bflag = 1;
				bargum = optarg;
				break;
			case 'c':
				cflag = 1;
				break;
			default:
				printf ( "Unknown option %c was given... program will be closed...\n", option );
				return 1;
		};
	argc -= optind;
	argv += optind;
//SOME VERIFICATION GOES HERE...
	if ( argc != 2 ) {
		printf ( "you have to give two arguments to this function: < char > < integer >\nTHE PROGRAM WILL BE CLOSED...\n...\n" );
		return 1;
	};
//HERE THE PROGRAM USE SOME FUNCTIONS FROM THE "program.h" LIBRARY...
	prog_f1 ( );
	prog_f2 ( );
//HERE THE PROGRAM USE SOME FUNCTIONS FROM THE "my_library_1.h" LIBRARY...
	lib_1_funct_1 ( );
	lib_1_funct_2 ( );
	printf ( "the value of the external variable 'lib_1_extvar_1' is: %i\n", lib_1_extvar_1 );
	printf ( "the value of the external variable 'lib_1_extvar_2' is: %c\n", lib_1_extvar_2 );
	printf ( "the external variables has values:\n\tlib_1_extvar_1: %i\n\tlib_1_extvar_2: %c\n", lib_1_extvar_1, lib_1_extvar_2 );
//HERE THE PROGRAM USE SOME FUNCTIONS FROM THE "my_library_2.h" LIBRARY...
	lib_2_funct_1 ( );
	lib_2_funct_2 ( );
	printf ( "the value of the external variable 'lib_2_extvar_1' is: %i\n", lib_2_extvar_1 );
        printf ( "the value of the external variable 'lib_2_extvar_2' is: %c\n", lib_2_extvar_2 );
        printf ( "the external variables has values:\n\tlib_2_extvar_1: %i\n\tlib_1_extvar_2: %c\n", lib_2_extvar_1, lib_2_extvar_2 );
	return 0; 
}
