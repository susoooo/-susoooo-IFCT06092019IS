# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>
void * hola(void *arg) 
    {
    char *msg="\nHola ";
    int i;
    for (i=0;i<strlen(msg);i++) 
        {
        printf ("%c",msg[i]);
        fflush (stdout);
        usleep (1000000);
        }
    return NULL;
    }
void *mundo(void *arg) 
    {
    char *msg= "Mundo\n";
    int i;
    for (i=0;i<strlen(msg);i++) 
        {
        printf("%c",msg[i]);
        fflush(stdout);
        usleep (1000000);
        }
    return NULL;
    }
int main(int argc , char *argv []) 
    {
    pthread_t h1;
    pthread_t h2;
    pthread_create(&h1,NULL,hola,NULL);
    pthread_join(h1,NULL);
    pthread_create(&h2,NULL,mundo,NULL);
    pthread_join(h2,NULL);
    printf ("   Fin\n");
    }