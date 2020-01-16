/*Crear un programa que guarde los datos de jugadores de un club en un archivo.
Guardará información referente a sus nombres, edades, y alturas.
El programa presentará un menú que permitará: 
1. Añadir datos de un jugador al archivo 
2. Listar los nombres de los jugadores 
3. Listar las alturas de los jugadores 
4. Listar las edades de los jugadores 
5.Buscar un jugador por su nombre y presentar su altura y su edad 
6. Mostrar los datos de jugador más veterano del club
7. Mostrar los datos del jugador más alto del club
8. Mostrar los datos del jugador mas benjamin del club
9. Mostrar los datos del jugador mas bajo del club
10. Eliminar la ficha de un jugador*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//#define MSG1 "por favor introduce el primer numero   =  "
//#define MSG2 "por favor introduce el segundo numero  =  "
int main()
{
 FILE * manejadorarchivo;
 int contador;
 int escritos;
 int leidos;
 int opcion;
 int mayor;
 int benjamin;
 float alto;
 float bajo;
 char sino;
 char pidenome[30];
 char pidenome2[30];
 struct xogador
    {
     char nome[30];
     char apellido1[30];
     char apellido2[30];
     int edad;
     float altura;
    };
struct xogador novoXogador;

 sino='s';
 opcion=0;
 contador=0;
 mayor=0;
 alto=0;
 bajo=130;
 benjamin=130;
do
{
printf("Bienvenido al Base+ creado para gestionar la base de datos del C.D LUGO\n\n");
printf("Por favor indique que desea realizar con la base de datos\n\n"); 
printf("0 si desea salir sin realizar ninguna consulta\n");
printf("1 Añadir datos de un jugador al archivo\n"); 
printf("2 Listar los nombres de los jugadores\n"); 
printf("3 Listar las alturas de los jugadores\n");
printf("4 Listar las edades de los jugadores\n"); 
printf("5 Buscar un jugador por su nombre y presentar su altura y su edad\n"); 
printf("6 Mostrar los datos de jugador más veterano del club\n");
printf("7 Mostrar los datos del jugador más alto del club\n");
printf("8 Mostrar los datos del jugador mas benjamin del club\n"); 
printf("9 Mostrar los datos del jugador mas bajo del club\n");
printf("10 Eliminar la ficha de un jugador\n");
scanf("%d",&opcion);
manejadorarchivo=fopen("/home/nestor/Documentos/basedatos.txt","a+b");
/*if (manejadorarchivo!=0)
{
  printf("ok\n");
}*/
switch(opcion)
{
	case 1:
	printf("Acontinuacion introduzca los datos de los jugadores en la base de datos\n\n");
 do 
   {
printf("Por favor intoduzca el nombre\n");
scanf("%s",novoXogador.nome);
printf("Intoduzca el primer apellido\n");
scanf("%s",novoXogador.apellido1);
printf("Intoduzca el segundo apellido\n");
scanf("%s",novoXogador.apellido2);
printf("Intoduzca el edad\n");
scanf("%d",&novoXogador.edad);
printf("Intoduzca el altura\n");
scanf("%f",&novoXogador.altura);
fwrite(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);
printf("¿Quieres abrir mas fichas? s/n   ");
getchar();
scanf("%c",&sino);
   }
while(sino=='s');


if(manejadorarchivo==0)
  {
   perror("error o leer o archivo");   
  }
break;	
	case 2:
		puts("LISTADO DE NOMBRES\n");
    while(!feof(manejadorarchivo))
      {
			fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);
    	printf("%s %s %s\n",novoXogador.nome,novoXogador.apellido1,novoXogador.apellido2);
            //puts(novoXogador.nome);
            //puts(novoXogador.apellido1);
            //puts(novoXogador.apellido2);
			}
		break;
	case 3:
		
		printf("LISTADO DE ALTURA\n");
            while(!feof(manejadorarchivo))
            {
			fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);	
            printf("%.2f\n",novoXogador.altura);
            }
		break;
		
	case 4:
		
		puts("LISTADO DE EDADES\n");
            while(!feof(manejadorarchivo))
            {
			fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);	
            printf("%d\n",novoXogador.edad);
            }
		break;
   case 5:
    printf("Por favor indique el nombre del jugador del que quiere ver la altura y edad\n");
    scanf("%s",&pidenome);
    rewind(manejadorarchivo);
    while(!feof(manejadorarchivo))
      {
        fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo); 
        if(strcmp(pidenome,novoXogador.nome)==0)
        {
      //fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo); 
        printf("\n%s %s %s\n",novoXogador.nome,novoXogador.apellido1,novoXogador.apellido2);
        printf("%.2f metros de altura\n",novoXogador.altura);
        printf("%d años\n\n",novoXogador.edad);
        }
     }
	break;
   case 6:
   while(!feof(manejadorarchivo))
	{
	  fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);
	  if(mayor<novoXogador.edad)
	  mayor=novoXogador.edad;
	}
	printf("El jugador mas veterano tiene %d años\n\n",mayor);
   break;
   case 7:
   while(!feof(manejadorarchivo))
	{
	  fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);
	  if(alto<novoXogador.altura)
	  alto=novoXogador.altura;
	}
	printf("El jugador mas alto del equipo mide %.2f metros\n\n",alto);
   break;
   case 8:
   while(!feof(manejadorarchivo))
	{
	  fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);
	  if(benjamin>novoXogador.edad)
	  benjamin=novoXogador.edad;
	}
	  printf("El jugador mas joven tiene %d años\n\n",benjamin);
   break;
   case 9:
   while(!feof(manejadorarchivo))
	{
	  fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);
	  if(bajo>novoXogador.altura)
	  bajo=novoXogador.altura;
	}
	printf("El jugador mas bajo del equipo mide %.2f metros\n\n",bajo);
   break;
   case 10:
    /*printf("Por favor escriba el nombre del jugador del que quiere eliminar la ficha\n");
    scanf("%s",&pidenome2);
     while(!feof(manejadorarchivo))
    {
    //rewind(manejadorarchivo);
    fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);
    }
    if(strcmp(pidenome2,novoXogador.nome)==0)
    {
      
    manejadorarchivo=fopen("/home/nestor/Documentos/basedatos.txt","wb");
    printf("la ficha de %s se ha eliminado",pidenome2);
    fclose(manejadorarchivo);
    }*/
   break;
   case 0:
		printf("\n                                 GRACIAS POR USAR BASE+\n\n");
		break;
		default:
		printf("\n la seleccion es erronea tiene que ser entre 0 y 10\n");	
		}
  fclose(manejadorarchivo);
}
while(opcion!=0);

    /*do //facemos un do while para que nos valla leendo os dato
        {
        leidos = fread(&novoXogador,sizeof(struct xogador),1,manejadorarchivo);
        }
        while(!feof(manejadorarchivo));*/
//cerramos o manejadorarchivo
//free(&novoXogador);//liberamos o espaciomemoria
return(0);//devolvemos o valor de 0 a funcion main
}
