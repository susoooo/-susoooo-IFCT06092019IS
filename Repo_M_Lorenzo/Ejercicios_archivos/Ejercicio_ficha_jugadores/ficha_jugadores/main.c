#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "datos.h"

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

                    case 6://Jugador mas veterano;
                    {
                        struct xogador *veterano;
                        int maxEdad;
                        veterano=malloc(sizeof(struct xogador));
                        rewind(pFichero);
                        maxEdad=0;


                        do
                        {
                            fread(paisano,sizeof(struct xogador),1,pFichero);

                            if(((int)paisano->edad)>maxEdad)
                            {
                                veterano=paisano;
                            }



                        }while (!feof(pFichero));

                        printf("%s\n",veterano->nombre);
                        printf("%s\n",veterano->altura);
                        printf("%s\n",veterano->edad);

                        break;
                    }

                    case 7://Jugador mas alto
                    {
                        struct xogador *veterano;
                        int maxaltura;
                        veterano=malloc(sizeof(struct xogador));
                        rewind(pFichero);
                        maxaltura=0;


                        do
                        {
                            fread(paisano,sizeof(struct xogador),1,pFichero);

                            if(((int)paisano->altura)>maxaltura)
                            {
                                veterano=paisano;
                            }



                        }while (!feof(pFichero));

                        printf("%s\n",veterano->nombre);
                        printf("%s\n",veterano->altura);
                        printf("%s\n",veterano->edad);

                        break;
                    }

                    case 10://Eliminar ficha
                    {

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

