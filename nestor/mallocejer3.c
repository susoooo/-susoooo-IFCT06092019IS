#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
int contador;
int contador2;
int n;
double * memoria01;

contador =0;
contador2=0;

printf("¿Cuantos numeros enteros desea introducir? = ");
scanf("%d",&n);
printf("\nHemos reservado espacio en memoria para %d numeros\n\n",n);
memoria01=(double*)malloc(sizeof(double)*n);
for(contador=0;contador<n;contador++)
    {
    getchar();
    printf("Introduzca el %dº caracter = ",contador+1);
    scanf("%lf",(memoria01+contador));
    }

    
//getchar();
printf("\nLISTADO DE CARACTERES = ");

for(contador2=n-1;contador2>=0;contador2--)
  {  
   printf("%.0lf,",*(memoria01+contador2));
  }
free(memoria01);
return(0);
}