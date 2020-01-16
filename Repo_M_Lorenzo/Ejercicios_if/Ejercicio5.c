#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

int numero1;
int numero2;
int numero3;

//INICIALIZACION

numero1=0;
numero2=0;
numero3=0;

//PROGRAMA

printf("COMPARADOR DE NÚMEROS\n");
printf("Introduzca el primer número\n");
scanf("%d",&numero1);
printf("Introduzca el segundo número\n");
scanf("%d",&numero2);
printf("Introduzca el tercer número\n");
scanf("%d",&numero3);

	if(numero1==numero2 && numero1==numero3)
	{
	printf("Los tres números son iguales\n");
	}
	else
	{
		if(numero1>numero2 && numero1>numero3 && numero2>numero3)
		{
		printf("El orden de mayor a menor es: %d , %d , %d\n",numero1,numero2,numero3);
		}
		
		if(numero1>numero2 && numero1>numero3 && numero2<numero3)
		{
		printf("El orden de mayor a menor es: %d , %d , %d\n",numero1,numero3,numero2);
		}
		
		if(numero2>numero1 && numero2>numero3 && numero1>numero3)
		{
		printf("El orden de mayor a menor es: %d , %d , %d\n",numero2,numero1,numero3);
		}
		
		if(numero2>numero1 && numero2>numero3 && numero1<numero3)
		{
		printf("El orden de mayor a menor es: %d , %d , %d\n",numero2,numero3,numero1);
		}
		
		if(numero3>numero1 && numero3>numero2 && numero1>numero2)
		{
		printf("El orden de mayor a menor es: %d , %d , %d\n",numero3,numero1,numero2);
		}

		if(numero3>numero1 && numero3>numero2 && numero1<numero2)
		{
		printf("El orden de mayor a menor es: %d , %d , %d\n",numero3,numero2,numero1);
		}
	
	
	}

}
