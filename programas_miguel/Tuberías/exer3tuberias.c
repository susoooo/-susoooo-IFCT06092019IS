/*3. Escribir un programa que lance un proceso insultator. Dicho proceso enviará al programa que lo ha creado, 
mediante una tubería cada segundo un insulto diferente. En cuanto el programa que lanza el proceso insultator 
reciba un insulto determinado, enviará por la tubería un mensaje al insultator en el que le solicitará que 
finalice su ejecución. Tras recibir la petición insultator enviará un mensaje de vuelta indicando su aceptación, 
y se cerrará. El programa, al recibir la aceptación por parte de insultator, imprimirá un mensaje y se cerrará tambien.*/


#include <unistd.h>  
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    FILE * pfich; 
    void *pDatos; 

    int fd[2];
    pid_t fillo;
    int seguir;

    pipe(fd); 
    fillo = fork();

    switch(fillo)
        {     
          case -1: 
                printf("Non foi posible crear o fillo \n");
                exit(-1);
                break;
          case 0: 
                
                pfich=fopen("/home/ubuntu1/Documentos/Programas/Arquivos/insultator.txt","rt"); 

                if(pfich==0)
                    {
                    perror("Erro ó ler o arquivo insultator.txt");
                    }
                else 
                    {
                    pDatos=malloc(sizeof(char)*30); 

                    do
                    {
                    
                    seguir=1;
                    while (seguir==1)
                    {
                      fread(pDatos,sizeof(char),1,pfich); 
                      if (pDatos!=',')
                      {
                          seguir=1;
                      }
                      else
                      {
                          seguir=0;
                      }
                      
                       
                    }

                   /*TO DO escribir o lido do arquivo na tubería:*/    
                   
                    

                    //write(fd[1], &pDatos, sizeof (char));

                    }
                    while(!feof(pfich)); 
                    fclose (pfich);
                    free(pDatos);

                //read(fd[0], &numero, sizeof (int)); 
                //write(fd[1], &solucion, sizeof(int)); 
                break;
                
          default: 
            /*TO DO definir as accións do pai*/
                
                /*printf("Introduce o número do que queres calcular o factorial: ");
                scanf("%d", &numero);

                write(fd[1], &numero, sizeof (int));
                wait(5);
                read(fd[0], &numero, sizeof (int));
                printf("O resultado é: %d\n",numero);   */ 
        }
}



