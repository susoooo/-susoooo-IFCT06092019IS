#include <stdio.h>

int main()
{
int contador;
int dni[8];

contador=0;

printf("Introduzca su número de DNI: ");

	for (contador=0;contador<8;contador++)
	{
		scanf("%d", &dni[contador]);
	}
	printf("Su número de DNI es: ");
	for (contador=0;contador<8;contador++)
	{
		printf("%d", dni[contador]);
	}
	printf("\n");
}