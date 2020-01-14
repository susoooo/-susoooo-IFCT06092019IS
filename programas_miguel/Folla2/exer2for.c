#include <stdio.h>
#include <math.h>

main()
{

int numero;
int numfinal;
numero=1;
numfinal=0;

printf("Por favor, introduce o número final deseado: \n");
scanf("%d",&numfinal);

printf("\n");

for(numero=1;numero<=numfinal;numero=numero+1)
{
printf("%i\n",numero);
}

}


