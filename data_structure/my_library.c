#include <stdio.h>
#include "my_library.h"

char * get_line( FILE * stream ) {
        static char line[64]; //Only a static variable can be a return value...
        if ( fscanf( stream, "%63[^\n]\n", line ) == 1 )
                return line;
}

int * get_comma_positions( char * string ) {

        static int commas[32];//        *ONLY STATIC VALUES CAN GO OUTSIDE THE FUNCTION
        int a = 0;
        int b = 0;

        for ( a = 0; a < 64; a++ ) {//  *FOR CYCLE...TAKE ELEMENT BY ELEMENT OF THE CHAR ARRAY...
                if (  string[a] == ',' ) {//    *IF THE A-TH ELEMENT IS A COMMA THEN...
                                commas[b] = a;//        *SAVE THE POSITION OF THE COMMA ON THE STRING[] IN THE COMMA[]...
                                b++;//  *INCREMENT B TO THE NEXT SAVING POSITION OF THE COMMA[]...
                                printf( "comma found at position: %i\n", a );// *PRINT THE POSITION OF THE COMMA FOUND...
                }
        }
        return commas;//        *RETURNS THE ADDRESS OF THE COMMA[]...
}

