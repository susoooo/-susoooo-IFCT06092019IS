#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//#define FILE int

int main()
{
    FILE * fichero;
    void *pDatos;
    char buffer[1024];
    int vLeido;
    int opcion;


    fichero=fopen("textos.txt","wt");
    pDatos=malloc(sizeof(char)*1024);
    
    do
    {
        printf("Introduzca el texto deseado(maximo 1024 caracteres):\n");
        fgets(pDatos,1024,stdin);
        strcpy(buffer,pDatos);
        vLeido=fwrite(pDatos,sizeof(char),strlen(buffer),fichero);
        
        
        if(vLeido!=strlen(buffer))
        {
            perror("Ha habido un error\n");
        }
        
        printf("¿Desea introducir mas texto? (Pulse 0 para salir, 1 para continuar))\n");
        scanf("%d",&opcion);
        getchar();

                  
        
    } while (opcion!=0);
    
    free(pDatos);
    fclose(fichero);
    return(0);

}