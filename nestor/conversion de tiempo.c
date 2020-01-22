#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    double tiempo;double s;double m;double h;double d;double se;double me;double a;
    double numerotiempo;char letratiempo[2];char sino;
    tiempo =0;s=0;m=0;h=0;d=0;se=0;me=0;a=0;
    sino='s';
    printf("Escribe la cantidad de tiempo quieres convertir primero el nº seguido de");
    printf("s = segundos");
    printf("m = minutos");
    printf("h = horas");
    printf("d = dias");
    printf("se = semanas");
    printf("me = meses");
    printf("a = años");
    do
    {
    printf("introduce el numero = ");
    scanf("%f",&numerotiempo);
    printf("introduce la unidad = ");
    scanf("%s",&letratiempo);
    m=s*60;
    h=m*60;
    d=h*24;
    se=d*7;
    me=se*4.345;

    if(strcmp(letratiempo,'s')==0)
        {
      letratiempo = s;
        }
        
printf("¿Quieres abrir convertir mas unidades de tiempo? s/n   ");
getchar();
scanf("%c",&sino);
   }
while(sino=='s');
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    


