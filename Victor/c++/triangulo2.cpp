#include <iostream>

using namespace std;

class ClaseTriangulo
{
    int altura;
    int base;
    public:
    void Cambiar (int a, int b);
    void Area (int a, int b);
    void Perimetro (int a, int b);
};

void ClaseTriangulo::Cambiar (int a, int b)
{
    altura=a;
    base=b;
    cout << "Altura: " << altura << endl << "Base: " << base << endl;
}

void ClaseTriangulo::Area (int a, int b)
{
    cout << "Area: " << altura*base << endl;
}

void ClaseTriangulo::Perimetro (int a, int b)
{
    cout << "Perimetro: " << 2*altura+2*base << endl;
}


int main()
{
    int alt;
    int bas;
    ClaseTriangulo objTri;

    cout << "Introduce la altura del triangulo: " << endl;
    cin >> alt;
    cout << "Introduce la base del triangulo: " << endl;
    cin >> bas;

    objTri.Cambiar(alt,bas);
    objTri.Area(alt,bas);
    objTri.Perimetro(alt,bas);
}
