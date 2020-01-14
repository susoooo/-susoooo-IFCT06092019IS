#include <stdio.h>
#include <math.h>
#include <string.h>

#define limite 100

datos()
{
    int dato;
    printf("\nIntroduzca el dato:\n");
    scanf("%d",&dato);
    return(dato);
}

int main()
{
    int comparacion[limite];
    int cuenta[limite];
    int contador1;
    int contador2;
    int valor;
    int salir=1;

    for(contador1=1;contador1<=limite;contador1++)
        {
            cuenta[contador1]=0;
        }
    do
    {
	    valor=datos();
        for(contador1=1;contador1<=limite;contador1++)
        {
            comparacion[contador1]=contador1;
        }

        for(contador1=1;contador1<=limite;contador1++)
        {
            if(valor==comparacion[contador1])
            {
                cuenta[contador1]=cuenta[contador1]+1;
            }
        }

        for(contador1=1;contador1<=limite;contador1++)
        {
            printf("\n%d:",contador1);
            for(contador2=1;contador2<=cuenta[contador1];contador2++)
            {
                printf("*");
        
            }
        }
        printf("\nPulse 0 para salir o 1 para continuar\n");
        scanf("%d",&salir);

    }while(salir!=0);






	
	
	
	
	
	
	return(0);
}