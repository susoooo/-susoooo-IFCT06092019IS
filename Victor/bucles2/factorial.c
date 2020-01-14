#include <stdio.h>

int main()
{
int contador;
int numero;
int resultado;
contador=0;
numero=0;
resultado=0;

	do
	{
		printf("Introduce un número para calcular su factorial: ");
		scanf("%d", &numero);
		if(numero>1)
		{
			contador=numero;
			resultado=numero;
			while (contador<=numero && contador>1)
			{
				printf(" %d x ",contador);
				contador--;
				resultado=resultado*contador;
			}
			printf("1 = %d \n",resultado);
		}
		else
		{
			printf("El número debe ser mayor que 1\n");
		}
	}
	while(numero<=1);
}
