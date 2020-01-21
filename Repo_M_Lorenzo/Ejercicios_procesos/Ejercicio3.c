#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    pid_t pid;
    pid_t pid2;
        
    int contador;

    
    for(contador=2;contador<argc;contador++)
    {
        pid=fork();  
        //printf("fillo creado\n") ;     
        if(pid==0)
        {
            //pid2=fork();
            
        }
        else
        {
            printf("Proceso padre %d",contador);
            execv(argv[contador],argv);
            exit(0);        
        }
        
              
        

    }
    
    exit(0);

    return(0);    

}
