#include <stdio.h>
main()
{int numero1;
 int numero2;
 int seleccion;
 int suma;
 int resta;
 int producto;
 float division;
 seleccion = 0;
 numero1 = 0;
 numero2 = 0;
 suma = 0;
 resta = 0;
 producto = 0;
 division = 0.0;

	printf("Bienvenido a CALCU+ 5.0\n");
  while (seleccion <= 5)
  {
        printf("NUMERO 1\n");
	scanf("%d",&numero1);
        printf("NUMERO 2\n");
        scanf("%d",&numero2);
        printf("1 SUMA,2 RESTA,3 MULTIPLICACION,4 DIVISION,5 SALIR\n");
        scanf("%d",&seleccion);
     
     
        if (seleccion==1)
        {  suma = numero1 + numero2;
           printf("%d\n",suma);

        }
        else 
        {     if(seleccion==2)
              { resta = numero1 - numero2;
                printf("%d\n",resta);
              }
              else
              {       if(seleccion==3)
                      {  producto = numero1 * numero2;
                         printf("%d\n",producto);
                      }
                      else
                      {         if(seleccion==4)
                                {   division = numero1 / numero2;
                                    printf("%f\n",division);
                                }
                                else
                                {       
                                                                                                        
                                             if(seleccion > 5)
                                             {   printf("ERROR\n");
                                             }  
                                             
                                              
                                           
                                              
                                         
                                             
                                                                            
                                }
                      }
              }
         }
   }

      if (seleccion==5)
      {  printf("ADIOS\n");
    
      }



}
