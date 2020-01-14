/*1.Crear un programa que abra un fichero llamado “prueba.txt” (previamente creado con el
block de notas y guardado en la misma carpeta donde este el programa) y que muestre el
contenido del mismo por pantalla carácter a carácter.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
FILE * pfich; //creamos manexador
void *pDatos; // un punteiro void indica que non se coñece a que tipo apunta (int,char...)
int lidos;
pfich=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/prueba.txt","rt"); //abrimos arquivo (con rt en modo texto para lectura) con fopen e asignamos resultado da chamada ó manexador

if(pfich==0)
    {
    perror("Erro ó ler o arquivo prueba.txt");
    }
else 
    {
    pDatos=malloc(sizeof(char)); //reservamos espazo memoria tipo char

    do
    {
    lidos = fread(pDatos,sizeof(char),1,pfich); 
    /*lemos arquivo con fread, indicamos espazo memoria, lemos rexistro (tipo char), 
    indicamos tamaño (1), usamos manexador pra indicar cal é o arquivo */ 
    printf("%c", *(char*)pDatos); //definimos que se trata dun punteiro a char (co asterisco anterior vemos contido)
    }
    while(!feof(pfich)); // !feof: mentres non chegue ó final do arquivo
    fclose (pfich);
    free(pDatos);
    }


return(0);

}
