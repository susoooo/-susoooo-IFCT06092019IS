#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * pfich;
    char temp[100];

    printf("Introduzca el texto a guardar: ");
    gets(temp);

    pfich=fopen("textos.txt", "at");
    fputs(temp,pfich);

    fclose(pfich);
    return(0);
}
