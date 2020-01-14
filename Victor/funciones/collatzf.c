#include <stdio.h>

int comienzo()
{
	int numero;
	numero=0;
	printf("Conjetura de collatz\nIntroduce un número: ");
	scanf("%d", &numero);
	return(numero);
}

int calculo()
{
	int numero;
	numero=0;
	numero=comienzo();
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

int fin()
{
	printf("Fin\n");
	return(0);
}

int main()
{
	calculo();
	fin();
}