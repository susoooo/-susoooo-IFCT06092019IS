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
    char* ObtenerColor ();
    void CambiarColor (char *c);
    void MoverForma (int a, int b, int c);
    void Imprimirforma();
};

void Forma::CambiarColor(char *c)
{
    strcpy(color, c);
}

void Forma::MoverForma(int a, int b, int c)
{
    Centro.x=a;
    Centro.y=b;
    Centro.z=c;
}

char* Forma::ObtenerColor()
{
    return color;
}

void Forma::Imprimirforma()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Color: " << color << endl;
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
    public:
    Rectangulo (char *c, char *n, int c1, int c2, int c3, float ln, float ly):Forma(c,n,c1,c2,c3)
    {
        lmenor=ln;
        lmayor=ly;
    }
    float CalcArea ();
    float CalcPerimetro ();
    void CambiaTamano (float f);
    void Imprimirrec();
};

float Rectangulo::CalcArea()
{
    return lmenor*lmayor;
}

float Rectangulo::CalcPerimetro()
{
    return (2*lmenor)+(2*lmayor);
}

void Rectangulo::CambiaTamano (float f)
{
    lmenor=lmenor*f;
    lmayor=lmayor*f;
}

void Rectangulo::Imprimirrec()
{
    Imprimirforma ();
    cout << "Lado menor: " << lmenor << endl;
    cout << "Lado mayor: " << lmayor << endl;
}

int main()
{
    ClasePunto mipunto(1,2,3);
    Forma forma1 ("Rojo","Mi Forma",1,3,5);
    //cout << forma1.ObtenerColor() << endl;
    forma1.CambiarColor("Amarillo");
    forma1.MoverForma(5,3,1);
    forma1.Imprimirforma();
    //cout << forma1.ObtenerColor() << endl;
    cout << endl;
    Rectangulo r1 ("Verde","Mi rectángulo",3,4,5,9,15);
    r1.CambiaTamano(0.5);
    r1.Imprimirrec();
    cout << "Área: " << r1.CalcArea() << endl;
    cout << "Perímetro: " << r1.CalcPerimetro() << endl;
}
