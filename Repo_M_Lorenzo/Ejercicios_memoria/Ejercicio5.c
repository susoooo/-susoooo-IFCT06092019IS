#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int numCarac;
    int contador;
    int contador2;
    int longitud;
    int long_ant[1024];
    char buffer[1024];
    char * memoria01;

    long_ant[0]=0;
    
    for(contador=0;contador<1024;contador++)
    {
        buffer[contador]=0;
    }

    printf("¿Cuantas cadenas desea introducir?\n");
    scanf("%d",&numCarac);

    memoria01 = (char *) malloc(((sizeof(char))*1024+long_ant[0]));

    printf("Introduzca las cadenas...\n");
    getchar();
    for(contador=0;contador<numCarac;contador++)
    {
        gets((memoria01+(long_ant[contador])));
        strcpy(buffer,(memoria01+long_ant[contador]));
        longitud=strlen(buffer);
        memoria01 = realloc (memoria01,(((sizeof(char))*(longitud))+long_ant[contador]));
        //memoria01 = (char *) malloc((((sizeof(char))*(longitud))+long_ant[contador]));
        long_ant[contador+1]=longitud+long_ant[contador];
    }

    

    for(contador=0;contador<numCarac;contador++)
    {
        puts((memoria01+(long_ant[contador])));
        
    }
    printf("\n");

    free(memoria01);
    
    return(0);
}