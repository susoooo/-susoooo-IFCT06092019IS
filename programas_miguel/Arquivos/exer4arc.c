//4.Crear un programa que lea el archivo textos.txt y 
//lo muestre por pantalla.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
FILE * pfich; 
void *pDatos;
int lidos;
int contador;
contador=0;

pfich=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/textos.txt","r");
pDatos=malloc(sizeof(char)); //pode facerse cunha variable pero neste caso creamos espazo de memoria e gardamos no punteiro pDatos

 do
    {
    lidos = fread(pDatos,sizeof(char),1,pfich);
    printf("%c", *(char*)pDatos);

    }

while(!feof(pfich));

    fclose (pfich);
    free(pDatos);


}

