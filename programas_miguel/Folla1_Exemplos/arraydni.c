#include <stdio.h>
#include <math.h>

int main()
{

int contador;
int meu_num_dni[8]={0,0,0,0,0,0,0,0};

printf("Introduce número de DNI:\n");

for(contador=0;contador<8;contador++)
{
scanf("%d",&meu_num_dni[contador]);
}

for(contador=0;contador<8;contador++)
{
printf("%d",meu_num_dni[contador]);
}

printf("\nPrograma rematado\n");

return 0;
}
