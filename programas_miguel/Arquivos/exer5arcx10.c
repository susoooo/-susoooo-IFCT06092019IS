
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
//int lidos;
char nome[80]; //definimos nome como un array porque o nome do arquivo ten máis dun caracter

printf("Introduce o nome do arquivo que queres copiar (incluíndo extensión do mesmo): \n");
gets(nome); //recollemos na variable nome o introducido por teclado (con gets porque é unha cadea)

pfich=fopen(nome, "r"); //abrimos o arquivo pasado por teclado
//pfich=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/a_copiar.odt","r");


if (pfich!=NULL) //Comprobamos se existe. Se é NULL non se executaría o que segue
{
    pfich2=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/copia_de.odt","w");
    if(pfich2!=0)
    {
        pDatos=malloc(sizeof(char)*10); //reservamos 10 espazos

        do
            {
            fread(pDatos,sizeof(char),10,pfich); //lemos 10 a 10
            fwrite(pDatos,sizeof(char),10,pfich2);
            printf("*");

            }

        while(!feof(pfich));

        fclose (pfich2);
        free(pDatos);
    }  
    else
    {
        printf("Non foi posible abrir o arquivo copia_de\n");
    }
    fclose (pfich);     
}

else
{
    printf("O arquivo que queres copiar non existe\n");
}

}
