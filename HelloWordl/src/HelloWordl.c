

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char *t;

	t = "adolfito fadf";

	printf("t :%s   tamanio %d \n ",t , strlen(t) );

	//NO HACE FALTA FREE PORQEU EL SISTEMA YA LO ASIGNA
	// VALGRIND NO ENCUETRA PROBLEMAS, FUNCIONA.
	t = "miriampol";

	printf("t :%s   tamanio %d \n ", t ,strlen(t) );

int i;
	for(i=0;i<10;i++){
	printf("!!!    Hello World!!! \n"); /* prints !!!Hello World!!! */

	}

	return EXIT_SUCCESS;
}
