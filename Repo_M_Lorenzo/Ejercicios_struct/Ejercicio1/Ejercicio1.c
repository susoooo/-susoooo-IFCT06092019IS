#include <stdio.h>
#include <string.h>
#include <math.h>

#define NUMJUGADORES 3

struct jugador{
    char nombre[50];
    char apellido[50];
    char apodo[50];
    int altura;
    int edad;

};

struct jugador ficha()
{
   struct jugador paisano;

   printf("Introduce el nombre:\n");
   gets(paisano.nombre);
   printf("Introduce el apellido:\n");
   gets(paisano.apellido);
   printf("Introduce el apodo:\n");
   gets(paisano.apodo);
   printf("Introduce altura (cm):\n");
   scanf("%d",&paisano.altura);
   printf("Introduce edad:\n");
   scanf("%d",&paisano.edad);
   getchar();
  
 return(paisano);  

}
void listarNombre(int n,struct jugador jugadores[NUMJUGADORES])
{
    int contador;

    for (contador=0;contador<n;contador++)
    {
        printf("\n%d ",contador);
        puts(jugadores[contador].nombre);
    }

}

void listarAltura(int n,struct jugador jugadores[NUMJUGADORES])
{
    int contador;

    for (contador=0;contador<n;contador++)
    {
        printf("\n%d %d",contador,jugadores[contador].altura);
        
    }

}

void listarEdad(int n,struct jugador jugadores[NUMJUGADORES])
{
    int contador;

    for (contador=0;contador<n;contador++)
    {
        printf("\n%d %d",contador,jugadores[contador].edad);
        
    }

}

void Buscar(int n, struct jugador jugadores[NUMJUGADORES])
{
    int contador;
    char nombreBusca[50];
    printf("\nIntroduzca el nombre a buscar:\n");
    gets(nombreBusca);
    for(contador=0;contador<n;contador++)
    {
        if(strcmp(nombreBusca,jugadores[contador].nombre)==0)
        {
            puts(jugadores[contador].nombre);
            printf("\n%d cm\n",jugadores[contador].altura);
            printf("\n%d años\n",jugadores[contador].edad);

        }
    }


}

void Top(int n, struct jugador jugadores[NUMJUGADORES])
{
    int contador;
    int maxAltura;
    int numJugador;
    maxAltura=0;
    numJugador=0;

    printf("\nJugador mas alto:\n");
    for(contador=0;contador<n;contador++)
    {
        if(jugadores[contador].altura>=maxAltura)
        {
            maxAltura=jugadores[contador].altura;
            numJugador=contador;

        }
    }

    printf("\n");
    puts(jugadores[numJugador].nombre);
    printf("\n%d cm\n",jugadores[numJugador].altura);
    printf("\n%d años\n",jugadores[numJugador].edad);


}

int main()
{
    int contador;
    struct jugador mijugador[NUMJUGADORES];
    for(contador=0;contador<NUMJUGADORES;contador++)
    {
        mijugador[contador]=ficha();
    }

    listarNombre(NUMJUGADORES, mijugador);
    listarAltura(NUMJUGADORES, mijugador);
    listarEdad(NUMJUGADORES, mijugador);
    Buscar(NUMJUGADORES, mijugador);
    Top(NUMJUGADORES,mijugador);

    return(0);
}