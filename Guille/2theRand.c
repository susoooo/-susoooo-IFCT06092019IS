#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
int elementos[100];
pthread1=thread1;
pthread2=thread2;
void * lector(void *arg)
{
int contador
for(contador=0;contador<100;contador++)
   {
	printf ("soy el thread1....elementos [contador]", elementos[contador]);
   }
}

void * lector2(void *arg)
{
int contador
for(contador=100;contador>=0;contador--)
   {
	printf ("soy el thread2....elementos [contador]",elementos[contador]);
   }
}

main()
 {
   int contador;
  for(contador=0;contador<100;contador++)
  {
	elementos[contador]=rand();
  }
  pthread_create(&thread1,NULL,lector,NULL);
  pthread_create(&thread2,NULL,lector2,NULL);

 fflush (stdout);
 exit(0);
 }
