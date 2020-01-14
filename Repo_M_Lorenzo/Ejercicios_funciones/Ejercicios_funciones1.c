#include <stdio.h>
#include <math.h>
#include <string.h>

#define CAMBIO 1.17

float datos()
{
    float dato;
    dato=0;
    printf("Introduzca la cantidad en euros (€):\n");
    scanf("%f",&dato);

    return(dato);
}

float conversion(float dato)
{
    float resultado;

    resultado=0;

    resultado=dato*CAMBIO;
    
    return(resultado);

}

int main()
{
	float euros;
    float dolares;

    euros=0;
    dolares=0;

    euros=datos();
    dolares=conversion(euros);

    printf("%f€ son %f$\n",euros,dolares);
	
	
	
	
	return(0);
}