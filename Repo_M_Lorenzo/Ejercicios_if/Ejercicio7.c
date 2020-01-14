#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

int numero1;



//INICIALIZACION

numero1=0;



//PROGRAMA

printf("¿AÑO BISIESTO O NO?\n");
printf("Introduzca el año\n");
scanf("%d",&numero1);
	if (numero1%4==0 && numero1%100!=0 || numero1%400==0)
	{
        printf("ES BISIESTO\n");
	}
    	else
	{
        printf("NO ES BISIESTO\n");
	}

}
