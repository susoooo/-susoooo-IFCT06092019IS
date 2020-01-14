#include <stdio.h>

int main()
{
    struct empleado
    {
        char nombre[30];
        char sexo[6];
        float sueldo;
    };
    struct empleado empleados[100];
    int numero;
    int contador;
    float mayor;
    float menor;
    int temp;
    int temp2;

    numero=0;
    contador=0;
    mayor=0.0;
    menor=0.0;
    temp=0;
    temp2=0;

    do
	{
		printf("Introduzca el número de empleados: ");
		scanf("%d", &numero);
		if(numero<=0 || numero >100)
		{
			printf("Introduzca un número entre 1 y 100\n");
		}
	}
    while(numero<0 || numero >100);

    getchar();
    printf("Introduzca datos para %d empleados\n",numero);
	for (contador=0;contador<numero;contador++)
	{
		printf("Empleado %d\n",contador+1);
		printf("Nombre: ");
		gets(empleados[contador].nombre);
		printf("Sexo: ");
		gets(empleados[contador].sexo);
		printf("Sueldo: ");
		scanf("%f", &(empleados[contador].sueldo));
		printf("\n");
		getchar();
	}
	mayor=empleados[0].sueldo;
    for(contador=0;contador<numero;contador++)
    {
        if(mayor < empleados[contador].sueldo)
        {
            mayor=empleados[contador].sueldo;
            temp=contador;
        }
    }
    printf("El empleado con mayor salario es:\nNombre: ");
    puts(empleados[temp].nombre);
    printf("Sexo: ");
    puts(empleados[temp].sexo);
    printf("Salario: %.0f\n",empleados[temp].sueldo);

	menor=empleados[0].sueldo;
    for(contador=0;contador<numero;contador++)
    {
        if(menor > empleados[contador].sueldo)
        {
            menor=empleados[contador].sueldo;
            temp2=contador;
        }
    }
    printf("El empleado con menor salario es:\nNombre: ");
    puts(empleados[temp2].nombre);
    printf("Sexo: ");
    puts(empleados[temp2].sexo);
    printf("Salario: %.0f\n",empleados[temp2].sueldo);
}
