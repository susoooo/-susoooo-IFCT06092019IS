#include <iostream>

using namespace std;

class Miclase
{
    public:
    int var1;
    const double var2 = 3.14159;

    void cambiarVar1(int a);
    double calcularArea(const double& x, const double& y);
};

void Miclase::cambiarVar1 (int a)
{
    var1 = a;
}

double Miclase::calcularArea(const double& x, const double& y)
{
    return x*y*var2;
}

int main()
{
    Miclase miObjeto;

    miObjeto.cambiarVar1(5);
    cout << "Var1= " << miObjeto.var1 << endl;
    double var = miObjeto.calcularArea(34.6, 23.9);
    cout << "Area= " << var << endl;
}
