#include <stdio.h>
#include <string.h>

int main()
{
    struct biblioteca
    {
        char titulo[30];
        char autor[30];
        char editorial[30];
        int ano;
    };
    struct biblioteca libros[20];
    int contador;
    int opcion;
    int numero;
    char compara[30];
    int comp;
    char *ret;

    contador=0;
    opcion=0;
    numero=3;
    comp=0;

    printf("Introduzca datos para 20 libros\n");
	for (contador=0;contador<numero;contador++)
	{
		printf("Libro %d\n",contador+1);
		printf("Título: ");
		gets(libros[contador].titulo);
		printf("Autor: ");
		gets(libros[contador].autor);
		printf("Editorial: ");
		gets(libros[contador].editorial);
		printf("Año: ");
		scanf("%d", &(libros[contador].ano));
		printf("\n");
		getchar();
	}

	do
	{
	    printf("\n1-Listar todos los libros\n2-Listar todos los libros de un autor\n3-Listar todos los libros de un año\n4-Listar todos los libros anteriores a un año\n5-Listar todos los libros de una editorial\n6-Salir\n");
        scanf("%d", &opcion);
        switch(opcion)
		{
			case 1:
                for (contador=0;contador<numero;contador++)
				{
				    printf("%d - ",contador+1);
                    puts(libros[contador].titulo);
				}
				break;
			case 2:
                getchar();
                printf("Introduzca el nombre del autor: ");
                gets(compara);
                for(contador=0;contador<numero;contador++)
                {
                    if(strcmp(compara, libros[contador].autor)==0)
                    {
                        printf("%d - ",contador+1);
                        puts(libros[contador].titulo);
                    }
                }
				break;
			case 3:
                printf("Introduzca el año: ");
                scanf("%d", &comp);
                for(contador=0;contador<numero;contador++)
                {
                    if(comp==libros[contador].ano)
                    {
                        printf("%d - ",contador+1);
                        puts(libros[contador].titulo);
                    }
                }
                break;
			case 4:
                printf("Introduzca el año: ");
                scanf("%d", &comp);
                for(contador=0;contador<numero;contador++)
                {
                    if(comp>libros[contador].ano)
                    {
                        printf("%d - ",contador+1);
                        puts(libros[contador].titulo);
                    }
                }
                break;
            case 5:
                getchar();
                printf("Introduzca el nombre de la editorial: ");
                gets(compara);
                for(contador=0;contador<numero;contador++)
                {
                    //ret = strstr(compara, libros[contador].editorial);
                    //if(strcmp(ret, libros[contador].editorial)==0)
                    if(strcmp(compara, libros[contador].editorial)==0)
                    {
                        printf("%d - ",contador+1);
                        puts(libros[contador].titulo);
                    }
                }
                break;
			case 6: break;
			default: printf("Opción no válida\n");
		}
    }
	while(opcion!=6);
}
