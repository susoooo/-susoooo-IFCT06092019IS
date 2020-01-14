#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

int menu()
    {
        int opcion;
        printf("DATOS DOS XOGADORES\n");
        printf("1-Añadir ficha.\n");
        printf("2-Listar nombres.\n");
        printf("3-Listar alturas.\n");
        printf("4-Listar edades.\n");
        printf("5-Buscar por nombre.\n");
        printf("6-Jugador mas veterano\n");
        printf("7-Jugador mas alto\n");
        printf("8-Jugador mas joven.\n");
        printf("9-Jugador mas bajo\n");
        printf("10-Eliminar ficha.\n");
        printf("11-Salir.\n");

        scanf("%d",&opcion);

        return(opcion);
    }
