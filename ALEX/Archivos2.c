#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define FILE int

int main()
{
    //FILE * fopen (char* nombre, char* modo);
    FILE * pfich;
    void *pDatos;
    int leidos;
    int caracteres;

    pfich=fopen("prueba.txt","rt");
    pDatos=malloc(sizeof(char));

    do
    {     
        leidos=fread(pDatos,sizeof(char),1,pfich);
        printf("%s",pDatos);
        caracteres=caracteres+leidos;

    } while (!feof(pfich));

    printf("\nEl archivo contiente %d caracteres.\n",caracteres);
    
    fclose(pfich);
    free(pDatos);
    return(0);
}