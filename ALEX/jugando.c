#include <stdio.h>

main()
{
int seleccion;
seleccion = 0;
printf("escribe 1 para jugar y 2 para salir\n");
scanf("%d",&seleccion);
if(seleccion==1)
{printf("a jugar\n");
}
else
{
     if(seleccion==2)
     {printf("saliendo\n");
     }
     else
     {printf("errorrrrrrr\n");
     }
}
printf("programa acabado\n");
}
