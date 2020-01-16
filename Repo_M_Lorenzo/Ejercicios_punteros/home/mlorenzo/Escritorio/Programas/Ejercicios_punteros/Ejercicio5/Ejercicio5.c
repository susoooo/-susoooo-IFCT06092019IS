#include <stdio.h>
#include <math.h>
#include <string.h>

#define LIMITE 10

float datos()
{
    float dato;
    dato=0;

    printf("Introduzca un numero:\n");
    scanf("%f",&dato);

    return(dato);
}

float menor2(int filas, int columnas,float array[filas][columnas])
{
    int contador1;
    int contador2;
    float nmenor;
    nmenor=filas*columnas;

   for (contador1=0;contador1<filas;contador1++)
    {
        for(contador2=0;contador2<columnas;contador2++)
        {
            if (array[contador1][contador2]<nmenor)
            {   
                nmenor=array[contador1][contador2];
            }
        }

    }

    return(nmenor);

}

float mayor2(int filas, int columnas, float array[filas][columnas])
{
    int contador1;
    int contador2;
    float nmayor;
    nmayor=0;

   for (contador1=0;contador1<filas;contador1++)
    {
        for(contador2=0;contador2<columnas;contador2++)
        {
            if (array[contador1][contador2]>nmayor)
            {   
                nmayor=array[contador1][contador2];
            }
        }

    }

    return(nmayor);

}

void Buscar(int nf, int nc, float array[nf][nc], float *max, float *min)
{
    *max=mayor2(nf,nc,array);
    *min=menor2(nf,nc,array);


}



int main()
{
    int filas;
    int columnas;
    float matriz[filas][columnas];
    int contador1;
    float contador2;
    float *maximo;
    float *minimo;
    

    printf("Introduzca el numero de filas:\n");
    scanf("%d",&filas);
    if(filas>20)
    {
        printf("ERROR, tamaño maximo 20 filas.\n");
    }
    else
    {
        printf("Introduzca el numero de columnas:\n");
        scanf("%d",&columnas);
        printf("Introduzca los datos de la matriz fxc\n");
        if(columnas>20)
        {
            printf("ERROR, tamaño maximo 20 columnas.\n");

        }
        else
        {
            for (contador1=0;contador1<filas;contador1++)
            {
                for(contador2=0;contador2<columnas;columnas++)
                {   
                    matriz[filas][columnas]=datos();
                }
            }
            
        }
        

    } 

    Buscar(filas,columnas,matriz,maximo,minimo);

    printf("El valor maximo es: %f\n",maximo);
    printf("El valor minimo es: %f\n",minimo);



    return(0);
}