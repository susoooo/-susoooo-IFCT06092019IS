#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define FILE int

int main()
{
    //FILE * fopen (char* nombre, char* modo);
    FILE * pfich;
    void *pDatos;
    int leidos;

    pfich=fopen("prueba.txt","rt");
    if(pfich==0)
    {
        perror("Ha habido un error\n");
    }
    else
    {
    
        pDatos=malloc(sizeof(char));

    
        do
        {     
            leidos=fread(pDatos,sizeof(char),1,pfich);
            printf("%s",pDatos);
        } while (!feof(pfich));
        fclose(pfich);
        free(pDatos);
    }
        
    return(0);
}