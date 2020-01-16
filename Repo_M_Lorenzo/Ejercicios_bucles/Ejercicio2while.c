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

//Bucle Do While
	
	printf("Bucle While\n");
	printf("Introduzca un numero:\n");
	scanf("%d",&numero);
	while(contador!=numero)
	{
		if (numero>0)
		{
		printf("%d\n",contador);
		contador++;
		}
		
		else
		{
		printf("%d\n",contador);
		contador--;
		}
	}
	
}
