#include<stdio.h>

int main ( int argc, char * argv[] ) {

  int i;

  puts ( "This function, reads three words arguments(strings) and then it prints it back..." );
  if ( argc != 4 )
    puts ( "You need to type something like:'./function_param string1 string2 string3 ' this will run the command line tool..." );
  else {
    for ( i = 1; i <= 3; i++ )
      printf ( "The #%i argument you type is: %s\n", i, argv[i] );
  }
  return 0;
}
