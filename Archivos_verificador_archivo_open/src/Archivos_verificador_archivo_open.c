/*
 ============================================================================
 Name        : Archivos_verificador_archivo_open.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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
