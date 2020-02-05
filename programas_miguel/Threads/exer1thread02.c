/*1.Utilizando threads acceder a un archivo e imprimir varias veces por pantalla el contenido del mismo de forma simultánea. 
Antes de imprimir el contenido del archivo por pantalla, preguntar al usuario cuantos threads se quieren lanzar para recorrer el archivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char rutaarq[100];


void *fabrir (void *un_algo) //"un_algo" porque non lle pasamos ningún parámetro
{

    FILE * pfich;
    pfich=fopen(rutaarq,"rt");
    void *pDatos;
    int lidos;

    if(pfich==0)
        {
        perror("Erro ó ler o arquivo\n");
        }
    else 
        {
            pDatos=malloc(sizeof(char));
        
        do
            {
            lidos = fread(pDatos,sizeof(char),1,pfich); 
          
            printf("%c", *(char*)pDatos);
            }
        while(!feof(pfich)); 

        fclose (pfich);
        free(pDatos);
        }

}


int main()
{  
    int numero;
    numero=0;
    int cont;
    cont=0;
    

    printf("Por favor, introduce a ruta do arquivo ó que queres acceder:\n ");
    gets(rutaarq);
    printf("Indica cantos threads queres abrir do arquivo: ");
    scanf("%d", &numero);  


    pthread_t thread1;

    for (cont = 1;  cont <= numero; cont++)
    {
        pthread_create(&thread1, NULL, fabrir, NULL);
        pthread_join(thread1, NULL);
    }
    
   

return 0;
}






