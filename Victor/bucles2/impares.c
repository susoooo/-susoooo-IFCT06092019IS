#include <stdio.h>

int main()
{
int contador;
int inicio;
int tope;
int error;
contador=0;
inicio=0;
tope=0;
error=0;

	do
	{
	error=0;
	printf("Introduce el número inicial: ");
	scanf("%d", &inicio);
	printf("Introduce el número final: ");
	scanf("%d", &tope);
	
		if (tope<=inicio)
		{
			printf("ERROR: El número inicial debe ser menor que el número final\n");
			error=1;
		}
		else
		{
			printf("Los números impares son: \n");
			for (contador=inicio;contador<tope+1;contador++)
			{	
				if(contador % 2 != 0)
				{
					printf("%d\n",contador);
				}
			}
		}
	}
	while(error==1);
}
