#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pfich;
    void * pDatos;
    int leidos;

    leidos=0;

    pfich=fopen("ejemplo.bmp", "rb");
    pDatos=malloc(sizeof(char));

    fseek(pfich,2,0);
    leidos=fread(pDatos,1,4,pfich);
    printf("Tamaño: %c\n", *(char *)pDatos);

    fseek(pfich,30,0);
    leidos=fread(pDatos,1,4,pfich);
    if(*(int *)pDatos==0)
    {
        printf("Compresión: NO\n");
    }
    else
    {
        printf("Compresión: SÍ\n");
    }
    fseek(pfich,18,0);
    leidos=fread(pDatos,1,4,pfich);

    fseek(pfich,22,0);
    leidos=fread(pDatos,1,4,pfich);

    fseek(pfich,38,0);
    leidos=fread(pDatos,1,4,pfich);

    fseek(pfich,42,0);
    leidos=fread(pDatos,1,4,pfich);

    fclose(pfich);
    free(pDatos);
    return(0);
}
