#include <stdio.h>
#include <math.h>

main()
{

//Variables

int numero;
int factorial;

//Inicializacion

numero=0;
factorial=1;

//Programa

printf("Cálculo del factorial de un número\n");
printf("Introduzca un número:\n");
scanf("%d",&numero);

if (numero>0)
	{
		while(numero>0)
			{
				factorial=factorial*numero;
				numero--;
							
			}
	}
else
	{
		printf("El número debe ser mayor que 0");
	}

printf("El factorial es %d\n",factorial);



}
