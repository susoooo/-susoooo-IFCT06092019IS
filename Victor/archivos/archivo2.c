#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pfich;
    void * pDatos;
    int leidos;
    int contador;

    leidos=0;
    contador=0;

    pfich=fopen("prueba.txt", "rt");
    pDatos=malloc(sizeof(char));
    do
    {
        leidos=fread(pDatos,sizeof(char),1,pfich);
        if(*(char *)pDatos!='\n' && *(char *)pDatos!=' ')
        {
            contador=contador+leidos;
        }
    }
    while (!feof(pfich));
    printf("El archivo contiene %d caracteres",contador);

    fclose(pfich);
    free(pDatos);
    return(0);
}
