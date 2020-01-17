#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
  pid_t rf;
  int contador;
 
 for(contador=0;contador<=3;contador++)
  {
  rf= fork();
  
  switch (rf)
  {
  case -1:
   printf ("No he podido crear el proceso hijo\n");
   break;
  case 0:
   printf ("Soy el hijo, mi PID es %d y mi PPID es %\n", getpid(),getppid());
   execv("abx16.out",NULL);
   break; 
  default:
   printf ("Soy el padre, mi PID es %d y el PID de mi hijo es %d\n",getpid(),rf);
   }
   
 }
   printf ("Final de ejecución de %d\n",getpid());
}  

























 
