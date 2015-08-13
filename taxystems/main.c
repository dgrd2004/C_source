#include<unistd.h>
#include <stdio.h>

int main ( int argc, char * argv ) {
	if ( argc != 5 ) {
		printf ( "\nSe necesitan 4 argumentos en el siguiente orden: < numero del taxi > < mes/año > < dia inicial del mes > < tamaño del mes >\nSolo fueron ingresados %i argumentos... el programa dejara de ejecutarse...\n", argc - 1 );
		return 1;
	}
	printf ( "\n\n**** etapa de verfificacion de argumentos completada ****\n\n" );
	return 0;
}
