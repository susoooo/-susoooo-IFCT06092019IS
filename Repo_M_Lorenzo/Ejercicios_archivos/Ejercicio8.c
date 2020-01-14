#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct xogador
    {
        char nombre[50];
        char altura[3];
        char edad[2];
    };

struct xogador datos()
{
    struct xogador puntero;
    printf("Introduzca el nombre:\n");
    scanf("%s",puntero.nombre);
    printf("Introduzca la altura (cm):\n");
    scanf("%s",puntero.altura);
    printf("Introduzca la edad:\n");
    scanf("%s",puntero.edad);
    

    return(puntero);

}
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

int main()
{
    FILE * pFichero;
    char *pRuta;
    int seleccion;
    
    struct xogador *paisano;
    void *pDatos;
    paisano=malloc(sizeof(struct xogador));

    

    seleccion=menu();

    if(seleccion!=11)
    {
        pRuta=malloc(sizeof(char)*1024);
        printf("Introduzca la ruta de la imagen:\n");
        scanf("%s",pRuta);
        pFichero=fopen(pRuta,"at+");
        if(pFichero==0)
        {
            perror("Ha habido un error\n");
        }
        else
        {
        
            do
            {
                switch (seleccion)
                {
                    case 1://Añadir ficha
                    {
                        *paisano=datos();
                        fwrite(paisano,sizeof(struct xogador),1,pFichero);
                        break;
                    }
                                       
                    case 2://Listado por nombre
                    {
                        rewind(pFichero);
                        do
                        {   
                            fread(paisano,sizeof(struct xogador),1,pFichero);
                            printf("%s\n",paisano->nombre);                            
                        }while (!feof(pFichero));                     

                        break;
                    }  

                    case 3://Listado por altura
                    {
                        rewind(pFichero);
                        do
                        {   
                            fread(paisano,sizeof(struct xogador),1,pFichero);
                            printf("%s\n",paisano->altura);                            
                        }while (!feof(pFichero));  

                        break;                                                                                                      
                    }

                    case 4://Listado por edades
                    {
                        rewind(pFichero);
                        do
                        {   
                            fread(paisano,sizeof(struct xogador),1,pFichero);
                            printf("%s\n",paisano->altura);                            
                        }while (!feof(pFichero));  

                        break; 

                    } 

                    case 5://Buscar por nombre
                    {
                       char nombre[50];
                       rewind(pFichero);
                       printf("Introduzca el nombre a buscar:\n");
                       scanf("%s",&nombre);

                        do
                        {   
                            fread(paisano,sizeof(struct xogador),1,pFichero);
                            if(strcmp(nombre,paisano->nombre)==0)
                            {
                                printf("%s\n",paisano->nombre);
                                printf("%s\n",paisano->altura);
                                printf("%s\n",paisano->edad);
                            }
                            else
                            {
                                printf("Nombre no encontrado\n");
                            }
                            
                                                        
                        }while (!feof(pFichero));  

                        break;  
                    }       
                    default:
                    {
                        break;
                    }
                        
                }
        
                seleccion=menu();
            } while (seleccion!=11);
        }
    }
        
        

    

    free(pRuta);
    free(paisano);
    fclose(pFichero);
    return(0);
}