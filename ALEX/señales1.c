#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
    int pid;
    pid=getpid();

    sleep(10);
    kill(pid,SIGTERM);
    
}