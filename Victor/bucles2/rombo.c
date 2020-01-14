#include <stdio.h>

int main()
{
int altura;
int anchura;
int contador;
int contador2;
int contador3;
altura=0;
anchura=0;
contador=0;
contador2=0;
contador3=0;

printf("Imprimir rombo.\nIntroduce la altura: ");
scanf("%d", &altura);
printf("Introduce la anchura: ");
scanf("%d", &anchura);
	
	altura=altura/2;
	anchura=anchura/2;
	for(contador=0;contador<=altura;contador++)
	{
		for(contador2=altura;contador2>contador;contador2--)
		{
			printf(" ");
		}
		for(contador3=contador;contador3>0;contador3--)
		{	
			printf("*");
		}
		for(contador2=contador;contador2>=0;contador2--)
		{	
			printf("*");
		}
		printf("\n");
	}
	for(contador=1;contador<=altura;contador++)
	{
		for(contador2=contador;contador2>0;contador2--)
		{	
			printf(" ");
		}
		for(contador3=altura;contador3>=contador;contador3--)
		{
			printf("*");
		}
		for(contador2=altura;contador2>contador;contador2--)
		{
			printf("*");
		}
		printf("\n");
	}
	

	
}
