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
    int habitantespiso[6];
    int mhabitpiso;
    int maxpiso;
    

    //Inicializacion

    piso=0;
    puerta=0;
    maxhabitantes=0;
    maxpiso=0;
    mhabitpiso=0;
      


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
            maxhabitantes=maxhabitantes+edificio[piso][puerta];
        }

        habitantespiso[piso]=maxhabitantes;
        if(habitantespiso[piso]>mhabitpiso)
        {
            mhabitpiso=habitantespiso[piso];
            maxpiso=piso;
        }


    
    }
    printf("El piso con mas habitantes es %d\n",maxpiso);

    
}