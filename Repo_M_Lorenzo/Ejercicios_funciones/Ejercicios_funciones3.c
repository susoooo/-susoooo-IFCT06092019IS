#include <stdio.h>
#include <math.h>
#include <string.h>

int cod_error=0;

float multiplicacion (int num1, int num2, int num3, int num4)
{
    float resultado;
    resultado=0;
    if(num1!=0 && num2!=0 && num3!=0 && num4!=0)
    {
        resultado=num1*num2*num3*num4;
    }
    else
    {
        cod_error=-1000;
    }
    

    return(resultado);
}
int datos()
{
    int dato;
    dato=0;
    printf("Introduzca el numero:\n");
    scanf("%d",&dato);

    return(dato);
}

int main()
{
	int numero1;
    int numero2;
    int numero3;
    int numero4;
    float multi;

    numero1=datos();
    numero2=datos();
    numero3=datos();
    numero4=datos();

    multi=multiplicacion(numero1,numero2,numero3,numero4);

    if(multi!=0)
        {
            printf("El resultado de la multiplicacion de %d, %d, %d y %d es: %f\n",numero1,numero2,numero3,numero4,multi);
        }
    else
        {
            printf("Error, ha introducido un 0\n");
        }
    

	return(0);
}