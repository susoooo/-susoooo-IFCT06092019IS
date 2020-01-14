#include <stdio.h>
#include <math.h>

main()
{

//VARIABLES

int numero;
int cifras;

//INICIALIZACION

numero=0;
cifras=0;



//PROGRAMA

printf("CONTADOR DE CIFRAS DE UN NÚMERO\n");
printf("Introduzca un numero\n");
scanf("%d",&numero);

	if(numero/10<1)
	{
	printf("%d tiene 1 cifra\n",numero);
	}
	
	if(numero/10>=1 && numero/10<10)
	{
	printf("%d tiene 2 cifras\n",numero);
	}

	if(numero/10>=10 && numero/10<100)
	{
	printf("%d tiene 3 cifras\n",numero);
	}
	
	if(numero/10>=100 && numero/10<1000)
	{
	printf("%d tiene 4 cifras\n",numero);
	}
	

/*while(numero/10>0)
    {
        numero=numero/10;
        cifras++;
    }
    printf("%d tiene %d cifras\n",numero,cifras);*/

}
