#include<unistd.h>
#include <stdio.h>

short month_size;
int taxi_number;
char month_year, starting_day;

typedef struct main_data {
	int taxi_number;
	char month_year;
	char starting_day;
	short month_size;
} info;

int main ( int argc, char * argv ) {
	if ( argc != 5 ) {
		printf ( "\nSe necesitan 4 argumentos en el siguiente orden: < numero del taxi > < mes-año > < dia inicial del mes > < tamaño del mes >\nSolo fueron ingresados %i argumentos... el programa dejara de ejecutarse...\n", argc - 1 );
		return 1;
	}
	printf ( "\n\n**** etapa de verfificacion de argumentos completada ****\n\n" );
	info mdata = { argv[1], argv[2], argv[3], argv[4] };
	printf ( "\n\n**** added to struct data type succesfully... ****\n\n" );
	return 0;
}
