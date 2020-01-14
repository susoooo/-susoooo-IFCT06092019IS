#include <stdio.h>

int main()
{

int *punt;
int contador;
float suma;
float media;
float menor;
float mayor;
int datos[10];

contador=0;
media=0.0;
menor=0.0;
mayor=0.0;
suma=0.0;

punt=datos;

	printf("Introduzca 10 números\n");
	for (contador=0;contador<10;contador++)
	{
		printf("%d: ",contador+1);
		scanf("%d", (punt+contador));
	}

	for(contador=0;contador<10;contador++)	
	{
		suma=suma+*(punt+contador);		
	}
	media=suma/10;
	printf("Media= %.2f\n", media);
		
	menor=datos[0];
	for(contador=0;contador<10;contador++)
	{
		if(menor > *(punt+contador))
		{
			menor=*(punt+contador);
		}	
	}
	printf("El menor es: %.2f\n", menor);
		
	mayor=datos[0];
	for(contador=0;contador<10;contador++)
	{
		if(mayor < *(punt+contador))
		{
			mayor=*(punt+contador);
		}	
	}
	printf("El mayor es: %.2f\n", mayor);
}