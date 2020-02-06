#include <iostream>
using namespace std;

int main() 
{
int cuota,inicial,costo;
cout << "Inserte el Costo del Curso en Euros Aqui ";
cin >> costo;
inicial=costo*20/100;
cuota=(costo-inicial)/24;
cout << "La inicial a pagar es de Euros: " << inicial << " / Gracias por abonar el importe" << endl << "(Ejemplo otra línea)"<< endl;
cout << "El monto de las cuotas es de Euros: " << cuota << endl ;

return 0;
}
