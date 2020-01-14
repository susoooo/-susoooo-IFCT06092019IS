#include <stdio.h>
#include <math.h>
main()
{
printf("\n    - Hola soy el programa PAR diseñado por Nestor Rois para calcular si un numero es par o impar- \n");

int numero1;
int numero2;
int numero3;
 
numero1=0;
numero2=0;
numero3=0;

printf("\nPor favor introduce el primer numero   = ");
scanf("%d",&numero1);
printf("\nPor favor introduce el segundo numero  = ");
scanf("%d",&numero2);
printf("\nPor favor introduce el terceiro numero = ");
scanf("%d",&numero3);
if(numero1%2==0)
    {
     printf("El numero %d es par\n",numero1);
    }
    else 
       {
        printf("El numero %d es impar\n",numero1);
       }
if(numero2%2==0)
    {
     printf("El numero %d es par\n",numero2);
    }
    else 
       {
        printf("El numero %d es impar\n",numero2);
if(numero3%2==0)
    {
     printf("El numero %d es par\n",numero3);
    }
    else 
       {
        printf("El numero %d es impar\n",numero3);
       }

 }


}

