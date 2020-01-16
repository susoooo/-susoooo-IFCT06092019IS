#include <stdio.h>
#include <string.h>

main()
{
    //Variables

    int piso;
    int puerta;
    int habitantes;
    int maxhabitantes;
    int edificio[6][4];
    int maxpiso;
    int maxpuerta;

    //Inicializacion

    piso=0;
    puerta=0;
    maxhabitantes=0;


    //Programa

    for(piso=0;piso<6;piso++)
    {
        for(puerta=0;puerta<4;puerta++)
        {
            printf("Introduzca el numero de habitantes:(PISO)(PUERTA)\n");
            scanf("%d",&habitantes);
            edificio[piso][puerta]=habitantes;
        }
    
    }

    for(piso=0;piso<6;piso++)
    {
        for(puerta=0;puerta<4;puerta++)
        {
            if(edificio[piso][puerta]>maxhabitantes)
            {
                maxhabitantes=edificio[piso][puerta];
                maxpiso=piso;
                maxpuerta=puerta;
            }
        }
    
    }
    printf("La vivienda con mas habitantes (%d) es piso %d puerta %d\n",maxhabitantes,maxpiso,maxpuerta);

    
}