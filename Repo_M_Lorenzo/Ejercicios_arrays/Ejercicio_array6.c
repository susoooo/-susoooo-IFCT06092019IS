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
    int habitantespuerta[4]={0,0,0,0};
    int mhabitpuerta;
    int maxpuerta;
    
    //Inicializacion

    piso=0;
    puerta=0;
    maxhabitantes=0;
    maxpuerta=0;
    mhabitpuerta=0;
      
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
            habitantespuerta[puerta]=habitantespuerta[puerta]+edificio[piso][puerta];
            if (habitantespuerta[puerta]>mhabitpuerta)
            {
                mhabitpuerta=habitantespuerta[puerta];
                maxpuerta=puerta;
            }
        
        }

       


    
    }
    printf("La puerta con mas habitantes es %d\n",maxpuerta);

    
}