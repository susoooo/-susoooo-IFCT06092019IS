#include<stdio.h>
#include"productos.h"

void cargar(tproducto productos[CANT])
{
    int f;
    for(f=0;f<CANT;f++)
    {
        printf("Ingrese el codigo:");
        scanf("%i",&productos[f].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion:");
        gets(productos[f].descripcion);
        printf("Ingrese el precio:");
        scanf("%f",&productos[f].precio);
    }
}

void imprimir(tproducto productos[CANT])
{
    int f;
    for(f=0;f<CANT;f++)
    {
        printf("Codigo:%i\n",productos[f].codigo);
        printf("Descripcion:%s\n",productos[f].descripcion);
        printf("Precio:%0.2f\n",productos[f].precio);
    }
    printf("\n\n");
}
