#include <stdio.h>
#include <string.h>
#include <math.h>

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
    int num1;
    int num2;
    int resultado;
    int *punt1;
    int *punt2;

    num1=datos();
    num2=datos();

    punt1=&num1;
    punt2=&num2;

    resultado=*punt1+*punt2;

    printf("El resultado de la suma de %d y %d es %d\n", num1,num2,resultado);
    

    return(0);
}