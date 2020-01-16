#include <stdio.h>
#include <math.h>

main()
{

//Variables

int numero1;
int numero2;
int contador;

//Inicializacion

numero1=0;
numero2=0;
contador=1;

//Programa

//Bucle Do While
	
	printf("Bucle Do While\n");
	printf("Introduzca el primer numero:\n");
	scanf("%d",&numero1);
	printf("Introduzca el segundo numero:\n");
	scanf("%d",&numero2);
	
	if (numero1>=numero2)
	{
		contador=numero2;
		do
		{
			printf("%d\n",contador);
			contador++;
		}
		while(contador<=numero1);	
	}
	else
	{
		contador=numero2;
		do
		{
			printf("%d\n",contador);
			contador--;
		}
		while(contador>=numero1);
	}
	
}
