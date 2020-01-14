
/*5. Crear un programa capaz de copiar un fichero (word por ejemplo, o cualquier otro tipo)
en otro. El fichero creado se llamará “copia_de” y el nombre del archivo a copiar. El
fichero a copiar lo puede elegir el usuario, y si no existe debe tener la opción de escribir 
otro nombre hasta que escriba el nombre de un fichero que exista.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
FILE * pfich; 
FILE * pfich2;
void *pDatos;
int lidos;

pfich=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/a_copiar.odt","r");
pfich2=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/copia_de.odt","w");

pDatos=malloc(sizeof(char));

do
    {
    fread(pDatos,sizeof(char),1,pfich);
    fwrite(pDatos,sizeof(char),1,pfich2);
    printf("*");

    }

while(!feof(pfich));

    fclose (pfich);
    fclose (pfich2);
    free(pDatos);




}
