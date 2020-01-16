#include <stdio.h>
#include <math.h>
main()
{
printf("\n    - Hola soy el programa >< diseñado por Nestor Rois para calcular el num mayor y menor entre dos  numeros - \n");

int numero1;
int numero2;
 
numero1=0;
numero2=0;

printf("\nPor favor introduce el primer numero  = ");
scanf("%d",&numero1);
printf("\nPor favor introduce el segundo numero  = ");
scanf("%d",&numero2);
if(numero1>numero2)
printf("%d es mayor que %d por lo tanto %d es menor que %d",numero1,numero2,numero2,numero1);
       else
         {
          if(numero1<numero2)
          printf("%d es mayor que %d por lo tanto %d es menor que %d",numero2,numero1,numero1,numero2);
         }
         if(numero1==numero2)
         printf("los numeros son iguales");
}
