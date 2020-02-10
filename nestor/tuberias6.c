/*Escribir un programa que lance un proceso insultator. 
Dicho proceso enviará al programa que lo ha creado, mediante 
una tubería cada segundo un insulto diferente. En cuanto el 
programa que lanza el proceso insultator reciba un insulto 
determinado, enviará por la tubería un mensaje al insultator 
en el que le solicitará que finalice su ejecución. Tras recibir 
la petición insultator enviará un mensaje de vuelta indicando su 
aceptación, y se cerrará. El programa, al recibir la aceptación 
por parte de insultator, imprimirá un mensaje y se cerrará tambien*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#define LEER 0 
#define ESCRIBIR 1

int main()
{
int descr[2];	/* Descriptores de E y S de la turbería */
FILE * manejadorarchivo;
char insultos[30];
int contador;
contador=0;   
pipe (descr);
if (fork()==0)
    {
    manejadorarchivo=fopen("/home/nestor/Documentos/repositorionestor/IFCT06092019IS/nestor/insultator.txt","rb");
    do  
       {
        fread(&insultos[contador],sizeof(char),1,manejadorarchivo);
        write(descr[ESCRIBIR],&insultos[contador],sizeof(char));
        //contador++;
        }
        //while (!(insultos[contador-5]=='P' &&\
        insultos[contador-4]=='a' &&\
        insultos[contador-3]=='r' &&\
        insultos[contador-2]=='v' &&\
        insultos[contador-1]=='o'));
        while(!feof(manejadorarchivo));
    }
    else
        {
         contador=0; 
       do
        {
          read(descr[LEER],&insultos[contador],sizeof (char));
          if (insultos[contador]==',')
             {
             usleep(1000000);
             }
          printf("%c",insultos[contador]);
          fflush(stdout);
          contador++;     
         }
         while (!(insultos[contador-5]=='P' &&\
                 insultos[contador-4]=='a' &&\
                 insultos[contador-3]=='r' &&\
                 insultos[contador-2]=='v' &&\
                 insultos[contador-1]=='o'));
                 
        }
        
return(0);
//rewind(manejadorarchivo);
}
       
