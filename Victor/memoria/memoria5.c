#include <stdio.h>
#include <stdlib.h>

int main()
{
     struct datos
    {
        char dato1[50];
    };
    int n;
    int contador;
    struct datos * memoria1;

    n=0;
    contador=0;

    printf("Introduzca el número de elementos: ");
    scanf("%d", &n);

    memoria1 = (struct datos*) malloc(sizeof(struct datos)*n);
    getchar();
    for (contador=0;contador<n;contador++)
	{
		printf("Introduzca el elemento %d: ",contador+1);
		gets(memoria1[contador].dato1);
	}

	for (contador=0;contador<n;contador++)
        {
        puts(memoria1[contador].dato1);
        }
	free(memoria1);
}
