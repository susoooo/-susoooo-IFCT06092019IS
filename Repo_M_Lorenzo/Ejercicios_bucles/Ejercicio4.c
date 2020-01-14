#include <stdio.h>
#include <math.h>

main()
{

//Variables

int numero;
int contador;


//Inicializacion

numero=0;
contador=0;

//Programa


//Bucle Asteriscos
	
	printf("Bucle Asteriscos\n");
	printf("Introduzca el numero de asteriscos:\n");
	scanf("%d",&numero);
	
	if (numero==contador)
	{
		printf("Ningun asterisco\n");
	}
	
	else
	{
		do
		{
			printf("*\n");
			contador++;
		}
		while(contador!=numero);
	}

}
