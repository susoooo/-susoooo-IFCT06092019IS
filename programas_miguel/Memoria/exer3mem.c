//3 Idem a 3 pero con números reales.
#include <stdio.h>
#include<stdlib.h>



int main()
{

int n;
double  *cadea;
int contador;
int contador2;
contador=0;
contador2=0;

printf("Cantos caracteres queres introducir? \n");
scanf("%d",&n);
getchar();

cadea= (double *) malloc(sizeof(double)*n);
printf("Reservaches espazo para %d números reais \n",n);

for (contador=0;contador<n;contador++)
{
printf("Ingresa o caracter: \n");
scanf("%lf",(cadea+contador));
getchar();
}

for (contador2=0;contador2<n;contador2++)
{
printf("Imprimiches o caracter: %.2lf", *(cadea+contador2));
printf("\n");
}

free(cadea);

return(0);
}