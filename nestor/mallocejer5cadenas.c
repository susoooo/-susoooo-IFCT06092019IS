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

printf("¿Cuantas frases o cadenas de caracteres desea introducir? = ");
scanf("%d",&n);
printf("\nHemos reservado espacio en memoria para %d frases o cadenas de caracteres, cada una con 50 caracteres como maximo\n\n",n);
 memoria01=(char*)malloc(sizeof(char)*n*50);
getchar();
for(contador=0;contador<n;contador++)
    {
    printf("Introduzca la %dª cadena de caracteres o frase = ",contador+1);
    //scanf("%s",memoria01+(contador*50));para una cadena sin espacios;
    gets(memoria01+(contador*50));
    }

    
//getchar();
printf("\nLISTADO DE FRASES O CADENA DE CARACTERES \n");

for(contador2=0;contador2<n;contador2++)
  {  
   puts(memoria01+(contador2*50));
  }
  printf("\n\n");
free(memoria01);
return(0);
}