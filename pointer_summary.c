#include <stdio.h>

int main ( void ) {
	const char constring[] = "This is a cosntant char array... 1 2 3...";
	char string[] = "This is a char array...1 2 3...";
	const int constint[] = {1, 10, 2, 3, 4, 5, 15, 6, 6, 6, 0 };
	int integer[] = {11, 12, 13, 14, 14, 14, 14 };
	char *pchar;
	int *pint;

	int i = 0;
	int j = 0;
//	USING THE CONSTANT CHAR ARRAY 'constring'...
	fprintf ( stdout, "const char address of 'constring' using it's own variable is: %p value is: %s\n\n", constring, constring );
	while ( constring[i] != '\0' ) {
		fprintf ( stdout, "const char address of 'constring[%i]' using it's own variable is: %p value is: %c\tcalculation #%i\n", i, &constring[i], constring[i], j );
		i++;
		j++;
	}
	i = 0;
//	USING POINTED VALUES TO THE CONSTANT CHAR ARRAY WITH 'pchar' POINTER...
	pchar = constring;
	fprintf ( stdout, "const char address of 'constring' using pchar pointed to it, is: %p value is: %s\n\n", pchar, pchar );
        while ( *(pchar + i) != '\0' ) {
                fprintf ( stdout, "const char address of 'constring[%i]' using pchar pointed to 'pchar + %i' is: %p value is: %c\tcalculation #%i\n", i, i, pchar + i, *(pchar + i), j );
		i++;
		j++;
        }
        i = 0;
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
//	USING THE CONSTANT INT ARRAY 'constint'...
	fprintf ( stdout, "the addres of 'constint' using it's own variable is: %p value is: %i\n\n", constint, constint[i] );
	while ( constint[i] != 0 ) {
		fprintf ( stdout, "the address of 'constint[%i]' using it's own variable is: %p value is: %i\tcalculation #%i\n", i, &constint[i], constint[i], j );
		i++;
		j++;
	}
	i = 0;
//      USING POINTED VALUES TO THE CONSTANT INT ARRAY 'constint' WITH THE 'pint' POINTER...
	pint = constint;
        fprintf ( stdout, "the addres of 'constint' using pint pointed to it, is: %p value is: %i\n\n", pint, *(pint + i) );
        while ( *(pint + i) != 0 ) {
                fprintf ( stdout, "the address of 'constint[%i]' using pint pinted to 'pint + %i' is: %p value is: %i\tcalculation #%i\n", i, i, pint + 1, *(pint + i), j );
                i++;
                j++;
        }
        i = 0;
	return 0;
}
