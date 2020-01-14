#include <stdio.h>

int main()
{
int contador;
int tope;
contador=0;
tope=0;

printf("¿Cuántos asteriscos desea imprimir? ");
scanf("%d", &tope);

	for (contador=1;contador<=tope;contador++)
	{
		printf("%d *\n",contador);
	}
	
}
