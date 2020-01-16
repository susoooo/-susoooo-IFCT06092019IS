#include <stdio.h>
#include <string.h>
#include <math.h>

int datos()
{
    int numero;

    printf("Intrduzca un numero:\n");
    scanf("%d",&numero);


    return(numero);
}

double CalcularSerie(double x, int n)
{
    double resultado;
    int contador;
    resultado=0;

    for(contador=n;contador>0;contador--)
    {
        if(contador%2==0)
        {
            resultado=resultado-(1/pow(x,contador));
        }
        else
        {
            resultado=resultado+(1/pow(x,contador));
        }
    }
    return(resultado);
}

/*void CalcularSeriePunt(double x, int n, double *resultado)
{
    int contador;

    for(contador=n;contador>0;contador--)
    {
        if(contador%2==0)
        {
            *resultado=(*(resultado))-(1/pow(x,contador));
        }
        else
        {
            *resultado=(*(resultado))+(1/pow(x,contador));
        }
    }
}*/

int main()
{
    int base;
    int exponente;
    double serie;
    double *pserie;



    base=datos();
    exponente=datos();

    serie=CalcularSerie((double)base,exponente);

    //CalcularSeriePunt((double)base,exponente,pserie);

    printf("El resultado de la serie con variables es: %f\n",serie);
    printf("El resultado de la serie con punteros es: %f\n",*pserie);





    return(0);
}