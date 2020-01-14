
#include<stdio.h>
#include"productos.h"


int main()
{
    tproducto productos[CANT];
    int opcion;
    do {
        printf("1-Carga de productos.\n");
        printf("2-Listado de productos.\n");
        printf("3-Finalizar programa..\n\n");
        printf("Elija su opcion:");
        scanf("%i",&opcion);
        switch (opcion) {
            case 1:cargar(productos);
                   break;
            case 2:imprimir(productos);
                   break;
        }
    } while(opcion!=3);

    return 0;
}
