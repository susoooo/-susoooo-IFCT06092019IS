#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
   pid_t rf;
   int numproc;
   int contador;

   numproc= argc-2;
   printf("número de procesos= %d\n",numproc);
   contador=1;

   while(contador<=numproc)
   {
    rf = fork();
    if(rf==0)
    {
       printf("Soy el hijo %d, mi PID es %d\n",contador,getpid());
       execv(argv[contador+1],NULL);
    }
    contador=contador+1;
   }
  
   sleep(5);
   printf("Soy el proceso padre, mi PID es %d\n",getpid());
   exit(0);
}