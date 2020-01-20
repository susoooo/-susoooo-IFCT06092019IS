#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    pid_t pid2;
        
    int contador;
    int contador2;

    
    for(contador=0;contador<2;contador++)
    {
        pid=fork();  
             
        if(pid==0)
        {
            for(contador=0;contador<2;contador++)
            {
                pid=fork();  
             
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