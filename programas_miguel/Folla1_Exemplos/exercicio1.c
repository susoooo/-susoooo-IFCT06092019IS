#include <stdio.h>
#include <math.h>

char main()
{

int numero1;
int numero2;
numero1=0;
numero2=0;

printf("Por favor, introduce o primeiro número:\n");
scanf("%d",&numero1);
printf("Por favor, introduce o segundo número:\n");
scanf("%d",&numero2);

	if (numero1>numero2)
	{
	printf("\nO %d é maior.\n", numero1);
	}

	else 
	{
		if(numero1<numero2)
		{
		printf("\nO %d é maior.\n", numero2);
		}
		else
		{
		printf("Os números son iguais\n");
		}
	}

return(0);
}
