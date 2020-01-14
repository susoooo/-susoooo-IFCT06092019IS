#include <stdio.h>
#include <string.h>

main()
{
    //Variables

    int opcion;
    int x;
    int y;
    int plano[100][100];
    float valores_y[100];
    int coefa;
    int coefb;
    int coefc;
    
    //Inicializacion

   x=0;
   y=0;

    //Programa
    do
    {
        printf("Representación de rectas en el plano\n");
        printf("Seleccione una opcion\n0-Salir\nOtra numero-Introducir datos\n");
        scanf("%d",&opcion);
        printf("Introduzca el coeficiente de X\n");
        scanf("%d",&coefa);
        printf("Introduzca el coeficiente de Y\n");
        scanf("%d",&coefb);
        if(coefb==0)
        {
            printf("ERROR. El coeficiente de Y debe ser distinto de 0\n");
        }
        printf("Introduzca el coeficiente C\n");
        scanf("%d",&coefc);

        for(x=0;x<100;x++)
        {
            for(y=0;y<100;y++)
            {
                printf("0");
                valores_y[x]=((coefa*x)+coefc)/coefb;
                if(y==valores_y[x])
                {
                    printf("*");
                }

            }
        }
            

    }while(opcion!=0);

    printf("Gracias por usar mi programa\n");

    
}