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
    rf = fork();
    for (contador=0;contador<hijos;contador++)
    {
        switch(rf)
        {
            case -1:
                    printf("No he podido crear el proceso hijo \n");
                    break;
            case 0 :
                    execv("./programa1.out",argv);
                    printf("un hijo");
                    rs = fork();
                    break;
                    exit(0);
            default:
                    wait(0);
                    exit(0);
        }
    }




}























