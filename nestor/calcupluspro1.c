#include <stdio.h>
#include <math.h>
main()
{
printf("\n    - Hola soy el programa calcuplus diseñado por Nestor Rois para hacer calculos  matematicos - \n");

int numero1;
int numero2;
int seleccion;
int suma;
int resta;
int multiplicacion;
double division;



double seno1;
double coseno1;
double tangente1;
double raiz1;
double logbase1;

double seno2;
double coseno2;
double tangente2;
double raiz2;
double logbase2;


suma=0;
resta=0;
multiplicacion=0;
division=0;
seleccion=0;

seno1=0;
coseno1=0;
tangente1=0;
raiz1=0;
logbase1=0;

seno2=0;
coseno2=0;
tangente2=0;
raiz2=0;
logbase2=0;

printf("\nPor favor introduce el primer numero  = ");
scanf("%d",&numero1);
datoerroneo1:
printf("\n          POR FAVOR INDIQUE QUE OPERACION QUIERE REALIZAR \n");
printf("\nSi desea realizar el seno %d introduzca                      1 \n",numero1);
printf("Si desea realizar el coseno de %d introduzca                 2 \n",numero1);
printf("Si desea realizar el tangente de %d introduzca               3 \n",numero1);
printf("si desea realizar el raiz cuadrada de %d introduzca          4 \n",numero1);
printf("si desea realizar el logaritmo en base 10 de %d introduzca   5 \n",numero1);
scanf("%d",&seleccion);

seno1=sin(numero1*3.14159/180);
coseno1=cos(numero1*3.14159/180);
tangente1=tan(numero1*3.14159/180);
raiz1=sqrt((float)numero1);
logbase1=log((float)numero1);


  if(seleccion==1)
  {
   printf("El seno de %d es = %f\n",numero1,seno1);
  }
   else
       {
       if(seleccion==2)
            {
            printf("El coseno de %d es = %f\n",numero1,coseno1);
            }
             else
                if(seleccion==3)
                {
                 printf("La tangente de %d es = %f\n",numero1,tangente1);
                }
                else
                    if(seleccion==4)
                    {
                     printf("La raiz cuadrada de %d es = %f6\n",numero1,raiz1);
                    }

                     if(seleccion==5) 
                     {
                      printf("logaritmo en base 10 de %d es = %f6\n",numero1,logbase1);
                     }
                     if(seleccion>5||seleccion<1)
             {
             printf("\n Entrada de dato erroneo el numero tiene que ser de 1 a 5\n");
             goto datoerroneo1;
             }
            
         }   

seleccion=0;
printf("\nPor favor introduce el segundo numero = ");
scanf("%d",&numero2);
datoerroneo2:
printf("\n          POR FAVOR INDIQUE QUE OPERACION QUIERE REALIZAR \n");
printf("\nSi desea realizar el seno de %d introduzca                   1 \n",numero2);
printf("Si desea realizar el coseno de %d introduzca                 2 \n",numero2);
printf("Si desea realizar el tangente de %d introduzca               3 \n",numero2);
printf("si desea realizar la raiz cuadrada de %d introduzca          4 \n",numero2);
printf("si desea realizar el logaritmo en base 10 de %d introduzca   5 \n",numero2);
scanf("%d",&seleccion);

seno2=sin(numero2*3.14159/180);
coseno2=cos(numero2*3.14159/180);
tangente2=tan(numero2*3.14159/180);
raiz2=sqrt((float)numero2);
logbase2=log((float)numero2);

suma=numero1+numero2;
resta=numero1-numero2;
multiplicacion=numero1*numero2;
division=(float)numero1/numero2;

  if(seleccion==1)
  {
   printf("El seno de %d es = %f\n",numero2,seno2);
  }
   else
        {
         if(seleccion==2)
           {
           printf("El coseno de %d es = %f\n",numero2,coseno2);
           }
           else
               {
                if(seleccion==3) 
                 {
                  printf("La tangente %d es = %f\n",numero2,tangente2);
                 }
                   else
                      {
                       if(seleccion==4)
                         {
                         printf("La raiz cuadrada de %d es = %f6\n",numero2,raiz2);
                         }
                          if(seleccion==5) 
                            {
                            printf("logaritmo en base 10 de %d es = %f6\n",numero2,logbase2);
                            }
                      }
                }
                if(seleccion>5||seleccion<1)
                  {
                  printf("\n Entrada de dato erroneo el numero tiene que ser de 1 a 5\n");
                  goto datoerroneo2;
                  }
          }   

printf("\n El programa realiza automaticamente las operaciones basicas entre los dos numeros\n");
printf("\nLa suma de %d y %d es = %d\n",numero1,numero2,suma);
printf("La resta de %d y %d es = %d\n",numero1,numero2,resta);
printf("La multiplicación de %d y %d es = %d\n",numero1,numero2,multiplicacion);
printf("La división entre %d y %d es = %f6\n\n",numero1,numero2,division);
printf("                           GRACIAS POR USAR EL PROGRAMA CALCUPLUSPRO\n\n");
}
