#include <stdio.h>
#include <math.h>

main()
{

//Variables

int tecla;

//Inicializacion

tecla=0;

//Programa

do
{
	printf("Comprobacion de tecla 1\n");
	printf("Pulse la tecla 1 para su comprobacion\n");
	scanf("%d",&tecla);
	if(tecla!=1)
	{
	printf("Tecla incorrecta\n");
	}
}
while(tecla!=1);

printf("Gracias\n");
}
