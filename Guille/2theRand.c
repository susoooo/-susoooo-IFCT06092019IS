#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
int elementos[100000000];
pthread_t thread1;
pthread_t thread2;

void * lector(void *arg)
{
int contador;
for(contador=0;contador<100;contador++)
   {
	printf ("soy el thread1....,ID:     %d,pos:  ,valor:%d    \n",thread1,contador,  elementos[contador]);
   }
}

void * lector2(void *arg)
{
int contador;
for(contador=100;contador>=0;contador--)
   {
	printf ("soy el thread2....,ID:     %d,pos:  ,valor:%d    \n",thread2,contador,  elementos[contador]);
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
  pthread_join (thread1,NULL);
  pthread_join (thread2,NULL);
 fflush (stdout);
 exit(0);
  }
