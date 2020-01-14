#include <stdio.h>
//#define FILE int

int main()
{
    //FILE * fopen (char* nombre, char* modo);
    FILE * pfich;
    void *pDatos;
    int leidos;

    pfich=fopen("texto.txt","rt");
    pDatos=malloc(sizeof(char));

    do
    {     
        leidos=fread(pDatos,sizeof(char),1,pfich);
        printf("%c",pDatos);
    } while (!feof(pfich));
    
    fclose(pfich);
    free(pDatos);
    return(0);
}
