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
#include <string.h>
#include <ctype.h>
#include <commons/string.h>


//HAY QUE LINKEAR AL PROYECTO-> PROPIEDADES --> SETTINGS--> LINKER --> LIBRARIES commons  ----->    HACERLO

int main() {


/*
	* Ejemplo:
	* char *saludo = "HOLA ";
	* char *nombre = "PEPE";
	*
	* string_append_with_format(&saludo, "%s!", nombre);
	*
	* => saludo = "HOLA PEPE!"*/

	char *saludo = string_new();

	FILE *fp;

	char buff[255];

	fp = fopen("fichero.txt", "r");


	//------TEST STRIG TRIM  de  COMMONS--------------
	/*   char *test = string_new();
	   test = "     texto      ";
	   char *test2 = string_duplicate(test);
	   string_trim(&test2);
	   printf("%s----test----", test2);   // test no funciona sin STRING_DUPLICATE
	 */

	   //----------TEST    STRING TO NUMBER --------------------
	   /*   int num;
	   char *texto = "12502";
	   char *prt;
	   num = strtol(texto, &prt, 10); // si falla retorna el numero hasta primer letra
	   printf( "numero %d", num);
	    */


	   int i=0;

	   int RESULTADO =0;

	   while(fscanf(fp, "%s", buff)!=EOF){

		   i++;

		   saludo = string_from_format("%s", buff);

		   char *textoBuffer = string_duplicate(buff);

		   string_trim(&textoBuffer);    //corta hasta el espacio

		   int num;

		   char *prt;

		   num = strtol(textoBuffer, &prt, 10); // si falla retorna el numero hasta primer letra

		   printf( "%d\n", num);


		   RESULTADO += num;

	   }

	   printf( "resultado suma :  %d ", RESULTADO);

	   fclose(fp);



	   return EXIT_SUCCESS;
}
