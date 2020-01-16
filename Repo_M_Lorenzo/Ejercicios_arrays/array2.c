#include <stdio.h>
#include <math.h>

main()
{
    int mi_dni[8];
    int contador;

    for(contador=0;contador<8;contador++)
    {
        scanf("%d",&mi_dni[contador]);

    }

    for (contador = 0;contador<8;contador++)
    {
        printf("%d",mi_dni[contador]);
    }

    printf("\n");
}
