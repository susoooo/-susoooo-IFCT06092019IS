#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jugador
{
    char nombre[30];
    int edad;
    float altura;
};
struct jugador jugadores;

int insertar()
{
    FILE * pfich;
    int escritos;
    escritos=0;

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
    return(0);
}

int nombres()
{
    FILE * pfich;
    int leidos;
    leidos=0;

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
    return(0);
}

int alturas()
{
    FILE * pfich;
    int leidos;
    leidos=0;

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
    return(0);
}

int edades()
{
    FILE * pfich;
    int leidos;
    leidos=0;

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
    return(0);
}

int buscar()
{
    FILE * pfich;
    int leidos;
    int existe;
    char compara[30];
    leidos=0;
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
    return(0);
}

int veterano()
{
    FILE * pfich;
    int leidos;
    int mayor;
    leidos=0;
    mayor=0;

    pfich=fopen("jugadores.txt", "rb");
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
    return(0);
}

int alto()
{
    FILE * pfich;
    int leidos;
    float masalto;
    leidos=0;
    masalto=0.0;

    pfich=fopen("jugadores.txt", "rb");
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
    return(0);
}

int benjamin()
{
    FILE * pfich;
    int leidos;
    int menor;
    leidos=0;
    menor=1000;

    pfich=fopen("jugadores.txt", "rb");
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
    return(0);
}

int bajo()
{
    FILE * pfich;
    int leidos;
    float masbajo;
    leidos=0;
    masbajo=1000.0;

    pfich=fopen("jugadores.txt", "rb");
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
    return(0);
}

int eliminar()
{
    FILE * pfich;
    FILE * pfichcopia;
    char compara[30];
    int escritos;
    int leidos;
    int existe;
    escritos=0;
    leidos=0;
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
    return(0);
}

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
