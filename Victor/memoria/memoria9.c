#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;
    int contador;
    int conta2;
    float * memoria1;

    contador=0;
    conta2=0;

    memoria1 = (float*) malloc(sizeof(float));
    do
    {
        printf("Introduzca el caracter %d: ",contador+1);
        scanf("%f", &memoria1[contador]);
        memoria1 = realloc(memoria1,sizeof(float)*(1+contador));
        getchar();
        printf("¿Desea introducir más caracteres? S/N ");
        scanf("%c", &opcion);
        contador++;
        getchar();
    }
    while(opcion!='n');

    for (conta2=0;conta2<contador;conta2++)
        {
        printf("%.2f ", memoria1[conta2]);
        }
	free(memoria1);
}
