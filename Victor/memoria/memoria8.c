#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;
    int contador;
    int conta2;
    int * memoria1;

    contador=0;
    conta2=0;

    memoria1 = (int*) malloc(sizeof(int));
    do
    {
        printf("Introduzca el caracter %d: ",contador+1);
        scanf("%d", &memoria1[contador]);
        memoria1 = realloc(memoria1,sizeof(int)*(1+contador));
        getchar();
        printf("¿Desea introducir más caracteres? S/N ");
        scanf("%c", &opcion);
        contador++;
        getchar();
    }
    while(opcion!='n');

    for (conta2=0;conta2<contador;conta2++)
        {
        printf("%d ", memoria1[conta2]);
        }
	free(memoria1);
}
