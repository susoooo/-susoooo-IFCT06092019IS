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

class forma : public Punto{
    protected:
        string color;
        string nombre;
        Punto centro;

    public:
        void cambiar_color(string n);
        void cambiar_nombre(string n);
        string mostrar_nombre();
        string mostrar_color();
        void mover(int x, int y);

};

string forma::mostrar_nombre()
{
    return(nombre);
}

void forma::cambiar_nombre(string n)
{
    nombre=n;
}

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
    cambiar_coord(c_x+x,c_y+y);
}

class rectangulo : public forma{
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

int main()
{
    forma circulo;
    string color;
    string nombre;
    int a,b,i;
    int l1,l2;
    rectangulo rects[4];
    float area[4];
    float perimetro[4];
    float escala[4];

    circulo.cambiar_nombre("Círculo");
    circulo.cambiar_color("azul");
    circulo.cambiar_coord(2,50);
    a=circulo.mostrar_coordx();
    b=circulo.mostar_coordy();

    color=circulo.mostrar_color();
    nombre=circulo.mostrar_nombre();
    cout<<nombre<< " de color "<<color<<" con centro en: ("<<a<<","<<b<<")"<<endl;

    circulo.mover(5,5);
    a=circulo.mostrar_coordx();
    b=circulo.mostar_coordy();

    cout<<nombre<<" movido a "<<"("<<a<<","<<b<<")"<<endl;

    for(i=0;i<4;i++)
    {
        cout<<"Introduzca los lados del rectangulo "<<i<<endl;
        cout<<"Lado mayor:"<<endl;
        cin>>l1;
        cout<<"Lado menor:"<<endl;
        cin>>l2;
        rects[i].lados(l1,l2);
    }

    for(i=0;i<4;i++)
    {
        area[i]=rects[i].area();
        perimetro[i]=rects[i].perimetro();

        cout<<"Rectangulo "<<i<<endl
            <<"Area: "<<area[i]<<endl
            <<"Perimetro: "<<perimetro[i]<<endl;
    }

    for(i=0;i<4;i++)
    {
        cout<<"Introduzca un factor de escala para el rectangulo "<<i<<endl;

        cin>>escala[i];
        rects[i].escalar(escala[i]);

        area[i]=rects[i].area();
        perimetro[i]=rects[i].perimetro();

        cout<<"Rectangulo "<<i<<endl
            <<"Area: "<<area[i]<<endl
            <<"Perimetro: "<<perimetro[i]<<endl;
    }
    

    return(0);
}