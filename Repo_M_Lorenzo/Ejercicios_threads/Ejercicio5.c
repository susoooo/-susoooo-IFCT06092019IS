#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void *suma(void *rango);
pthread_attr_t attr;
int f=0;
pthread_t thread[10];

int main() 
{
    int i=0, n=0, rango=0, *estado, pestado=0, nbytes=0, nreg=0;
    estado=&pestado;
    pthread_attr_init(&attr);
    //FILE * f;
    char *pRuta;
    pRuta=malloc(sizeof(char)*1024);
    printf("Introduzca la ruta del archivo\n");
    scanf("%s",pRuta);

//TO_DO: controlar el error en la aperture del fichero
    int f=open(pRuta,O_RDONLY);
    if(f==-1)
    {
        perror("Ha habido un error\n");
    }
    nbytes=lseek(f,0,SEEK_END);
    nreg=nbytes/sizeof(int);

    for(i=0;i<10;i++) 
    {
        pthread_create(&thread[i],NULL,suma,(void*)&rango);
        sleep (1);
        rango+=100;
    }
    for(i=0;i<10;i++) 
    {
        pthread_join(thread[i],(void*)estado);
        printf("Suma Parciales en Prog. Principal: %d\n",*estado);
        n+=*estado;
    }
    printf("Suma Total: %d\n",n);
    printf("Total numeros sumados: %d\n",nreg);

    free(pRuta);
    close(f);
    return(0);
}

void *suma(void *rango) 
{
    int j=0, valor, *suma, num=0;
    //sleep(1);
    valor=* ((int *) rango);
    suma=(int *)malloc (sizeof (int));
    *suma=0;
    printf("Rango: %d a %d\n",valor+1,valor+100);
    lseek(f,valor,SEEK_CUR);
    for(j=0;j<100;j++) 
    {
        read(f,&num,sizeof(int));
        *suma+=num;
    }
    printf("\tSuma Parcial: %d\n",*suma);
    //TO_DO: generar la salida del hilo
    pthread_exit(suma);
}