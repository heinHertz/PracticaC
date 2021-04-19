/*
 ============================================================================
 Name        : Archivos_verificador_archivo_open.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>


int main(void) {

	  int fd = open("fichero.txt", "r");
	    if (fd < 0) {
	     perror("open");
	     return 1;
	    }

	    if ( fcntl(fd, F_SETLEASE, F_WRLCK) && EAGAIN == errno) {
	     puts("file has been opened");
	    }
	    else {
	     fcntl(fd, F_SETLEASE, F_UNLCK);
	     puts("file has not been opened");
	    }

	    close(fd);
	    return 0;



	return EXIT_SUCCESS;
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//Función principal
main(int argc, char **argv[])
{
	//Declaramos variables
	int fd;
	char c;
	//ABRIR ARCHIVO
	//O_RDONLY abre el archivo salida.txt en modo lectura
	fd = open("salida.txt",O_RDONLY);

	//CONTROLAR SI EXISTE ARCHIVO
	if(fd!=-1)
	{
		//LEER EL ARCHIVO
		//El archivo se lee caracter por caracter
		while(read(fd,&c,sizeof(c)!=0)){
			printf("%c",c);
		}
		//CERRAR ARCHIVO
		close(fd);
	}

	else{
		printf("\nEl archivo no existe");
	}

}
