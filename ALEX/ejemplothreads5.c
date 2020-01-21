#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

struct timeval t0,t1;
double media = 0.0;
void * hilo (void *arg)
{
    gettimeofday (&t1,NULL);
    unsigned int ut1 = t1.tv_sec *1000000+t1.tv_usec;
    unsigned int ut0 = t0.tv_sec *1000000+t0.tv_usec;
    media += (ut1 - ut0);
}
int main ()
{
    int i = 0;
    pthread_t h;
    for (i = 0;i < 100;i ++ )
    {
        gettimeofday (&t0,NULL);;
        pthread_create (&h,NULL,hilo,NULL);
        pthread_join (h,NULL);
    }
    printf("%f\n",(media/100.0)); /* Tiempo medio en m i c r o s e g u n d o s */
    return(0);
}




