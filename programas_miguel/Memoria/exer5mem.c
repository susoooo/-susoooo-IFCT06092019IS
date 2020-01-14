/*5 Idem a 1, pero en lugar de caracteres, con cadenas de caracteres de
hasta 50 caracteres (reservar 50 posiciones para cada cadena).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

int n;
char  *cadea;
int contador;
int contador2;
contador=0;
contador2=0;

printf("Cantas cadeas queres introducir? \n");
scanf("%d",&n);
getchar();

cadea= (char *) malloc(sizeof(char)*n*50);
printf("Reservaches espazo para %d cadeas de caracteres \n",n);

for (contador=0;contador<n*50;contador=contador+50)
{
printf("Ingresa a cadea de caracteres: \n");
gets(cadea+contador);

}

for (contador2=0;contador2<n*50;contador2=contador2+50)
{
printf("Imprimiches a frase: \n");
puts(cadea+contador2);
printf("\n"); 

}

free(cadea);

return(0);
}