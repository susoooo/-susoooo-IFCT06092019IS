#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#define VUELTAS 10000000000LL

void confirmar(int sig) 
{
    char resp[100];
    write(1, "Quiere terminar? (s/n):", 24);
    read(0, resp, 100);
    if (resp[0]=='s') exit(0);
}

int main(void) 
{
    long long int i;

    signal(SIGINT, SIG_IGN);
    write(1, "No hago caso a CONTROL-C\n", 25);
    
    for (i=0; i<VUELTAS; i++);
    
    signal(SIGINT, SIG_DFL);
    write(1, "Ya hago caso a CONTROL-C\n", 25);

    for (i=0; i<VUELTAS; i++);

    signal(SIGINT, confirmar);
    write(1, "Ahora lo que digas\n", 19);

    for (i=0; i<VUELTAS; i++);
    exit(0);
}