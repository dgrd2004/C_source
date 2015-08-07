#include <stdio.h>

int main ( void ) {
//DECLARATION AND DEFINITION
	char string[] = "This is a char array...1 2 3...";//ARRAY OF CHAR... ALSO KNOW AS STRING...
	int integer[] = {1, 10, 2, 3, 4, 5, 6, 6, 6, 11, 12, 13, 14, 14, 14, 14, 15, 0 };//ARRAY OF INTS
	char list[][64] = { "fist element", "second element", "third element", "...", "\0" };//ARRAY OF... ARRAYS OF A CONST CHAR... THIS CASE A 5X64 MATRIX OF CONST CHAR IS DECLARED... ALMOST EMPTY...
	char *plist[][64] = { "fist element", "second element", "third element", "...", "\0" };//ARRAY OF... ARRAYS OF POINTER TO A CONST CHAR... THIS CASE ALSO A 5X64 MATRIX OF POINTERS TO A CHAR IS DECLARED AND DEFINED
	char page[][1] = { 'c', 'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', 's', ' ', 'o', 'r', 'd', 'e', 'n', 'e', 'd', '\n', '\0',
			   't', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a', ' ', 'n', 'e', 'w', ' ', 'l', 'i', 'n', 'e', '\n', '\0' };//COLUMN 20X1 VECTOR OF CHARS
	int matrix[][3] = { { 3, 2, 1 }, { 6, 5, 4 }, { 9, 8, 7 } };//MATRIX OF INTS
//JUST DECLARATIONS
	int *pmatrix[3][3];//3X3 MATRIX OF POINTERS TO INTS
	char *pchar;//POINTER TO A CHAR
	int *pint;//POINTER TO AN INT

	int i = 0;
	int j = 0;

//	USING THE CHAR ARRAY 'string'...
	fprintf ( stdout, "the address of 'constring' using it's own variable is: %p value is: %s\n\n", string, string );
        while ( string[i] != '\0' ) {
                fprintf ( stdout, "the char address of 'string[%i]' using it's own variable is: %p value is: %c\tcalculation #%i\n", i, &string[i], string[i], j );
                i++;
                j++;
        }
        i = 0;
//      USING POINTED VALUES TO THE CHAR ARRAY 'string' WITH 'pchar' POINTER...
        pchar = string;
        fprintf ( stdout, "const char address of 'string' using pchar pointed to it, is: %p value is: %s\n\n", pchar, pchar );
        while ( *(pchar + i) != '\0' ) {
                fprintf ( stdout, "const char address of 'string[%i]' using pchar pointed to 'pchar + %i' is: %p value is: %c\tcalculation #%i\n", i, i, pchar + i, *(pchar + i), j );
                i++;
                j++;
        }
        i = 0;
//	USING THE INT ARRAY 'integer'...
	fprintf ( stdout, "the addres of 'integer' using it's own variable is: %p value is: %i\n\n", integer, integer[i] );
	while ( integer[i] != 0 ) {
		fprintf ( stdout, "the address of 'integer[%i]' using it's own variable is: %p value is: %i\tcalculation #%i\n", i, &integer[i], integer[i], j );
		i++;
		j++;
	}
	i = 0;
//      USING POINTED VALUES TO THE INT ARRAY 'integer' WITH THE 'pint' POINTER...
	pint = integer;
        fprintf ( stdout, "the addres of 'integer' using pint pointed to it, is: %p value is: %i\n\n", pint, *(pint + i) );
        while ( *(pint + i) != 0 ) {
                fprintf ( stdout, "the address of 'integer[%i]' using pint pinted to 'pint + %i' is: %p value is: %i\tcalculation #%i\n", i, i, pint + 1, *(pint + i), j );
                i++;
                j++;
        }
        i = 0;
//	USING POINTER TO A CHAR 'list'  ARRAY OF ARRAYS...
	fprintf ( stdout, "the address of 'list' using it's own variable is: %p value is: %s\n", list, list );
	return 0;
}
