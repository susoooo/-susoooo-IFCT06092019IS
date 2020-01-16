#include <stdio.h>
#include <math.h>

main()
{

//Variables

int numero;


//Inicializacion

numero=0;

//Programa

printf("Conjetura de Collatz\n");
printf("Introduzca un numero entero\n");
scanf("%d",&numero);

if (numero==1)
	{
	printf("1\n");
	printf("FIN\n");
	}
else
	{
	if(numero>0)
	{
	do
		{
			if(numero%2==0)
				{
				numero=numero/2;
				printf("%d\n",numero);
				}
			else
				{
				numero=(numero*3)+1;
				printf("%d\n",numero);
				}
		}
	while(numero>1);
	printf("FIN\n");
	}
	if (numero<0)
		{
		numero=numero*(-1);
		do
			{
				if(numero%2==0)
					{
					numero=numero/2;
					printf("%d\n",numero);
					}
				else
					{
					numero=(numero*3)+1;
					printf("%d\n",numero);
					}
			}
		while(numero>1);
		printf("FIN\n");
		}
	}	

}	
	
