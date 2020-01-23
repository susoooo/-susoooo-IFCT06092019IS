/*Utilizando threads acceder a un archivo e imprimir varias veces 
por pantalla el contenido del mismo de forma simultanea. Antes de 
imprimir el contenido del archivo por pantalla, preguntar al usuario 
cuantos threads se quieren lanzar para recorrer el archivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>

void * funcionprint(void * parametro); 
int main()
  {
  pthread_t threadprint[50];
  int numthreads;
  int parametro;
  int contador;

  numthreads=0;
  contador =0;
  
  printf("¿cuantos threads quieres crear para imprimir? maximo 50 = ");
  scanf("%d",&numthreads);
  for (contador=0;contador<numthreads;contador++)
      {
       pthread_create(&threadprint[contador],NULL,funcionprint,NULL);
       pthread_join(threadprint,(void *)&parametro);
      }
  }
void * funcionprint(void * parametro)
      {
       FILE *manejadorarchivo;
       char *espaciomemoria;
       fflush(stdout);
       manejadorarchivo=fopen("/home/nestor/Documentos/repositorionestor/IFCT06092019IS/nestor/miarchivo.txt","rt");
       if(manejadorarchivo==0)
         {
         perror("error o leer o archivo");   
         }
          else
              {
              espaciomemoria=malloc(sizeof(char));
              do 
                {
                fread(espaciomemoria,sizeof(char),1,manejadorarchivo);
                printf("%c",*espaciomemoria); 
                }
              while(!feof(manejadorarchivo));
              fclose(manejadorarchivo);
              free(espaciomemoria);
              
              pthread_exit(NULL);
              } 
      return(0);      
      }
  
