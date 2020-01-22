/*Un proceso padre que cree dos hijos, y estos a su vez creen dos hijos,
para que finalmente estos creen a tres hijos; al finalizar,
cada padre o hijo deberá enviar a su padre el número hijos creados,
de tal forma que el padre principal imprima el número de hijos creados. 
Por ejemplo, un estructura de nivel 3, tendrá en el nivel 0 al padre raíz; 
en el nivel 1 habrá dos hijos; en el nivel 2 habrá 4 hijos (dos por cada hijo
del nivel 1); finalmente en el nivel 3, habrá 12 hijos (llamados hojas); en total 
hay 18 nodos o procesos hijos creados. Su programa debe solicitar el nivel*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
pid_t P;
pid_t h01;
pid_t h12;
pid_t h13;
pid_t h2;
pid_t h21;
pid_t h22;
pid_t h23;

int numhijos;
//int contador;
//contador=0;
numhijos =0;
printf("Bienvenido al programa familia+ para hacer hijos y nietos\n¿cuantos hijos quieres crear? = ");
padre = fork();
switch (padre)
        {
        case -1:
        printf("No he podido crear el proceso hijo \n");
        break;
        case 0:
        printf("Hola papa, son o teu %dº fillo.\n",contador+1);
        break;
        hijo1 = fork();
        switch (hijo1)
            {
            case -1:
            printf("No he podido crear el proceso hijo \n");
            break;
            case 0:
            printf("Hola papa, son o teu %dº fillo.\n",contador+1);
            break;
                nieto11 = fork ();   
                switch (nieto11)
                    {
                    case -1:
                    printf("No he podido crear el proceso hijo \n");
                    break;
                    case 0:
                    printf("Hola papa, son o teu %dº fillo.\n",contador+1);
                    break;
                    h2 = fork();k();

            default:
                nieto21 = fork ();   
                switch (nieto21)
                    {
                    case -1:
                    printf("No he podido crear el proceso hijo \n");
                    break;
                    case 0:
                    printf("Hola papa, son o teu %dº fillo.\n",contador+1);
                    break;
                    h2 = fork();k();


        printf("Son papa, hola %dº fillo\n",contador+1);
        hijo2 = fork();
        switch (hijo2)
            {
            case -1:
            printf("No he podido crear el proceso hijo \n");
            break;
            case 0:
            printf("Hola papa, son o teu %dº fillo.\n",contador+1);
            break;
                nieto21 = fork ();   
                switch (h011)
                    {
                    case -1:
                    printf("No he podido crear el proceso hijo \n");
                    break;
                    case 0:
                    printf("Hola papa, son o teu %dº fillo.\n",contador+1);
                    break;
        exit(0);
        }
    }
printf("!JODER QUE PILA DE PEQUENOS!\n\n");
}