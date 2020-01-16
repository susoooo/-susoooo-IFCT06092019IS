#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int numCarac;
    int contador;
    float * memoria01;

    printf("¿Cuantos numeros reales desea introducir?\n");
    scanf("%d",&numCarac);

    memoria01= (float *) malloc((sizeof(float))*numCarac);

    printf("Introduzca los numeros...\n");

    for(contador=0;contador<numCarac;contador++)
    {
        getchar();
        printf("\n");
        scanf("%f",memoria01+contador);
        
    }

    for(contador=0;contador<numCarac;contador++)
    {
        printf("%f ",*(memoria01+contador));
        
    }
    printf("\n");

    free(memoria01);
    
    return(0);
}