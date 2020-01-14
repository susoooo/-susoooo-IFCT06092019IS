#include <stdio.h>

int main()
{
int *punt;
int contador;
int datos[15];

contador=0;
punt=datos;

	printf("Introduzca 15 números\n");
	for (contador=0;contador<15;contador++)
	{
		printf("%d: ",contador+1);
		scanf("%d", (punt+contador));
	}


			for (contador=0;contador<15;contador++)
			{
			printf("%d ", *(punt+contador));
			}
			printf("\n");
	
}