#include <stdio.h>
main()
{
printf("    - Hola soy el programa calcuplus diseñado por Nestor Rois para hacer calculos  matematicos - \n");

int numero1;
int numero2;
int suma;
int resta;
int multiplicacion;
double division;
 
suma=0;
resta=0;
multiplicacion=0;
division=0;

printf("por favor introduce el primer numero  = ");
scanf("%d",&numero1);
printf("por favor introduce el segundo numero = ");
scanf("%d",&numero2);

suma=numero1+numero2;
resta=numero1-numero2;
multiplicacion=numero1*numero2;
division=numero1/numero2;

printf("la suma de los numeros es = %d\n",suma);
printf("la resta de los numeros es = %d\n",resta);
printf("la multiplicación de los numeros es = %d\n",multiplicacion);
printf("la división de los numeros es = %f\n",division);
}
