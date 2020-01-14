#include <stdio.h>

char main()
{

int opcion;
opcion=0;

printf("Selecciona 1 para xogar ou 2 para saír\n");
scanf("%d",&opcion);

	if (opcion==1)
	{
	printf("Xogando\n");
	}

	else 
	{
		if(opcion==2)
		{
		printf("Escolliches saír\n");
		}
		else
		{
		printf("ERRO na selección\n");
		}
	}

printf("Fin do programa\n");

return(0);
}

