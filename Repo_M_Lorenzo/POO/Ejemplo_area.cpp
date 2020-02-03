#include <iostream>
using namespace std;

class MiClase
{
    int var1; //Variable de clase
    const double var2=3.14159; //Variable de clase

    public:
    void cambiarVar1(int a); // Declaracion de un metodo de clase
    double calcularArea(const double& x, const double& y); //Declaracion de un metodo de clase

};

void MiClase::cambiarVar1(int a)//Definicion del metodo
{
    var1=a;
}

double MiClase::calcularArea(const double& x, const double& y)
{
    return x*y*var2;
}

int main()
{
    MiClase miobjeto;//Declarando un objeto de la clase

    miobjeto.cambiarVar1(5);//Accediendo a un miembro

    double var=miobjeto.calcularArea(34.6,23.9); //Accediendo a un miembro
}