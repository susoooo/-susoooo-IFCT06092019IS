# include <stdio.h>
main ()
{   int mi_numero_dni[8]={0,0,0,0,0,0,0,0};
    int contador;
    for(contador=0;contador<8;contador++)
    {    scanf("%d",&mi_numero_dni[contador]);

    }
    for(contador=0;contador<8;contador++)
    {
   
    printf("%d",mi_numero_dni[contador]);
    }
    printf("\n");
}
