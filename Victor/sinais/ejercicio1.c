#include <signal.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    sleep (10);
    signal (SIGTERM, SIG_DFL);
    kill(getpid(), SIGTERM);
}
