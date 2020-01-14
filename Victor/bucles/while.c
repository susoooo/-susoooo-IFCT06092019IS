#include <stdio.h>

int main()
{
int numero1;
numero1=0;

	while (numero1<13)
	{
		printf("%d Hola\n",numero1);
		numero1++;
	}

	do
	{
		printf("%d Adios\n",numero1);
		numero1--;
	}
	while(numero1>3);
}
