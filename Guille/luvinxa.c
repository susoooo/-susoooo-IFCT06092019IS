#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
  pid_t tw;
  pid_t rf;
  pid_t ms;
  pid_t wt;
  int contador;
  int i;
  i=0;
 
  rf= fork();
 
  
  
   switch (rf)
    {
  case -1:
   printf ("No he podido crear el proceso hijo\n");
   break;
  case 0:
   printf ("Soy el hijo, mi PID es %d y mi PPID es %\n", getpid(),getppid());
   ms=fork();
   if (ms!=0)
    tw=fork();
   if (ms==0||tw==0)
      {
       for(contador=0;contador<3;contador++)
       {
        wt=fork();
       }
        if (wt==0)
         {
           printf ("Soy el hijo, mi PID es %d y mi PPID es %\n", getpid(),getppid());
           printf ("Adios mundo cruel\n");        
           exit(0);
         }
        }
     break; 
   default:
     printf ("Soy el padre, mi PID es %d y el PID de mi hijo es %d\n",getpid(),rf);
     wait (0);
    
    }

rf= fork();
 
  
  
   switch (rf)
    {
  case -1:
   printf ("No he podido crear el proceso hijo\n");
   break;
  case 0:
   printf ("Soy el hijo, mi PID es %d y mi PPID es %\n", getpid(),getppid());
   ms=fork();
   if (ms!=0)
    tw=fork();
   if (ms==0||tw==0)
      {
       for(contador=0;contador<3;contador++)
       {
        wt=fork();
       }
        if (wt==0)
         {
           printf ("Soy el hijo, mi PID es %d y mi PPID es %\n", getpid(),getppid());
           printf ("Adios mundo cruel\n");        
           exit(0);
         }
        }
     break; 
   default:
     printf ("Soy el padre, mi PID es %d y el PID de mi hijo es %d\n",getpid(),rf);
     wait (0);
    
    }




}
 

  





