#include <stdio.h>
#include"jugadores.h"

int main()
{
    int opcion;
    opcion=0;

    do
	{
        printf("\n1-Añadir datos\n2-Listar nombres\n3-Listar alturas\n4-Listar edades\n5-Buscar jugador\n6-Jugador más veterano\n7-Jugador más alto\n8-Jugador más benjamín\n9-Jugador más bajo\n10-Eliminar ficha\n0-Salir\n");
        scanf("%d", &opcion);
        switch(opcion)
		{
			case 1:
                insertar();
				break;
			case 2:
                nombres();
				break;
			case 3:
                alturas();
                break;
			case 4:
                edades();
                break;
            case 5:
                buscar();
                break;
            case 6:
                veterano();
                break;
            case 7:
                alto();
                break;
            case 8:
                benjamin();
                break;
            case 9:
                bajo();
                break;
            case 10:
                eliminar();
                break;
			case 0: break;
			default: printf("Opción no válida\n");
		}
	}
	while(opcion!=0);

    return(0);
}
