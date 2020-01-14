#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

int numero1;
int numero2;

//INICIALIZACION

numero1=0;
numero2=0;

//PROGRAMA

printf("COMPARADOR DE NUMEROS\n");
printf("Introduzca el primer numero:\n");
scanf("%d",&numero1);
printf("Introduzca el segundo numero:\n");
scanf("%d",&numero2);

	if (numero1==numero2)
	{
	printf("Los números son iguales\n");
	}	
	else
	{
		if (numero1>numero2)
		{
		printf("El primer número es mayor que el segundo\n");
		}		
		else
		{
		printf("El segundo número es mayor que el primero\n");
		}
	}


}
