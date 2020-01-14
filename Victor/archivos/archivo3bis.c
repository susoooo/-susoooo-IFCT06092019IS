#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pfich;
    void * pDatos;

    pfich=fopen("textos.txt", "at");
    pDatos=malloc(sizeof(char));

    printf("Introduzca el texto a guardar: ");
    gets(pDatos);

    fputs(pDatos,pfich);

    fclose(pfich);
    free(pDatos);
    return(0);
}
