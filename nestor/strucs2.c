#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
int contador;
char nosi;
char pidenome[30];
char sino;
char opcion;
contador=0;
sino='s';
struct xogador
    {
     char nome[30];
     char apellido1[30];
     char apellido2[30];
     int edad;
     float altura;
    };   

struct xogador novoXogador[10];
 do 
   {
    for(contador=0;contador<10,sino=='s';contador++)
        {

printf("Por favor intoduzca su nombre\n");
scanf("%s",novoXogador[contador].nome);
printf("Intoduzca su primer apellido\n");
scanf("%s",novoXogador[contador].apellido1);
printf("Intoduzca su segundo apellido\n");
scanf("%s",novoXogador[contador].apellido2);
printf("Intoduzca su edad\n");
scanf("%d",&novoXogador[contador].edad);
printf("Intoduzca su altura\n");
scanf("%f",&novoXogador[contador].altura);
printf("¿Quieres abrir mas fichas hasta un maximo de diez s/n?");
getchar();
scanf("%c",&sino);
        }
   }

while(sino=='s');
//while (strcmp(sino,'s')!=0);

printf("\nIndique que le gustaria listar a = para altura, e = edad y n = nombre\n");
opcion=getchar();
contador=0;
scanf("%c",&opcion);
switch(opcion)
    {
    case'a':printf("LISTADO DE ALTURA\n");
            for(contador=0;contador<10;contador++)
            {
            printf("%f\n",novoXogador[contador].altura);
            }
    break;
    case'e':puts("LISTADO DE EDADES\n");
            for(contador=0;contador<10;contador++)
            {
            printf("%d\n",novoXogador[contador].edad);
            }
    break;
    case'n':puts("LISTADO DE NOMBRES\n");
            for(contador=0;contador<10;contador++)
            {
    printf("%s %s %s\n",novoXogador[contador].nome,novoXogador[contador].apellido1,novoXogador[contador].apellido2);
            //puts(novoXogador[contador].nome);
            //puts(novoXogador[contador].apellido1);
            //puts(novoXogador[contador].apellido2);
            }
    break;
    default:puts("ERROR ha introducido un caracter erroneo");
    }
    
    nosi=getchar();
    printf("\nQuieres ver la ficha de algun jugador s/n ");
    scanf("%c",&nosi);
    if (nosi=='s')
      {
        printf("Por favor indique el nombre del jugador del que quiere ver la lista ");
        scanf("%s",pidenome);
        for(contador=0;contador<10;contador++)
        {
    if(strcmp(pidenome,novoXogador[contador].nome)==0)
         {
    printf("\n%s %s %s\n",novoXogador[contador].nome,novoXogador[contador].apellido1,novoXogador[contador].apellido2);
    printf("%f metros de altura\n",novoXogador[contador].altura);
    printf("%d años\n\n",novoXogador[contador].edad);
    printf("Gracias por usar ficha+\n\n");
         }
        }
      }
    //Printf("Gracias por usar ficha +");
    return(0);
    
}