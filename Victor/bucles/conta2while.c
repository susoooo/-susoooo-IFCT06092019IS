#include <stdio.h>

int main()
{
int contador;
int tope;
contador=1;
tope=0;

printf("Introduce un número: ");
scanf("%d", &tope);

	while (contador<tope+1)
	{
		printf("%d\n",contador);
		contador++;
	}
	
}
