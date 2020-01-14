#include <stdio.h>
#include <math.h>
#include <string.h>
#include "funciones.h"

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca un numero:\n");
    scanf("%d",&dato);

    return(dato);
}
int MCD(int num1, int num2)
{
    int n1;
    int n2;
    int mod;

    if (num1>num2)
    {
        n1=num1;
        n2=num2;
    }
    else
    {
        n1=num2;
        n2=num1;
    }

    mod=n2%n1;

    if(n2 == 0)
    {
        return(n1);
    }
    else
    {
        return(MCD (n2,mod));
    }
}
