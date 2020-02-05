#include <stdio.h>

int main()
{
    struct dato
    {
        int proceso;
        int sinal;
    };
    struct dato datos;
    FILE * pfich;
    int leidos;

    pfich=fopen("señales.txt", "rb");
    do
    {
        leidos=fread(&datos, sizeof(struct dato), 1, pfich);
        if(!feof(pfich))
        {
            printf ("Señal registrada: %d \nNúmero de proceso: %d \n",datos.sinal,datos.proceso);
        }
    }
    while (!feof(pfich));
    fclose(pfich);
}


