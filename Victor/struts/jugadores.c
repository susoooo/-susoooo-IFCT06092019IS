#include <stdio.h>
#include <string.h>

int main()
{
    struct jugador
    {
        char nombre[30];
        int edad;
        float altura;
    };
    struct jugador jugadores[10];
    int contador;
    int opcion;
    int temp;
    float mayor;
    char compara[30];

    contador=0;
    opcion=0;
    temp=0;
    mayor=0.0;

    printf("Introduzca datos para 10 jugadores\n");
	for (contador=0;contador<10;contador++)
	{
		printf("Jugador %d\n",contador+1);
		printf("Nombre: ");
		gets(jugadores[contador].nombre);
		printf("Edad: ");
		scanf("%d", &(jugadores[contador].edad));
		printf("Altura: ");
		scanf("%f", &(jugadores[contador].altura));
		printf("\n");
		getchar();
	}

	do
	{
        printf("\n1-Listar nombres\n2-Listar alturas\n3-Listar edades\n4-Buscar jugador\n5-Mostrar jugador más alto\n0-Salir\n");
        scanf("%d", &opcion);
        switch(opcion)
		{
			case 1:
                for (contador=0;contador<10;contador++)
				{
				    printf("%d - ",contador+1);
                    puts(jugadores[contador].nombre);
                    printf("\n");
				}
				printf("\n");
				break;
			case 2:
                for (contador=0;contador<10;contador++)
				{
				    printf("%d - %.2f",contador+1,jugadores[contador].altura);
                    printf("\n");
				}
				printf("\n");
				break;
			case 3:
                for (contador=0;contador<10;contador++)
				{
				    printf("%d - %d",contador+1,jugadores[contador].edad);
                    printf("\n");
				}
				printf("\n");
                break;
			case 4:
			    getchar();
                printf("Introduzca el nombre del jugador: ");
                gets(compara);
                for(contador=0;contador<10;contador++)
                {
                    if(strcmp(compara, jugadores[contador].nombre)==0)
                    {
                        printf("Altura - %.2f\n",jugadores[contador].altura);
                        printf("Edad - %d\n",jugadores[contador].edad);
                    }
                }
                break;
            case 5:
                mayor=jugadores[0].altura;
                for(contador=0;contador<10;contador++)
                {
                    if(mayor < jugadores[contador].altura)
                    {
                        mayor=jugadores[contador].altura;
                        temp=contador;
                    }
                }
                printf("El jugador más alto es: ");
                puts(jugadores[temp].nombre);
                printf("Edad - %d\n",jugadores[temp].edad);
                break;
			case 0: break;
			default: printf("Opción no válida\n");
		}
	}
	while(opcion!=0);
}
