#include <stdio.h>
#include <math.h>
main()
{
printf("\n    - Hola soy el programa AÑO diseñado por Nestor Rois para calcular cuanto tiempo ha pasado entre dos fechas - \n");

int ano1;
int ano2;
int diferencia;

ano1=0;
ano2=0;
diferencia=0;

printf("\nPor favor introduce el año de la primera fecha  = ");
scanf("%d",&ano1);
printf("\nPor favor introduce el año de la segunda fecha  = ");
scanf("%d",&ano2);
if (ano1==ano2)
printf("\n  Las dos fechas son iguales hay 0 años de diferencia\n\n");
else
   {
     if (ano1>ano2)
        {
        diferencia=(ano1-ano2);
        printf("\nhay %d años entre %d y %d\n\n",diferencia,ano1,ano2);
        }
   
        if (ano1<ano2)
           {
           diferencia=(ano2-ano1);
           printf("\nhay %d años entre %d y %d\n\n",diferencia,ano2,ano1);
           }
           }
}       
 
