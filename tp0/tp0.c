/*
 * main.c
 *
 *  Created on: 28 feb. 2019
 *      Author: utnso
 */

#include "tp0.h"

int main(void)
{
	/*---------------------------------------------------PARTE 2-------------------------------------------------------------*/
	int conexion;
	char* ip;
	char* puerto;
	char* valor;

	t_log* logger;
	t_config* config;

	logger = iniciar_logger();

	//Loggear "soy un log"

	log_info(logger, "Soy un log" );


	config = leer_config();

	//asignar valor de config a la variable valor

	valor = config_get_string_value( config,  "CLAVE"   );

	ip = config_get_string_value( config,  "IP"   );

	 puerto = config_get_string_value( config,  "PUERTO"   );
	//Loggear valor de config

	/*int i;

	for(i=0; i<3; i++){
*/
	leer_consola(logger);


	/*---------------------------------------------------PARTE 3-------------------------------------------------------------*/

	//antes de continuar, tenemos que asegurarnos que el servidor esté corriendo porque lo necesitaremos para lo que sigue.

	//crear conexion




	conexion = crear_conexion( ip , puerto);

	//enviar CLAVE al servirdor
	enviar_mensaje(valor , conexion);

//	enviar_mensaje("valor" , conexion);

	paquete(conexion);

	//}

	terminar_programa(conexion, logger, config);
}

t_log* iniciar_logger(void)
{

	return log_create("Tp0.log", "Tp0", 1, LOG_LEVEL_INFO);

}

t_config* leer_config(void)
{

	return config_create("tp0.config");

}

void leer_consola(t_log* logger)
{
	char* leido;

	//El primero te lo dejo de yapa
	leido = readline(">");

	log_info(logger, leido );

	free(leido);

}

void paquete(int conexion)
{
	//Ahora toca lo divertido!

	char* leido;

	t_paquete* paquete;

	paquete = crear_super_paquete();

	char *texto1;

	texto1 = "quien blandia el stombreaker";

	agregar_a_paquete( paquete, texto1, strlen(texto1) );

	texto1 = "thor thanos";

	agregar_a_paquete( paquete, texto1, strlen(texto1) );

	enviar_paquete( paquete , conexion );

	eliminar_paquete(paquete);

}

void terminar_programa(int conexion, t_log* logger, t_config* config)
{


	liberar_conexion(conexion);

	log_destroy(logger);
	//Y por ultimo, para cerrar, hay que liberar lo que utilizamos (conexion, log y config) con las funciones de las commons y del TP mencionadas en el enunciado
}
