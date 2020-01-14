#include <stdio.h>
#include <math.h>

main()
{

int tecla1;


printf("Por favor, pulse a tecla 1 \n");
scanf("%d",&tecla1);


while (tecla1!=1)
{
printf("Tecla incorrecta\n");
printf("Por favor, pulse a tecla 1 \n");
scanf("%d",&tecla1);
}

if (tecla1==1)
{
printf("Grazas\n");
}


}

