#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct jugador
    {
        char nombre[30];
        int edad;
        float altura;
    };
    struct jugador jugadores;

    FILE * pfich;
    FILE * pfichcopia;

    char compara[30];
    int opcion;
    int escritos;
    int leidos;
    int mayor;
    int menor;
    int existe;
    float masalto;
    float masbajo;

    opcion=0;
    escritos=0;
    leidos=0;
    mayor=0;
    masalto=0.0;
    menor=0;
    masbajo=0.0;
    existe=0;

    do
	{
        printf("\n1-Añadir datos\n2-Listar nombres\n3-Listar alturas\n4-Listar edades\n5-Buscar jugador\n6-Jugador más veterano\n7-Jugador más alto\n8-Jugador más benjamín\n9-Jugador más bajo\n10-Eliminar ficha\n0-Salir\n");
        scanf("%d", &opcion);
        switch(opcion)
		{
			case 1:
                pfich=fopen("jugadores.txt", "ab");
                printf("Introduzca datos para un jugador\n");
                getchar();
                printf("Nombre: ");
                gets(jugadores.nombre);
                printf("Edad: ");
                scanf("%d", &(jugadores.edad));
                printf("Altura: ");
                scanf("%f", &(jugadores.altura));
                printf("\n");
                escritos=fwrite(&jugadores, sizeof(struct jugador), 1, pfich);
                fclose(pfich);
				break;
			case 2:
			    pfich=fopen("jugadores.txt", "rb");
			    printf("Nombres:\n");
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(!feof(pfich))
                    {
                        printf("%s\n", jugadores.nombre);
                    }
                }
                while (!feof(pfich));
                fclose(pfich);
				break;
			case 3:
                pfich=fopen("jugadores.txt", "rb");
                printf("Alturas:\n");
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(!feof(pfich))
                    {
                        printf("%.2f\n", jugadores.altura);
                    }
                }
                while (!feof(pfich));
                fclose(pfich);
                break;
			case 4:
                pfich=fopen("jugadores.txt", "rb");
                printf("Edades:\n");
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(!feof(pfich))
                    {
                        printf("%d\n", jugadores.edad);
                    }
                }
                while (!feof(pfich));
                fclose(pfich);
                break;
            case 5:
                existe=0;
                pfich=fopen("jugadores.txt", "rb");
                getchar();
                printf("Introduzca el nombre del jugador: ");
                gets(compara);
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(strcmp(compara, jugadores.nombre)==0)
                    {
                        if(!feof(pfich))
                        {
                            printf("Altura - %.2f\n",jugadores.altura);
                            printf("Edad - %d\n",jugadores.edad);
                        }
                        existe=1;
                    }
                }
                while (!feof(pfich));
                if(existe==0)
                {
                    printf("El jugador no existe\n");
                }
                fclose(pfich);
                break;
            case 6:
                pfich=fopen("jugadores.txt", "rb");
                mayor=0;
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(mayor < jugadores.edad)
                    {
                        mayor=jugadores.edad;
                    }
                }
                while (!feof(pfich));
                fseek(pfich,0,0);
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(!feof(pfich))
                    {
                        if(mayor==jugadores.edad)
                        {
                            printf("El jugador más veterano es: ");
                            printf("%s\n", jugadores.nombre);
                            printf("Edad - %d\n",jugadores.edad);
                            printf("Altura - %.2f\n",jugadores.altura);
                        }
                    }
                }
                while (!feof(pfich));
                fclose(pfich);
                break;
            case 7:
                pfich=fopen("jugadores.txt", "rb");
                masalto=0;
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(masalto < jugadores.altura)
                    {
                        masalto=jugadores.altura;
                    }
                }
                while (!feof(pfich));
                fseek(pfich,0,0);
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(!feof(pfich))
                    {
                        if(masalto==jugadores.altura)
                        {
                            printf("El jugador más alto es: ");
                            printf("%s\n", jugadores.nombre);
                            printf("Edad - %d\n",jugadores.edad);
                            printf("Altura - %.2f\n",jugadores.altura);
                        }
                    }
                }
                while (!feof(pfich));
                fclose(pfich);
                break;
            case 8:
                pfich=fopen("jugadores.txt", "rb");
                menor=1000;
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(menor > jugadores.edad)
                    {
                        menor=jugadores.edad;
                    }
                }
                while (!feof(pfich));
                fseek(pfich,0,0);
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(!feof(pfich))
                    {
                        if(menor==jugadores.edad)
                        {
                            printf("El jugador más benjamín es: ");
                            printf("%s\n", jugadores.nombre);
                            printf("Edad - %d\n",jugadores.edad);
                            printf("Altura - %.2f\n",jugadores.altura);
                        }
                    }
                }
                while (!feof(pfich));
                fclose(pfich);
                break;
            case 9:
                pfich=fopen("jugadores.txt", "rb");
                masbajo=1000;
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(masbajo > jugadores.altura)
                    {
                        masbajo=jugadores.altura;
                    }
                }
                while (!feof(pfich));
                fseek(pfich,0,0);
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(!feof(pfich))
                    {
                        if(masbajo==jugadores.altura)
                        {
                            printf("El jugador más bajo es: ");
                            printf("%s\n", jugadores.nombre);
                            printf("Edad - %d\n",jugadores.edad);
                            printf("Altura - %.2f\n",jugadores.altura);
                        }
                    }
                }
                while (!feof(pfich));
                fclose(pfich);
                break;
            case 10:
                existe=0;
                pfich=fopen("jugadores.txt", "rb");
                getchar();
                printf("Introduzca el nombre del jugador a eliminar: ");
                gets(compara);
                do
                {
                    leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                    if(strcmp(compara, jugadores.nombre)==0)
                    {
                        existe=1;
                    }
                }
                while (!feof(pfich));
                fseek(pfich,0,0);
                if(existe==1)
                {
                    pfichcopia=fopen("copiajugadores.txt", "wb");
                    do
                    {
                        leidos=fread(&jugadores, sizeof(struct jugador), 1, pfich);
                        if(strcmp(compara, jugadores.nombre)!=0)
                        {
                            if(!feof(pfich))
                            {
                                escritos=fwrite(&jugadores, sizeof(struct jugador), 1, pfichcopia);
                            }
                        }
                    }
                    while (!feof(pfich));
                    remove ("jugadores.txt");
                    fclose(pfichcopia);
                    rename ("copiajugadores.txt","jugadores.txt");
                    printf("Jugador eliminado\n");
                }
                else
                {
                    printf("El jugador no existe\n");
                }
                fclose(pfich);
                break;
			case 0: break;
			default: printf("Opción no válida\n");
		}
	}
	while(opcion!=0);

    return(0);
}
