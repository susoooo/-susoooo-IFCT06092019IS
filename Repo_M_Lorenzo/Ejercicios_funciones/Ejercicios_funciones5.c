#include <stdio.h>
#include <math.h>
#include <string.h>

int numeroPrimo(int num)
{
    int primo;

    primo=0;

    if(num%2!=0 && num%3!=0 && num%num==0)
    {
        primo=1;
    }
    else
    {
        primo=0;
    }
    

    
    return(primo);
}

int main()
{
	int numero;
    
    numero=0;

    printf("Introduzca un numero\n");
    scanf("%d",&numero);

    if(numeroPrimo(numero)==1)
    {
        printf("%d es numero primo\n", numero);
    }
    else
    {
        printf("%d no es numero primo\n",numero);
    }
    

	return(0);
}