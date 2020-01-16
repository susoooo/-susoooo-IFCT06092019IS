#include <stdio.h>
#include <math.h>
#include <string.h>

int mensajeBienvenida()
{
    printf("\nEste es un mensaje de bienvenida\n");
	printf("Prueba de funciones\n");
	printf("Version 0.1\n");
	return(0);
}

int mensajeDespedida()
{
	printf("Este es un mesaje de despedida\n");
	printf("Gracias\n");
	printf("Adios\n");
	return(0);
}

int main()
{
	mensajeBienvenida();
	mensajeDespedida();	
	
	return(0);
}