

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char *t;

	t = "soy un string";

	printf("t :%s   tamanio %d \n ",t , strlen(t) );

	//NO HACE FALTA FREE PORQEU EL SISTEMA YA LO ASIGNA
	// VALGRIND NO ENCUETRA PROBLEMAS, FUNCIONA. no hace falta malloc ni realloc
	t = "reasigno string";

	printf("t :%s   tamanio %d \n ", t ,strlen(t) );



	return EXIT_SUCCESS;
}
