#include <stdio.h>
#include <math.h>
#include <string.h>
#include "funciones.h"


long sumar(int num)
{
    if (num==0)
    {
        return (0);
    }
    else if(num==1)
    {
        return(1);
    }
    else
    {
        return (num+sumar(num-1));
    }

}

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca un numero:\n");
    scanf("%d",&dato);

    return(dato);
}
