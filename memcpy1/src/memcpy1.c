/*
 ============================================================================
 Name        : memcpy1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
	MENSAJE,
	FFADS
} op_code;

typedef struct
{
	int f;
	int s;

} merca;


int main(void) {

struct merca tio;
tio->f = 10;


	void* memory = malloc(5);
	memcpy(memory,"hola",5);
	char* word = malloc(5);
	memcpy(word,memory,5);
	printf(word);
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	void* mem = malloc(10);
	memcpy(mem, "standaren", 10);

	printf("fede");

	memcpy(mem+2, "hola", 5);

		printf("fede");


	return EXIT_SUCCESS;
}
