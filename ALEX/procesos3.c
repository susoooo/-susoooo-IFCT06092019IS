#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

pid_t rf;
int hijos;
pid_t rs;
int contador;


int main(int argc,char*argv[])
{
    hijos = argc-2;

    for (contador=0;contador<hijos;contador++)
    {
        rf = fork();
        switch(rf)
        {
            case -1:
                    printf("No he podido crear el proceso hijo \n");
                    break;
            case 0 :
                    rs = fork();
                    printf("un hijo");
                    break;
                    exit(0);
            default:
                    execv("./programa1.out",argv);
                    exit(0);
        }
    }




}























