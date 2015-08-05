/*******************************************************************
****		*WORKS OK EXELENT FOR LEARNING..		****
*******************************************************************/

#include <stdio.h>

char * get_line( FILE * stream ) {
	static char line[64]; //Only a static variable can be a return value...
	if ( fscanf( stream, "%63[^\n]\n", line ) == 1 )
		return line;
}

int main ( void ) {
	FILE * old_data = fopen( "database.csv", "r" );
	FILE * new_data = fopen( "new_database.csv", "w" );
	char data_line[64];

	fprintf( new_data, "This is the first line extracted from the data stream:\n%s\n", get_line( old_data ) );
	fprintf( new_data, "This is the second line extracted from the data stream:\n%s\n... ... ...", get_line( old_data ) );
	return 0;
}

/*******		MAYBE USEFUL FOR UNDERSTAND		********

#include <stdio.h>

/ function to generate and return random numbers /

int * getRandom( )
{
  static int  r[10];
  int i;

  / set the seed /
  srand( (unsigned)time( NULL ) );
  for ( i = 0; i < 10; ++i)
  {
     r[i] = rand();
     printf( "r[%d] = %d\n", i, r[i]);

  }

  return r;
}

/ main function to call above defined function /
int main ()
{
   / a pointer to an int /
   int *p;
   int i;

   p = getRandom();
   for ( i = 0; i < 10; i++ )
   {
       printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}

***********************************************************************/
