#include <stdio.h>
#include <string.h>
#include <math.h>

#define NUMEMPLEADOS 3

struct empleado {
    char nombre[50];
    char sexo[50];
    long salario;
};

struct empleado ficha()
{
   struct empleado paisano;

   printf("Introduce el nombre:\n");
   gets(paisano.nombre);
   printf("Introduce el sexo:\n");
   gets(paisano.sexo);
   printf("Introduce salario:\n");
   scanf("%ld",&paisano.salario);
   getchar();
  
 return(paisano);  

}

void Top(int n, struct empleado currantes[NUMEMPLEADOS])
{
    int contador;
    int numEmpleadomax;
    int numEmpleadomin;
    long maxSalario;
    long minSalario;
    maxSalario=0;
    minSalario=100000000000;

    printf("\nTrabajador con mayor salario:\n");
    for(contador=0;contador<n;contador++)
    {
        if(currantes[contador].salario>=maxSalario)
        {
            maxSalario=currantes[contador].salario;
            numEmpleadomax=contador;

        }
    }

    printf("\n");
    puts(currantes[numEmpleadomax].nombre);
    puts(currantes[numEmpleadomax].sexo);
    printf("\n%ld€ \n",currantes[numEmpleadomax].salario);

    printf("\nTrabajador con menor salario:\n");
    for(contador=0;contador<n;contador++)
    {
        if(currantes[contador].salario<=minSalario)
        {
            minSalario=currantes[contador].salario;
            numEmpleadomin=contador;

        }
    }

    printf("\n");
    puts(currantes[numEmpleadomin].nombre);
    puts(currantes[numEmpleadomin].sexo);
    printf("\n%ld€ \n",currantes[numEmpleadomin].salario);

}


int main()
{
    struct empleado empleados[NUMEMPLEADOS];
    int contador;

    for(contador=0;contador<NUMEMPLEADOS;contador++)
    {
        empleados[contador]=ficha();
    }

    Top(NUMEMPLEADOS,empleados);


    return(0);
}