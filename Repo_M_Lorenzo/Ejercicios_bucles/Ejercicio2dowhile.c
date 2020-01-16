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
	
	printf("Bucle Do While\n");
	printf("Introduzca un numero:\n");
	scanf("%d",&numero);
	do
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
	
	while(contador!=numero);

}
