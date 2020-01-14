#include <stdio.h>

int main()
{
int numero;

numero=0;

printf("Conjetura de collatz\nIntroduce un número: ");
scanf("%d", &numero);

	if(numero!=1)
	{	
		printf("%d ", numero);
		while (numero!=1)
		{	
			if(numero % 2 == 0)
			{
				numero=numero/2;
				printf("%d ", numero);
			}
			else
			{
				numero=numero*3+1;
				printf("%d ", numero);
			}
		}
		printf("\n");
	}
	else
	{
		printf("Fin\n");
	}
	
}
