/*6.Crear un programa que abra un archivo de texto y que genere otro fichero con 
los mismos contenidos que el original, pero con las 'a' cambiadas por 'e'*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
FILE * pfich; 
FILE * pfich2;
void *pDatos;


pfich=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/arquivo_a.txt","r");
pfich2=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/arquivo_e.txt","w");

pDatos=malloc(sizeof(char));

do
    {
    fread(pDatos,sizeof(char),1,pfich);
    if (*(char*)pDatos=='a'||*(char*)pDatos=='A')
    {
        *(char*)pDatos='e';
    }
    
    fwrite(pDatos,sizeof(char),1,pfich2);
    printf("*");

    }

while(!feof(pfich));

    fclose (pfich);
    fclose (pfich2);
    free(pDatos);

}

