#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;

class Punto
{
    
    public:
    int x;
    int y;
    int z;

    
    void coord();
    void representar();
};

void Punto::coord()
{
    srand(time(0));
    x=rand()%10;
    y=rand()%10;
    z=rand()%10;
    sleep(1);
}

void Punto::representar()
{
    cout<< "Punto"<< " CX " << x << " CY " << y << " CZ " << z <<endl;

}

class triang
{
    class Punto a;
    class Punto b;
    class Punto c;
    double l1;
    double l2;
    double l3;
    double perim;

    public:
    void distancia(Punto a, Punto b, Punto c);
    void resultado();

};

void triang::distancia(Punto a, Punto b, Punto c)
{
    l1=sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y))+((b.z-a.z)*(c.z-a.z)));
    l2=sqrt(((c.x-b.x)*(c.x-b.x))+((c.y-b.y)*(c.y-b.y))+((c.z-b.z)*(c.z-b.z)));
    l3=sqrt(((a.x-c.x)*(a.x-c.x))+((a.y-c.y)*(a.y-c.y))+((a.z-c.z)*(a.z-c.z)));
    perim=l1+l2+l3;
}

void triang::resultado()
{  
    cout<<"El primer lado mide:"<<l1<<"\n"<<endl;
    cout<<"El segundo lado mide:"<<l2<<"\n"<<endl;
    cout<<"El tercer lado mide:"<<l3<<"\n"<<endl;
    cout<<"El perimetro mide:"<<perim<<"\n"<<endl;

}

int main()
{
    Punto p1;
    Punto p2;
    Punto p3;
    triang t1;

    //Puntos
    p1.coord();
    p2.coord();
    p3.coord();    
    p1.representar();
    p2.representar();
    p3.representar();

    //Triangulo

    t1.distancia(p1,p2,p3);
    t1.resultado();    

    return (0);
}