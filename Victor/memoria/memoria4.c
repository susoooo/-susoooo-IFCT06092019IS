#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int contador;
    int * memoria1;

    n=0;
    contador=0;

    printf("Introduzca el número de elementos: ");
    scanf("%d", &n);

    memoria1 = (int*) malloc(sizeof(int)*n);

    for (contador=0;contador<n;contador++)
	{
		printf("Introduzca el elemento %d: ",contador+1);
		scanf("%d", &memoria1[contador]);
	}

	for (contador=0;contador<n;contador++)
        {
        printf("%d ", memoria1[contador]);
        }
	free(memoria1);
}
