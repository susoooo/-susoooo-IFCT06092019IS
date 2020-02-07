#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;

class alumno
{
    char dni[9];
    int num_asignaturas;
    double media;
    int *notas;

    public:
    void datos();
    void nota_media();

};

void alumno::datos()
{
    cout<<"Introduzca el DNI\n"<<endl;
    cin>>dni;
    cout<<"Introduzca el numero de asignaturas (max 30)\n"<<endl;
    cin>>num_asignaturas;
}

void alumno::nota_media()
{
    if(num_asignaturas>30)
    {
        cout<<"Maximo de asignaturas superado. Introduzca un nuevo valor\n"<<endl;
        cin>>num_asignaturas;
    }
    else
    {
        int i;
        notas=(int*)malloc(sizeof(int)*num_asignaturas);
        srand(time(0));
        media=0;
        for(i=0;i<num_asignaturas;i++)
        {
            notas[i]=rand()%11;
            media=media+notas[i];
        }
        media=media/num_asignaturas;

        cout<<"La nota media del alumno con DNI "<<dni<<" es"<<media<<" en un total de "<<num_asignaturas<<" asignaturas\n"<<endl;
    
    }
    
}

int main()
{
    alumno paisano;

    paisano.datos();
    paisano.nota_media();

    return(0);
}
