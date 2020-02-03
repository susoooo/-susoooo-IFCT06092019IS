#include <iostream>
using namespace std;

class automovil
{
    class motor mot;
    class neumatico rodas;
    class seguridad seg;
    int velocidad;

    public:
    void coord();
};

class neumatico
{
    int perfil;
    int llanta;
    int indice_carga;
    char indice_vel;

    public:
    void valores_neumatico();

};

class motor
{
    int cilindrada;
    int potencia;

    public:
    void valores_motor();
};

class seguridad
{
    int ventanillas;
    int tapa_deposito;
    int puertas;

    public:
    void valores_seguridad();

};