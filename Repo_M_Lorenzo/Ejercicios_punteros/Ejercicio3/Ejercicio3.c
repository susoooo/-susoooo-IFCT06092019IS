#include <stdio.h>
#include <math.h>
#include <string.h>

#define LIMITE 10

int datos()
{
    int dato;
    dato=0;

    printf("Introduzca un numero:\n");
    scanf("%d",&dato);

    return(dato);
}

int menor2(int array[LIMITE])
{
    int contador;
    int nmenor;
    nmenor=LIMITE;

    for (contador=0;contador<LIMITE;contador++)
    {
        if (array[contador]<nmenor)
        {
            nmenor=array[contador];
        }

    }

    return(nmenor);

}

int mayor2(int array[LIMITE])
{
    int contador;
    int nmayor;
    nmayor=0;

    for (contador=0;contador<LIMITE;contador++)
    {
        if (array[contador]>nmayor)
        {
            nmayor=array[contador];
        }

    }

    return(nmayor);

}

float media2(int array[LIMITE])
{
    int contador;
    float nmedia;
    nmedia=0;

    for (contador=0;contador<LIMITE;contador++)
    {
        nmedia=nmedia+array[contador];

    }

    nmedia=nmedia/LIMITE;

    return(nmedia);

}

int main()
{
    int arrayNum[LIMITE];
    int contador;
    int menor;
    float media;
    int mayor;


    for (contador=0;contador<LIMITE;contador++)
    {
        arrayNum[contador]=datos();
    }

    media=media2(arrayNum);
    mayor=mayor2(arrayNum);
    menor=menor2(arrayNum);

    printf("\nLa media es: %f\n",media);
    printf("El mayor es: %d\n",mayor);
    printf("El menor es: %d\n",menor);

    return(0);
}