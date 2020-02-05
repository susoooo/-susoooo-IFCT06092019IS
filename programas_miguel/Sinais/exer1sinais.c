/*1.- Realizar un programa que tras dormir 10 segundos envíe la señal SIGTERM a si mismo. */

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

int main()
{
    sleep(10);
    kill (getpid(), SIGTERM);
    
    return 0;
}


