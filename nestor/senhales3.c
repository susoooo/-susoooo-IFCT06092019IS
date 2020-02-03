/*Realizar un programa que tras dormir 10 segundo envíe la señal 
SIGTERM a si mismo.*/

#include <signal.h>
#include <unistd.h>

int main ()
{
    sleep (10);
    kill (getpid(), SIGTERM);
}
