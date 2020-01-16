#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE * pfich; 
    void *pDatos;
    int leidos;
    pfich=fopen("/home/nestor/Documentos/miarchivo.txt","rt");
    pDatos=malloc(sizeof(char));
    do
     {
     leidos = fread(pDatos,sizeof(char),1,pfich);
     printf("%c",pDatos);
     }
    while(!feof(pfich));// EOF = End OF File
    fclose(pfich);
    free(pDatos);
    return(0);
}

size_t fclose(FILE *fichero);

size_t fread(void *puntero,size_t tamanho,size_t nregistros,FILE *fichero)

/*sizeof(char)*5
sizeof(int)
sizeof(int)*2
sizeof(struct xogador)*/



/*r: solo lectura.Debe existir.
w: escritura. fichero novo. sobreescribe.
a: añadir. coloca al final archivo. si no existe lo crea.
r+:leer y escribir.El archivo debe existir.
w+:leer y escribir.fichero novo. sobreescribe.
a+:añadir, leer y escribir. se coloca al final. Si no existe, crea.
t:texto.
b:binario.
"rwa" ="a+"*/