#include <iostream>

using namespace std;
int main()
{
    int cuota,inicial,costo;
    cout << "Inserte el Costo del Curso en Euros Aqui ";
    cin >> costo;
    inicial=costo*20/100;
    cuota=(costo-inicial)/24;
    cout << "La inicial a pagar es de " << inicial << " Euros" << endl << "El monto de las cuotas es de " << cuota << " Euros" << endl;
    return 0;
}
