#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int contador;
    float * memoria1;

    n=0;
    contador=0;

    printf("Introduzca el número de elementos: ");
    scanf("%d", &n);

    memoria1 = (float*) malloc(sizeof(float)*n);

    for (contador=0;contador<n;contador++)
	{
		printf("Introduzca el elemento %d: ",contador+1);
		scanf("%f", &memoria1[contador]);
	}

	for (contador=0;contador<n;contador++)
        {
        printf("%.2f ", memoria1[contador]);
        }
	free(memoria1);
}
