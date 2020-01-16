#include <stdio.h>
#include <math.h>
main()
{
printf("\n    - Hola soy el programa >< diseñado por Nestor Rois para calcular el num mayor y menor entre dos  numeros - \n");

int numero1;
int numero2;
 
numero1=0;
numero2=0;

printf("\nPor favor introduce el primer numero   = ");
scanf("%d",&numero1);
printf("\nPor favor introduce el segundo numero  = ");
scanf("%d",&numero2);
if(numero1>numero2)
printf("\n%d es mayor que %d por lo tanto %d es menor que %d\n\n",numero1,numero2,numero2,numero1);
       else
         {
          if(numero1<numero2)
          printf("\n%d es mayor que %d por lo tanto %d es menor que %d\n\n",numero2,numero1,numero1,numero2);
         }
         if(numero1==numero2)
         printf("\nlos dos numeros son iguales\n\n");
}
