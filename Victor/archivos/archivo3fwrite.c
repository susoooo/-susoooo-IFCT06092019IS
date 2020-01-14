#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * pfich;
    void * pDatos;
    int escritos;

    escritos=0;

    pfich=fopen("textos.txt", "at");
    pDatos=malloc(sizeof(char)*50);

    printf("Introduzca el texto a guardar: ");
    gets(pDatos);
    escritos=fwrite(pDatos, sizeof(char), strlen(pDatos), pfich);

    fclose(pfich);
    free(pDatos);
    return(0);
}


