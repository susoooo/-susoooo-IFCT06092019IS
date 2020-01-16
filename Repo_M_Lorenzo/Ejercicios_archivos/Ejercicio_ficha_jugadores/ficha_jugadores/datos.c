#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datos.h"



struct xogador datos()
{
    struct xogador puntero;
    printf("Introduzca el nombre:\n");
    scanf("%s",puntero.nombre);
    printf("Introduzca la altura (cm):\n");
    scanf("%s",puntero.altura);
    printf("Introduzca la edad:\n");
    scanf("%s",puntero.edad);


    return(puntero);


}
