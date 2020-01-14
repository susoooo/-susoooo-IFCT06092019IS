# include <stdio.h>
main()
{   int numero1;
    numero1 = 30;
    while(numero1 > 15)
    {
        printf("Hola\n");
        numero1 = numero1 -1;
    }

    do
    {
        printf("Adios\n");
        numero1 = numero1 + 1;
    }
    while(numero1 < 25);
}
