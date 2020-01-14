#include <stdio.h>

int main()
{
int contador;
int tope;
contador=0;
tope=0;

printf("Introduce un número: ");
scanf("%d", &tope);

	for (contador=1;contador<tope+1;contador++)
	{
		printf("%d\n",contador);
	}
	
}
