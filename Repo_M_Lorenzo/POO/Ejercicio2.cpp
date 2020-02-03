#include <iostream>
using namespace std;

class Punto
{
    int x;
    int y;
    int z;

    public:
    void coord();
    void representar();
};

void Punto::coord()
{
    x=rand()%10;
    y=rand()%10;
    z=rand()%10;
}

void Punto::representar()
{
    cout<< "Punto"<< " CX " << x << " CY " << y << " CZ " << z <<endl;

}

int main()
{
    Punto p1;
    Punto p2;
    Punto p3;
    
    p1.coord();
    p2.coord();
    p3.coord();
    
    p1.representar();
    p2.representar();
    p3.representar();

    

    return (0);
}