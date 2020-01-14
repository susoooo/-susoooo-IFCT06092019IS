#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
int contador;
int contador2;
int n;
char * memoria01;

contador =0;
contador2=0;

printf("¿Cuantos caracteres desea introducir? = ");
scanf("%d",&n);
printf("\nHemos reservado espacio en memoria para %d caracteres\n\n",n);
memoria01=(char*)malloc(sizeof(char)*n);
for(contador=0;contador<n;contador++)
    {
    getchar();
    printf("Introduzca el %dº caracter = ",contador+1);
    scanf("%c",(memoria01+contador));
    }

    
//getchar();
printf("\nLISTADO DE CARACTERES = ");

for(contador2=0;contador2<n;contador2++)
  {  
   printf("%c,",*(memoria01+contador2));
  }
free(memoria01);
return(0);
}