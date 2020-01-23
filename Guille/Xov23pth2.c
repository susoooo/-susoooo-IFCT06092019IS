#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>
void*hoxe (void*arg)
{
 char *msg= "Hola";
 int n;
 
 
  printf("%d",msg[n]);
  fflush (stdout);
  usleep(1000000);
 
   return NULL;
}
    }
       
 int main (char auxi, char*argv[])
        {
          pthread_t auxi;


          printf ("introduce el número de copias del documento Aux.X23pth.c que desees imprimir\n","%d")
          scanf ("%d",n);
          for(contador=0,contador<n,contador++)
          {
          pthread_create (&auxi,NULL,hoxe, NULL);
          pthread_join(auxi,NULL);              
          }
          printf ("Fin\n");
        }
