#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int numCarac;
    int contador;
    char * memoria01;

    printf("¿Cuantos caracteres desea introducir?\n");
    scanf("%d",&numCarac);

    memoria01= (char *) malloc((sizeof(char))*numCarac);

    printf("Introduzca los caracteres...\n");

    for(contador=0;contador<numCarac;contador++)
    {
        getchar();
        printf("\n");
        scanf("%c",memoria01+contador);
        
    }

    for(contador=0;contador<numCarac;contador++)
    {
        printf("%c",*(memoria01+contador));
        
    }

    free(memoria01);
    
    return(0);
}
