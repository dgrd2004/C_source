#include <stdio.h>
#include <string.h>
#include "my_library.h"

int main ( void ) {
  FILE * incoming_stream = fopen ( "test_file.csv", "r" );
  FILE * outgoing_stream = fopen ( "dump.csv", "w" );
  FILE * log_stream = fopen ( "log.txt", "w" );
  int i = 0;
  char * pline;
  int * pcomma;

  do {
    if ( i = 0 )
      fprintf ( log_stream, "log file starts here...\n" );
    else {
      pline = get_line ( incoming_stream );
      fprintf ( stderr, "address of variable 'pline' is %p, stored address value is %p\n", &pline, *pline );
      pcomma = get_comma_positions ( pline );
      fprintf ( stderr, "address of variable 'pcomma' is %p, stored address value is %p\n", &pcomma, *pcomma );
      i++;
    }
  } while ( *pline != '\n' );
  fclose ( incoming_stream );
  fclose ( outgoing_stream );
  fclose ( log_stream );
  return 0;
}


/*
  while ( fprintf( outgoing_stream, "This is the line #%i, processed:\n%s\n", i, get_line ( incoming_stream ) ) == 1 ) {
    i++;
    fprintf ( log_stream, "{ " );
    for ( j = 0; j < 32; j++ ) {
      if ( *(pcommas + j) != 0 ) {
        if ( j == 0 )
          fprintf ( log_stream, "%i", *(pcommas + j) );
        else
          fprintf ( log_stream, ", %i", *(pcommas + j) );
      }
      else
        j = 32;
    }
    fprintf ( log_stream, " }\n" );
  }
  fprintf ( log_stream, "It was possible to read %i, lines from the file...\n", i );
  fprintf ( outgoing_stream, "End of analisys from data_structure command-line tool...\n\n" );
  return 0;
}
*/
