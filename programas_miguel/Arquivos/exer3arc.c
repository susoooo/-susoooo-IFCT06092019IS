/*3.Crear un programa que pida al usuario un texto por pantalla, 
y que guarde dicho texto en un archivo llamado textos.txt*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
FILE * pfich; 
void *pDatos;
char texto[50];
int seguir;
int contador;
contador=0;
seguir=1;

pfich=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/textos.txt","a+t");

if(pfich==0)
    {
    perror("Erro co arquivo textos.txt");
    }

else 
    {
    pDatos=malloc(sizeof(char));
    printf("Por favor, teclea o texto que queres gardar no arquivo:\n");
    gets(texto);
    

//Para que non introduza caracteres a partir do texto tecleado:
while(seguir==1)
{
    if(texto[contador]!=0)
    {
     fwrite(texto+contador, 1,1, pfich);  //primeiro "1" indica tamaño do que será gravado. Segundo "1" indica número 
    }
    else
    {
        seguir=0;
    }
    contador++;
}
 

    }
fclose(pfich);
free(pDatos);
    
}













