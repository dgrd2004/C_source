#include<stdio.h>
#include<string.h>

int main ( void ) {
  char a[16], b[16], c[16];
  char * pArray[3];
  int i;

  strcpy ( a, "1st string..." );
  strcpy ( b, "2nd string..." );
  strcpy ( c, "3rd string..." );
  pArray[0] = a;
  pArray[1] = b;
  pArray[2] = c;
  puts( "The address of the strings a, b, c are respectively:\n" );
  for ( i = 0; i < 3; i++ )
    printf ( "%p\n", pArray[i] );
  return 0;
}
