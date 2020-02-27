#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <sys/types.h>
  #include <sys/wait.h>
  #include <string.h>
char insultos[1000];
void receptor(int lec[2])
{
 read(lec[0], &insultos, sizeof insultos);
 printf ("%s",insultos);  
}
void insultator(int esc[2]) 
 {
  int contador;

for(contador=0;contador<1000;contador++)
  {
    insultos[contador]=0;
  }

strcpy(insultos,"tonto ");
strcat(insultos,"burro ");
strcat(insultos,"lacazan ");
strcat(insultos,"neno ");
strcat(insultos,"chorizo ");

for(contador=0;contador<5;contador++)
   {
     write (esc[1], &insultos, sizeof insultos); 
     wait(1); 
   }  

  
  
//read(esc[0], &i, sizeof i);
 }
main(void) 
{
  int pid, tubo[2];
  pipe(tubo);
  if ((pid= fork())==0) 
  {
    insultator (tubo);
  }
  else 
  {
    receptor (tubo);
  }
}