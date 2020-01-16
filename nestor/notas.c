#include <stdio.h>
#include <math.h>
main()
{


float notas[40];

int eleccion;

float suma;

float media;

float menor;

float mayor;



eleccion = 0;

suma = 0.0;

media = 0.0;

menor = 10.0;

mayor = 0.0;



for(contador=0;contador<40;contador++)

{

 scanf("%f",&notas[contador]);

}



do

{

printf("1 Notas\n");

printf("2 Media\n");

printf("3 Menor\n");

printf("4 Mayor\n");

printf("0 Salir\n");



scanf("%d",eleccion);



if(eleccion==1)

{

 for(contador=0;contador<40;contador++)

 {

   printf("%f",notas[contador]);

 }

}

else 

{

  if (eleccion==2)

  {

    //calculamos media

    for(contador=0;contador<40;contador++)

    {

      suma=suma+nota[contador];

    }

    media = suma/40;

    printf("%f",media);

  }

  else

  {

    if(eleccion==3)

     {

       //Calculamos el menor

       for(contador=0;contador<40;contador++)

       {

         if(menor>notas[contador])

          {

            menor = notas[contador]; 

          }         

         printf("%f",menor);

       }

     }

    else

     {

       if(eleccion==4)

        {

          // codigo de maior

          for(contador=0;contador<40;contador++)

          {

           if(mayor<notas[contador])

            {

              mayor = notas[contador]; 

            }         

           printf("%f",mayor);

        }

       else

        {

          printf("Opcion no valida");

        }

     }

  }

}

}

while(seleccion!=0);
}