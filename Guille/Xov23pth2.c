#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>
void*hoxe (void*arg)
{
 FILE*texto;
 char memo;
 int n;
 int contador;
 texto=fopen("Aux.X23pth.c","rt");
 do
 {
   fread(memo,sizeof(char),1,texto);
   printf("%c",memo);

 }
 while(!feof(texto));
   
  fclose(texto);
}
    
       
 int main ()
        {
          int contador;
          int n;
          pthread_t auxi;


          printf ("introduce el número de copias del documento Aux.X23pth.c que desees imprimir\n","%d");
          scanf ("%d",n);
          for(contador=0;contador<n;contador++)
          {
          pthread_create (&auxi,NULL,hoxe, NULL);
          pthread_join(auxi,NULL);              
          }
          printf ("Fin\n");
        }
