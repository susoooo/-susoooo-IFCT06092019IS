#include <iostream>
#include <unistd.h>

using namespace std;

class ClaseAutomovil
{
    int puerta;
    int motor;
    int pedal;
    public:
    void Puertas (int puerta);
    void Motores (int motor);
    void Pedales (int i, int pedal);
};

void ClaseAutomovil::Puertas (int puerta)
{
    if (puerta==1)
    {
        cout << "Coche abierto" << endl;
    }
    else
    {
        cout << "Coche cerrado" << endl;
    }

}

void ClaseAutomovil::Motores (int motor)
{
    if (motor==1)
    {
        cout << "Coche encendido" << endl;
    }
    else
    {
        cout << "Coche apagado" << endl;
    }

}

void ClaseAutomovil::Pedales (int i, int pedal)
{
    if (pedal==1)
    {
        i=i*10;
        cout << "Acelerando " << i << " Km/h" << endl;
    }
    else
    {
        i=i*10;
        cout << "Frenando " << i << " Km/h" << endl;
    }
     //cout<<"\e[A";
}


int main()
{
    int i;
    ClaseAutomovil objCoche;

    objCoche.Puertas(1);
    sleep(1);
    objCoche.Motores(1);
    sleep(1);
    for(i=0;i<=10;i++)
    {
        objCoche.Pedales(i,1);
        sleep(1);
    }
    sleep(3);
    for(i=10;i>=0;i--)
    {
        objCoche.Pedales(i,0);
        sleep(1);
    }
    objCoche.Motores(0);
    sleep(1);
    objCoche.Puertas(0);
}
