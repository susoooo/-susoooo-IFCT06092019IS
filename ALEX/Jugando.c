#include <stdio.h>

main()
{
	int seleccion;
	seleccion = 0;
	printf("Escribe 1 para jugar y 2 para salir\n");
	scanf("%d",seleccion);
	if(seleccion==1)
	{
		printf("A jugar\n");
	}
	else
	{
		if(seleccion==2)
		{	printf("Saliendo"\n");
		}
		else
		{	printf("ERROOOOOOOR"\n");
		}
	printf("programa acabado\n");
}
