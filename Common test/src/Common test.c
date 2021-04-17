/*
 ============================================================================
 Name        : Common.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <commons/string.h>
#include <commons/collections/list.h>


typedef struct{

	char* nombre;

} t_dato;

void eliminar_elemento(t_link_element*);

void eliminar_dato( t_dato*);



//HAY QUE LINKEAR AL SETTING LINKER --> LIBRARIES commons  ----->    HACERLO

int main(void) {

//	char* string = string_new();

//	string_append(&string, "Hello world");

//	puts( string ); /* prints !!!Hello World!!! */



	//------------------ LISTAS -----------------------son NODOS !!!!!


	t_dato* dato =  malloc(sizeof(t_dato));

	char *string;

	string =  "Hola primer nodo";

	dato->nombre = malloc(strlen(string)+1);

	strcpy(dato->nombre,string);




	t_dato* dato2 =  malloc(sizeof(t_dato));

		char *string2;

		string2 =  "Hola segundo nodo";

		dato2->nombre = malloc(strlen(string2)+1);

		strcpy(dato2->nombre, string2);




	t_list* lista;      ///   -------------->  es un puntero si o si

	lista = list_create();


	list_add( lista, dato  );

	list_add(lista, dato2);




	//recorrer e imprimir toda la lista
	t_list_iterator* iterador;

	iterador = list_iterator_create(lista);


	while(list_iterator_has_next(iterador) ){


		t_dato* datoNew = list_iterator_next( iterador);

		printf( "  %s \n", datoNew->nombre );

	}



	list_destroy_and_destroy_elements(lista, eliminar_dato );  // VALGRIND OK


	free(iterador);


	return EXIT_SUCCESS;
}

void eliminar_elemento(t_link_element* elemento){

	free(elemento->data);
	free(elemento->next);
	free(elemento);

};


void eliminar_dato(t_dato* dato){

	free(dato->nombre);

	free(dato);

};


















