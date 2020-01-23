#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
   pid_t rf;
   pid_t rd;
   pid_t rz;

   rf = fork();
   if(rf==0)
   {
       printf("Soy el hijo 1, mi PID es %d\n",getpid());
       sleep(5);
       exit(0);
   }
   rd = fork();
   if(rd==0)
   {
       printf("Soy el hijo 2, mi PID es %d\n",getpid());
       sleep(5);
       exit(0);
   }
   rz = fork();
   if(rz==0)
   {
       printf("Soy el hijo 3, mi PID es %d\n",getpid());
       sleep(5);
       exit(0);
   }
   sleep(10);
   printf("Soy el proceso padre, mi PID es %d\n",getpid());
   exit(0);
}