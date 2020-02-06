#include <iostream>
using namespace std;

class MiClase
    {
	int var1; //Acceso privado por defecto
	const double var2 = 3.14159;  //Acceso privado por defecto
	
	public: //De aquí en adelante los miembros son públicos a no ser que se exprese lo contrario
	void cambiarVar1(int a); //Acceso público
	double calcularArea(const double& x, const double& y); //Acceso público
    };

void MiClase::cambiarVar1(int a)
    {
	var1 = a;
    }

double MiClase::calcularArea(const double& x, const double& y)
    {
	return x*y*var2;
    }

int main()
{
	MiClase obj;
	
	obj.cambiarVar1(100); //Ok!
	//obj.var1 = 200;       //Error!
	
	return 0;
}