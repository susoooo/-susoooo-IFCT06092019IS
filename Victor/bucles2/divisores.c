#include <stdio.h>

int main()
{
int contador;
int numero;
contador=1;
numero=0;

printf("Introduce un número para mostrar sus divisores: ");
scanf("%d",&numero);
printf("Los divisores de %d son: ", numero);

	while (contador<=numero)
	{
		if(numero%contador==0)
		{
			printf(" %d ",contador);
			contador++;
		}
		else
		{
			contador++;
		}
	}

printf("\n");			
}
