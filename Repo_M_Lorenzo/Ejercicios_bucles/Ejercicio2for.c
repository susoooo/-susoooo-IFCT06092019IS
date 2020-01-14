#include <stdio.h>
#include <math.h>

main()
{

//Variables

int numero;
int contador;

//Inicializacion

numero=0;
contador=1;

//Programa

//Bucle for
	
	printf("Bucle FOR\n");
	printf("Introduzca un numero:\n");
	scanf("%d",&numero);
	
	if (numero>0)
	{
		for(contador==1;contador<=numero;contador++)
		{
			printf("%d\n",contador);
		}
	}
	
	else
	{
	for(contador==1;contador>=numero;contador--)
		{
			printf("%d\n",contador);
		}
	}

}
