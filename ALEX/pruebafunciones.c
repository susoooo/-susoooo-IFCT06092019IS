#include <stdio.h>

int mensajeBienvenida()
{
	printf("Prueba de funciones.\n");
	printf("by Alex\n");
	printf("Version 1.0\n");
	return (0);
}
int mensajeDespedida()
{
	printf("Gracias por comprar nuestro programa\n");
	return (0);
}
int menu ()
{
	int seleccion;
	seleccion = 0;
	printf("1 Archivo nuevo,2 Cargar,3 Copiar,4 Borrar\n");
	scanf("%d",&seleccion);
	return (0);
	}
	
int main()
{
	mensajeBienvenida();
	menu();
	mensajeDespedida();
	return (0);
	
	
}