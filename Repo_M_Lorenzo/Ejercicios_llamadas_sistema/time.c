#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
    long tiempo;

    time(&tiempo);

    printf("%ld segundos\n",tiempo);
    
}