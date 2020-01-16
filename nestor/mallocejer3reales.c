#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
int contador;
int contador2;
int n;
int * memoria01;

contador =0;
contador2=0;

printf("¿Cuantos numeros enteros desea introducir? = ");
scanf("%d",&n);
printf("\nHemos reservado espacio en memoria para %d numeros\n\n",n);
memoria01=(int*)malloc(sizeof(int)*n);
for(contador=0;contador<n;contador++)
    {
    getchar();
    printf("Introduzca el %dº caracter = ",contador+1);
    scanf("%d",(memoria01+contador));
    }

    
//getchar();
printf("\nLISTADO DE CARACTERES = ");

for(contador2=n-1;contador2>=0;contador2--)
  {  
   printf("%d,",*(memoria01+contador2));
  }
free(memoria01);
return(0);
}