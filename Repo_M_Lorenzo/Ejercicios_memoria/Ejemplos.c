#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
    int n;
    int * memoria01;
    float * memoria02;
    
    printf("¿Cuantos elementos quieres en el array?\n");
    scanf("%d",&n);

    int * memoria01 = (int *) malloc(sizeof(int)*n);
    float * memoria02 = (float *) malloc(sizeof(float)*n);
    struct xogador * pXogador = (struct xogador *) malloc(sizeof(struct xogador));
    
    memoria01 = realloc(memoria01,sizeof(int)*(n+20));

    free(memoria01);

    return(0);
}