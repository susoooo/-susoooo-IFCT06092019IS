#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    pid_t rf;
    pid_t rd;
    int numproc;
    int contador;

    numproc=argc-2;
    contador=1;

    rf = fork();

    while(contador<=numproc)
    {
        if(rf==0)
        {
            printf("Soy el hijo %d, mi PID es %d\n",contador,getpid());
            execv(argv[contador+1],NULL);
        }
    rf = fork(); //Abren proceso padre e hijo, modificar
    contador=contador+1;
   }
  
   sleep(5);
   printf("Soy el proceso padre, mi PID es %d\n",getpid());
   exit(0);
}