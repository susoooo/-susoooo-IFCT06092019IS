#include <stdio.h>

int factorial(int parametro1)
{

	int resultado;

	resultado=0;
	resultado=parametro1;
	
	if(parametro1!=1)
	{	
		printf(" %d x ",resultado);
		resultado=resultado*factorial(resultado-1);
	}

	return (resultado);
}

int main()
{
int numero;
int resultado;
numero=0;
resultado=0;
	do
	{
		printf("Introduce un número para calcular su factorial: ");
		scanf("%d", &numero);
		if(numero>1)
		{
			resultado=factorial(numero);
			printf("1 = %d \n",resultado);
		}
		else
		{
			printf("El número debe ser mayor que 1\n");
		}
	}
	while(numero<=1);
}
