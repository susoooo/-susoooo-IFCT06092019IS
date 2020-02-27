#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pfich;
    void * pDatos;
    int leidos;

    leidos=0;

    pfich=fopen("precios.txt", "rt");
    pDatos=malloc(sizeof(float));
    do
    {
        leidos=fread(pDatos,sizeof(float),1,pfich);
        printf("%.2f ", *(float *)pDatos);
    }
    while (!feof(pfich));

    fclose(pfich);
    free(pDatos);
    return(0);
}
