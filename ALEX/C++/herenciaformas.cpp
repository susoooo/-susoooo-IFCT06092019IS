#include <iostream>
#include <string.h>

using namespace std;

class ClasePunto
{
    public:
    int x;
    int y;
    int z;

    ClasePunto (int a, int b, int c);
    ClasePunto ();
    void CambiarPunto ();
    void ObtenerPunto ();
};

ClasePunto::ClasePunto (int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}

ClasePunto::ClasePunto ()
{
    x=0;
    y=0;
    z=0;
}

void ClasePunto::CambiarPunto()
{

}

void ClasePunto::ObtenerPunto()
{

}

class Forma
{
    char color[30];
    char nombre[30];
    ClasePunto Centro;
    public:
    Forma (char *c, char *n, int c1, int c2, int c3);
    void ObtenerColor ();
    void ObtenerPosicion ();
    void CambiarColor (char *c);
    void MoverForma (int c);
};

void Forma::CambiarColor(char *c)
{
    strcpy(color, c);
}

void Forma::MoverForma(int c)
{
    Centro.x=Centro.x+c;
}

void Forma::ObtenerColor()
{
    cout << "Color: " << color << endl;
}

void Forma::ObtenerPosicion()
{
    cout << "Posición: " << Centro.x << ", " << Centro.y << ", " << Centro.z << endl;
}

Forma::Forma (char *c, char *n, int c1, int c2, int c3)
{
    strcpy(color, c);
    strcpy(nombre, n);
    Centro.x=c1;
    Centro.y=c2;
    Centro.z=c3;
}

class Rectangulo : public Forma
{
    float lmenor;
    float lmayor;
    float fescala;
    public:
    void CalcArea ();
    void CalcPerimetro ();
    void CambiaTamano (float f);
};

int main()
{
    ClasePunto mipunto(1,2,3);
    Forma forma1 ("Rojo","Mi Forma",0,0,0);
    forma1.CambiarColor("Amarillo");
    forma1.MoverForma(5);
    forma1.ObtenerColor();
    forma1.ObtenerPosicion();

}
