#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;


class automovil
{

    int alarma;
    int ventanas;
    int puertas;
    int potencia;
    int velocidad;
    int motor;
    int movimiento;


    public:
    void estado_inicial();
    void abrir_coche();
    void arrancar();
    void acelerar();
    void parar();
    void apagar();
    void cerrar_coche();
    void cerrar_ventanas();
    void cerrar_puertas();
};

void automovil::estado_inicial()
{
    cout<<"ESTADO INICIAL DEL COCHE"<<endl;
    cout<<"¿Las ventanas están abiertas?\n 0-Cerradas\n 1-Abiertas"<<endl;
    cin>>ventanas;
    cout<<"¿Las puertas están abiertas?\n 0-Cerradas\n 1-Abiertas"<<endl;
    cin>>puertas;
    cout<<"¿El motor esta apagado?\n 0-Apagado\n 1-Encendido"<<endl;
    cin>>ventanas;
    cout<<"¿Que potencia tiene el coche?\n"<<endl;
    cin>>potencia;
    cout<<"¿Hasta que velocidad quieres acelerar?\n "<<endl;
    cin>>velocidad;

}

void automovil::abrir_coche()
{
    alarma=0;
    cout<<"Coche abierto y alarm desactivada\n"<<endl;
    sleep(1);
}

void automovil::arrancar()
{
    movimiento=0;
    if(puertas==1)
    {
        cerrar_puertas();
    }

    if (alarma==0 && movimiento==0 && puertas==0)
    {
        motor=1;
        cout<<"Coche encendido\n"<<endl;
    }
    sleep(1);
}

void automovil::acelerar()
{
    int vel_act;
    int i;

    movimiento=1;

    while(vel_act<=velocidad)
    {
        vel_act=potencia*0.01*i;
        cout<<"Acelerando...\n"<<endl;
        i++;
        sleep(1);
    }

    if(vel_act>velocidad)
    {
        vel_act=velocidad;
    }

    if(vel_act==velocidad)
    {
        cout<<"Circulando a "<<velocidad<<" km/h\n"<<endl;
        sleep(5);
    }
}

void automovil::parar()
{
    int vel_act;
    int i;


    while(vel_act>=0)
    {
        vel_act=vel_act-(potencia*0.01*i);
        cout<<"Frenando...\n"<<endl;
        i++;
        sleep(1);
    }

    if(vel_act<0)
    {
        vel_act=0;
    }

    if(vel_act==0)
    {
        cout<<"Parado\n"<<endl;
        movimiento=0;
    }
    sleep(2);
}

void automovil::apagar()
{
    movimiento=0;
    if(movimiento==0 && motor==1)
    {
        motor=0;
        cout<<"Coche apagado\n"<<endl;
    }
    sleep(1);
}

void automovil::cerrar_coche()
{
    if(puertas==1 || ventanas==1)
    {
        cerrar_puertas();
        cerrar_ventanas();
    }

    if (puertas==0 && ventanas==0 && motor==0)
    {
        cout<<"Coche cerrado y alarma activada\n"<<endl;
        alarma=1;
    }
    sleep(1);
}

void automovil::cerrar_puertas()
{
    puertas==0;
    cout<<"Puertas cerradas\n"<<endl;
    sleep(1);

}

void automovil::cerrar_ventanas()
{
    ventanas==0;
    cout<<"Ventanas cerradas\n"<<endl;
    sleep(1);
}

int main()
{
    automovil coche;

    coche.estado_inicial();
    coche.abrir_coche();
    coche.arrancar();
    coche.acelerar();
    coche.parar();
    coche.apagar();
    coche.cerrar_coche();

    return(0);
}


