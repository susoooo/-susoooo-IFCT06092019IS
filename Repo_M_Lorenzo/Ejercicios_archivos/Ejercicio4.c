#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * pfich;
    void *pDatos;
    int leidos;

    pfich=fopen("textos.txt","rt");
    if(pfich==0)
    {
        perror("Ha habido un error\n");
    }
    else
    {
    
        pDatos=malloc(sizeof(char)*1024);

    
        do
        {     
            leidos=fread(pDatos,sizeof(char),1024,pfich);
            puts(pDatos);
        } while (!feof(pfich));
        fclose(pfich);
        free(pDatos);
    }
        
 
    return(0);
}