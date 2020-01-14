#include <stdio.h>
#include <math.h>
#include <string.h>

#define LIMITE 5

int datos()
{
    int dato;
    dato=0;
    printf("Introduzca un numero:\n");
    scanf("%d",&dato);

    return(dato);
}

int ordenar(int datos[LIMITE])
{
    int contador1;
    int contador2;
    int temp;
    temp=0;

    for (contador1=1;contador1<LIMITE;contador1++)
    {
        for (contador2=0;contador2<LIMITE-1;contador2++)
        {
            if(datos[contador2]>datos[contador2+1])
            {
                temp=datos[contador2];
                datos[contador2]=datos[contador2+1];
                datos[contador2+1]=temp;
            }

        }
    }

    return(datos[LIMITE]);

}

int main()
{
	int array1[LIMITE];
    //int array2[LIMITE];
    int contador1;

    for (contador1=0;contador1<LIMITE;contador1++)
    {
        array1[contador1]=datos();
    }

    ordenar(array1);

    printf("\n");
    for(contador1=0;contador1<LIMITE;contador1++)
    {
        printf("%d ",array1[contador1]);
    }

	return(0);
}
