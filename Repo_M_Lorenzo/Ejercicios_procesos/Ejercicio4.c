#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char *argv[])
{
    pid_t pid;
        
    int contador;
    char cadena[1024];
    char *argmeu[3];

    strcpy(cadena,"");
    
    for(contador=0;contador<3;contador++)
    {
        argmeu[contador]=argv[contador+1];
    }

    pid=fork();

    

    if (pid==0)
    {
        printf("%s\n",argv[1]);
        printf("%s\n",argv);

        //strcat(cadena,argv[1]);
        //strcat(cadena," ");
        strcat(cadena,argv[2]);
        strcat(cadena," ");
        strcat(cadena,argv[3]);
        //strcat(cadena," ");
        execv(argv[1],argmeu);
        exit(0);
               
    }

    exit(0);
    return(0);    

}