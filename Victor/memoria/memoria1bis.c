#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int contador;
    char * memoria1;

    n=0;
    contador=0;

    printf("Introduzca el número de elementos: ");
    scanf("%d", &n);

    memoria1 = (char*) malloc(sizeof(char)*n);

    for (contador=0;contador<n;contador++)
	{
	    getchar();
		printf("Introduzca el elemento %d: ",contador+1);
		scanf("%c", (memoria1+contador));
	}

	for (contador=0;contador<n;contador++)
        {
        printf("%c ", *(memoria1+contador));
        }
	free(memoria1);
}
