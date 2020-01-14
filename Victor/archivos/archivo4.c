#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pfich;
    void * pDatos;
    int leidos;

    leidos=0;

    pfich=fopen("textos.txt", "rt");
    pDatos=malloc(sizeof(char));
    do
    {
        leidos=fread(pDatos,sizeof(char),1,pfich);
        printf("%c", *(char *)pDatos);
    }
    while (!feof(pfich));

    fclose(pfich);
    free(pDatos);
    return(0);
}
