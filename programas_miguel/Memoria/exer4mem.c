//4Idem a 4 pero con números enteros.

#include <stdio.h>
#include<stdlib.h>



int main()
{

int n;
int  *cadea;
int contador;
int contador2;
contador=0;
contador2=0;

printf("Cantos números enteiros queres introducir? \n");
scanf("%d",&n);
getchar();

cadea= (int *) malloc(sizeof(int)*n);
printf("Reservaches espazo para %d números reais \n",n);

for (contador=0;contador<n;contador++)
{
printf("Ingresa o número: \n");
scanf("%d",(cadea+contador));
getchar();
}

for (contador2=0;contador2<n;contador2++)
{
printf("Imprimiches o caracter: %d", *(cadea+contador2));
printf("\n");
}

free(cadea);

return(0);
}