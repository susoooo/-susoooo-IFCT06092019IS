#include <stdio.h>
#include <string.h>
#include <math.h>

#define LIMITE 3

struct punto{
    int coordx;
    int coordy;
};

struct punto coordenadas()
{
   struct punto crd;

   printf("Introduce la coordenada X:\n");
   scanf("%d",&crd.coordx);
   printf("Introduce la coordenada Y:\n");
   scanf("%d",&crd.coordy);
   getchar();
  
 return(crd);  

}

float perim(int numPuntos, struct punto coord[LIMITE])
{
    int contador;
    float perm;
    float dist[numPuntos];
    float restax[numPuntos];
    float restay[numPuntos];
    float potenciax[numPuntos];
    float potenciay[numPuntos];



    perm=0;
    //perm=sqrt(4);
    for(contador=0;contador<numPuntos;contador++)
    {
        if(contador<=1)
        {
            restax[contador]=coord[contador+1].coordx-coord[contador].coordx;
            restay[contador]=coord[contador+1].coordy-coord[contador].coordy;
            potenciax[contador]=pow(restax[contador],2);
            potenciay[contador]=pow(restay[contador],2);
            dist[contador]=sqrt(potenciax[contador]+potenciay[contador]);
        }
        else
        {
            restax[contador]=coord[contador-2].coordx-coord[contador].coordx;
            restay[contador]=coord[contador-2].coordy-coord[contador].coordy;
            potenciax[contador]=pow(restax[contador],2);
            potenciay[contador]=pow(restay[contador],2);
            dist[contador]=sqrt(potenciax[contador]+potenciay[contador]);
        }
        
    }
    for(contador=0;contador<numPuntos;contador++)
    {
        perm=perm+dist[contador];
    }
    
    return(perm);

}

int main()
{
    int contador;
    float perimetro;

    struct punto puntos[LIMITE];

    for(contador=0;contador<LIMITE;contador++)
    {
        puntos[contador]=coordenadas();
    }

    perimetro=perim(LIMITE,puntos);
    printf("El perimetro del triangulo es: %f", perimetro);
    return(0);
}