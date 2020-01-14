#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 50

int main()
{
    int numCarac;
    int contador;
    char * memoria01;
    

    printf("¿Cuantas cadenas desea introducir?\n");
    scanf("%d",&numCarac);

    memoria01 = (char *) malloc((sizeof(char)*TAM*numCarac));

    printf("Introduzca las cadenas...\n");
    getchar();
    for(contador=0;contador<numCarac;contador++)
    {

        gets((memoria01+(contador*TAM)));        
        
    }

    for(contador=0;contador<numCarac;contador++)
    {
        puts((memoria01+(contador*TAM)));
        
    }
    printf("\n");

    free(memoria01);
    
    return(0);
}