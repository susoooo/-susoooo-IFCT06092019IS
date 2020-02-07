#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <sys/types.h>
  #include <sys/wait.h>

void productor(int esc[2]) {
  int i;
  printf ("introduce un numero para calcular su factorial");
  scanf ("%d",&i);
   
    write (esc[1], &i, sizeof i);
    wait(1);
    read(esc[0],&i,sizeof i);
    printf ("%d",i);
  
    
  }


void consumidor(int lec[2]) 
{
  int i;
  int factorial=1;
  int contador;
  
read(lec[0], &i, sizeof i);
printf("Recibido %d\n", i);


 for(contador=i;contador>=1;contador--)
  {
     
    if (contador>1)
     {
       printf ("*");
      factorial=factorial*(contador);
     } 
  }
   write (lec[1], &factorial, sizeof factorial);  
   
  exit(0);
}


int main(void) 
{
  int pid, tubo[2];
  pipe(tubo);
  if ((pid= fork())==0) 
  {
    consumidor(tubo);
  }
  else 
  {
    productor(tubo);
  }
}