#include <stdio.h>

int main()
{
int contador;
int inicio;
int tope;
contador=0;
inicio=0;
tope=0;

printf("Introduce el número inicial: ");
scanf("%d", &inicio);
printf("Introduce el número final: ");
scanf("%d", &tope);

contador=inicio;

	do
	{
		printf("%d\n",contador);
		contador++;
	}
	while (contador<tope+1);
}
