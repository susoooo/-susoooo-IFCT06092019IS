#include <stdio.h>
#include <math.h>

main()
{

//Variables

int numero;
int divisor;

//Inicializacion

numero=0;
divisor=0;

//Programa

printf("Cálculo de los divisores de un número\n");
printf("Introduzca el numero:\n");
scanf("%d",&numero);

divisor=numero;
while(divisor>0)
	{
		if (numero%divisor==0)
			{
				printf("%d es divisor de %d\n",divisor,numero);
			}
		divisor--;
	}
	

}
