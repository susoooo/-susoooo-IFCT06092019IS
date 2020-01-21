#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>

void * thread_function(void *arg)
{
    int i;
    for (i=0;i < 3;i++)
    {
        printf("Thread says hi!\n");
        sleep(1);
    }
        printf("Thread exists\n");
        return NULL;
}
int main(int argc,char **argv)
{
    pthread_t mythread;
    printf("Launching new thread . . .\n");
    if ( pthread_create(&mythread,NULL,thread_function,NULL) )
    {
        printf("error creating thread.");
        abort();
    }
    pthread_join(mythread,NULL);
    printf("Waiting on join\n");
    exit(0);
}








