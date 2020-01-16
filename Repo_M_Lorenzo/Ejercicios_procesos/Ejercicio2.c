#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
    pid_t pid;
        
    int contador;

    for(contador=2;contador<*argv[1];contador++)
    {
        pid=fork();
        
        if(pid==0)
        {
            execv(argv[contador],argv);
            //exit(0);
        }
        printf("%d",contador);

    }
    

    return(0);    

}
