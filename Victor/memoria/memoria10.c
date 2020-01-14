#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;
    int contador;
    int conta2;
    char ** memoria1;

    contador=0;
    conta2=0;

    memoria1 = (char**) malloc(sizeof(char));
    do
    {
        printf("Introduzca el elemento %d: ",contador+1);
        gets(memoria1[contador]);
        memoria1 = realloc(memoria1,sizeof(char)*(1+contador));
        memoria1[contador] = (char*)malloc(sizeof(char)*50);
        getchar();
        printf("¿Desea introducir más elementos? S/N ");
        scanf("%c", &opcion);
        contador++;
        getchar();
    }
    while(opcion!='n');

   for (conta2=0;conta2<contador;conta2++)
        {
            puts(memoria1[conta2]);
        }
	free(memoria1);
}
