#include <stdio.h>
#include <math.h>
#include <string.h>


int datos()
{
    int dato;
    dato=0;

    printf("Introduzca un numero:\n");
    scanf("%d",&dato);

    return(dato);

}

void leerVector(float *vector, int n)
{
    int contador1;
    
    for (contador1=0;contador1<n;contador1++)
    {
        printf("Introduzca elementos del vector:\n");
        scanf("%f",(vector+contador1));                       
    }         

}

void producto(float *v1, float *v2, int n,float prod[100][100])
{
    int contador1;
    int contador2;

    for (contador1=0;contador1<n;contador1++)
    {
        for(contador2=0;contador2<n;contador2++)
        {
            prod[contador1][contador2]=v1[contador1]*v2[contador2];
        }
        
    }
    
}

void imprimirVector(float vector[100][100],int n)
{
    int contador1;
    int contador2;

    for (contador1=0;contador1<n;contador1++)
    {
        for(contador2=0;contador2<n;contador2++)
        {
            printf("%f ",vector[contador1][contador2]);
        }
    }

}

int main()
{
    int longitud;
    float vec1[100];
    float vec2[100];
    float Vprod[100][100];
    int contador1;
    
    printf("Introduzca el numero de elementos:\n");
    scanf("%d",&longitud);
    if(longitud>100)
    {
        printf("ERROR, tamaño maximo de 100 elementos.\n");
    }
    else
    {
        leerVector(vec1,longitud);
        leerVector(vec2,longitud);       
    }

    producto(vec1,vec2,longitud,Vprod);

    imprimirVector(Vprod,longitud);


        


    

    return(0);
}