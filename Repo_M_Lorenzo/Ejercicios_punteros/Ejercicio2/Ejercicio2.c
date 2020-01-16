#include <stdio.h>
#include <string.h>
#include <math.h>

#define LIMITE 15

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca un numero:\n");
    scanf("%d",&dato);

    return(dato);
}


int main()
{
    int arrayNum[LIMITE];
    int *punt;
    int contador;



    for(contador=0;contador<LIMITE;contador++)
    {
        arrayNum[contador]=datos();
    }
    punt=arrayNum;

    for(contador=0;contador<LIMITE;contador++)
    {
        printf("\n%d",*(punt+contador));
    }

    return(0);
}