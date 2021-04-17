/*
 ============================================================================
 Name        : Archivos_abiertos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int c;
	char cadena[50];



	 int fd = open("fichero.txt", "r" );

	    if (fd < 0) {
	     printf(" error al abrira el archivo");
	     return 1;
	    }

	    puts("archivo abierto hasta que ingrese cadena");

	    gets(cadena);

	    close(fd);

	  //  puts(cadena);


	puts("  Archivos cerrado !!");



	return EXIT_SUCCESS;
}
