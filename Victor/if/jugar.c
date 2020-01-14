#include <stdio.h>

int main()
{

	int seleccion;
	seleccion=0;
	printf("Escribe 1 para jugar y 2 para salir\n");
	scanf("%d", &seleccion);
	if(seleccion==1)
	{
		printf("Jugando\n");
	}
	else
	{
		if(seleccion==2)
		{
			printf("Finalizando programa\n");
			
		}
		else
		{
			printf("ERROR\n");
		}
	}
	printf("Programa finalizado\n");

}
