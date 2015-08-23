#include<stdio.h>
#include"my_library_2.h"

int lib_2_extvar_1 = 66;
char lib_2_extvar_2 = 'x';
char * lib_2_extvar_3 = NULL;

int lib_2_funct_1 ( void ) {
	printf ( "this is the 'lib_2_funct_1' function from 'my_library_2.h'\n" );
	return 0;
};

int lib_2_funct_2 ( void ) {
	printf ( "this is the 'lib_2_funct_1' function from 'my_library_2.h'\n" );
	return 0;
};
