#include<stdio.h>
#include"my_library_1.h"

int lib_1_extvar_1 = 6;
char lib_1_extvar_2 = 's';
char * lib_1_extvar_3 = NULL;

int lib_1_funct_1 ( void ) {
	printf ( "this is the 'lib_1_funct_1' function from 'my_library_1.h'...\n" );
	return 0;
};
int lib_1_funct_2 ( void ) {
	printf ( "this is the 'lib_1_funct_2' function from 'my_library_1.h'...\n" );
	return 0;
};
