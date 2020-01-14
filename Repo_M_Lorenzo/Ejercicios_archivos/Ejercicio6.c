#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * pFichero1;
    FILE * pFichero2;
    void *pDatos;
    char *pRuta;
    char *pRuta2;
    int leidos;
    int escritos;
    int comp;

    pRuta=malloc(sizeof(char)*1024);
    pRuta2=malloc(sizeof(char)*1024);

    printf("Introduzca la ruta del archivo a copiar:\n");
    scanf("%s",pRuta);
    

    pFichero1=fopen(pRuta,"r");
    pRuta2=strcat(pRuta,"copia_de_");
    pFichero2=fopen(pRuta2,"w");

    if(pFichero1==0 || pFichero2==0)
    {
        perror("Ha habido un error\n");
    }
    else
    {
        pDatos=malloc(sizeof(char));
        do
        {
            leidos=fread(pDatos,sizeof(char),1,pFichero1);
            comp=strcmp(pDatos,"a");
            
            if(comp==0)
            {
                strcpy(pDatos,"e");
                escritos=fwrite(pDatos,sizeof(char),1,pFichero2);
            }
            else
            {
                escritos=fwrite(pDatos,sizeof(char),1,pFichero2);
  
            }
            

            if(leidos!=escritos)
            {
                perror("Ha habido un error\n");
            }

    

        } while (!feof(pFichero1));
        
    }
    
    free(pRuta);
    free(pDatos);
    fclose(pFichero1);
    fclose(pFichero2);
        
 
    return(0);
}