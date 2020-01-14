#include <stdio.h>
#include <math.h>

main()
{

int inicio;
int numast;
inicio=0;
numast=0;


printf("Cantos asteriscos desexas imprimir? \n");
scanf("%d",&numast);

printf("\n");

for (inicio=1;inicio<=numast;inicio=inicio+1)
{
printf("* \n");
}

}

