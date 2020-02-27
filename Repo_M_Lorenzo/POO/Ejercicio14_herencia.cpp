#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Punto{
    protected:
        int c_x;
        int c_y;

    public:
        void cambiar_coord(int x, int y);
        int mostrar_coordx();
        int mostar_coordy();       

};


void Punto::cambiar_coord(int x,int y)
{
    c_x=x;
    c_y=y;
}

int Punto::mostrar_coordx()
{
    return(c_x);

}

int Punto::mostar_coordy()
{
    return(c_y);

}

class forma: public Punto{
    protected:
        string color;
        string nombre;
        Punto centro;

    public:
        void cambiar_color(string n);
        string mostrar_color();
        void mover(int x, int y);

};

void forma::cambiar_color(string n)
{   
    color=n;
}

string forma::mostrar_color()
{
    return(color);
}

void forma::mover(int x,int y)
{
    centro.cambiar_coord(x,y);
}

class rectangulo: public forma{
    protected:
        int lado_mayor;
        int lado_menor;

    public:
        void lados(int a, int b);
        float area();
        float perimetro();
        void escalar(float factor);

};

void rectangulo::lados(int a, int b)
{
    lado_mayor=a;
    lado_menor=b;
}
float rectangulo::area()
{
    float area;
    area=lado_mayor*lado_menor;
    return(area);
}

float rectangulo::perimetro()
{
    float perm;
    perm=(2*lado_mayor)+(2*lado_menor);
    return(perm);
}

void rectangulo::escalar(float factor)
{
    lado_mayor=factor*lado_mayor;
    lado_menor=factor*lado_menor;
}