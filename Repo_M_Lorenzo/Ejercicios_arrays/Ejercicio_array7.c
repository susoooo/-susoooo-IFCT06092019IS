#include <stdio.h>
#include <string.h>

main()
{
    //Variables
    int piso;
    int puerta;
    int habitantes;
    int edificio[6][4];
    int habitantespiso[6]={0, 0, 0, 0, 0, 0};
    int mediapiso[6]={0, 0, 0, 0, 0, 0};
    
    //Inicializacion
    piso=0;
    puerta=0;
    
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
            habitantespiso[piso]=habitantespiso[piso]+edificio[piso][puerta];
        }

        mediapiso[piso]=habitantespiso[piso]/4;

        printf("La media de habitantes del piso %d es %d\n",piso,mediapiso[piso]);


    
    }
    

    
}