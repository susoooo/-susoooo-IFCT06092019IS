#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE * fichero;
    void *pDatos;
    char buffer[1024];
    int vLeido;
    int opcion;


    fichero=fopen("insultator.txt","wt");
    pDatos=malloc(sizeof(char)*1024);

perror("");

    	memset(buffer,0,1024);
        strcpy(buffer,"Papanatas Paspan Inutil Imbecil Rapatundas Babeco Fodecadelas Empreñaburras Borrego Papon Zarapastroso Marica Juladron Mamon Cabron Castron Anormal Tuzaro");
        
        vLeido=fwrite(buffer,sizeof(char),strlen(buffer),fichero);
        
        
        if(vLeido!=strlen(buffer))
        {
            perror("Ha habido un error\n");
        }
        
       
   fclose(fichero);
    free(pDatos);
    
    return(0);
}
