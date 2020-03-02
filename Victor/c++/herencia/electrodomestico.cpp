#include <iostream>
#include <string.h>

using namespace std;

class Electrodomestico
{
    protected:
    float potencia;
    float consumo;
    float horas;
    public:
    Electrodomestico(float p, float c, float h);
    float CalcularConsumo();
};

Electrodomestico::Electrodomestico (float p, float c, float h)
{
    potencia=p;
    consumo=c;
    horas=h;
}

float Electrodomestico::CalcularConsumo()
{
    return potencia*consumo*horas;
}

class Lavadora: public Electrodomestico
{
    public:
    Lavadora (float p, float c, float h):Electrodomestico(p,c,h){}
    float CalcularConsumo();
};

float Lavadora::CalcularConsumo()
{
    return (potencia*0.5)*consumo*horas;
}

class Nevera: public Electrodomestico
{
    public:
    Nevera (float p, float c, float h):Electrodomestico(p,c,h){}
    float CalcularConsumo();
};

float Nevera::CalcularConsumo()
{
    return (potencia*0.7)*consumo*horas;
}

class Radiador: public Electrodomestico
{
    public:
    Radiador (float p, float c, float h):Electrodomestico(p,c,h){}
};

int main()
{
    Lavadora l1(50,25,8);
    Lavadora l2(50,25,8);
    Lavadora l3(50,25,8);
    Nevera n1(50,25,8);
    Nevera n2(50,25,8);
    Nevera n3(50,25,8);
    Radiador r1(50,25,8);
    Radiador r2(50,25,8);
    Radiador r3(50,25,8);

    cout << l1.CalcularConsumo() << endl;
    cout << l2.CalcularConsumo() << endl;
    cout << l3.CalcularConsumo() << endl;
    cout << n1.CalcularConsumo() << endl;
    cout << n2.CalcularConsumo() << endl;
    cout << n3.CalcularConsumo() << endl;
    cout << r1.CalcularConsumo() << endl;
    cout << r2.CalcularConsumo() << endl;
    cout << r3.CalcularConsumo() << endl;



    return 0;
}
