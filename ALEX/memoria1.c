#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int n;
char * memoria01;
int contador;


int main()
{
		printf ("Cuantos caracteres quieres introducir?\n");
		scanf ("%d",&n);
		char * memoria01 = (char *) malloc(sizeof(char)*n);
		
	for (contador=0;contador<n;contador++)
	{
		scanf("%c",memoria01+contador);
	}
	
	for (contador=0;contador<n;contador++)
	{
		printf("%c",memoria01+contador);
	}

	
	free (memoria01);
	return (0);
}
	