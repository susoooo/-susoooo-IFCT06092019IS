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
   // virtual float Area()=0;
   // virtual void Imprime()=0;
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
    float CalcArearec ();
    float CalcPerimetro ();
    void CambiaTamano (float f);
    void Imprimirrec();
};

float Rectangulo::CalcArearec()
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

class Elipse : public Forma
{
    float rmenor;
    float rmayor;
    public:
    Elipse (char *c, char *n, int c1, int c2, int c3, float rn, float ry):Forma(c,n,c1,c2,c3)
    {
        rmenor=rn;
        rmayor=ry;
    }
    float CalcAreaeli ();
    void Imprimireli();
};

float Elipse::CalcAreaeli()
{
    return 3.1416*(rmenor*rmayor);
}

void Elipse::Imprimireli()
{
    Imprimirforma ();
    cout << "Radio menor: " << rmenor << endl;
    cout << "Radio mayor: " << rmayor << endl;
}

class Cuadrado : public Rectangulo
{
    public:
    Cuadrado (char *c, char *n, int c1, int c2, int c3, float ln, float ly):Rectangulo(c,n,c1,c2,c3,ln,ly){}
    float CalcAreacua ();
    void Imprimircua();
};

float Cuadrado::CalcAreacua()
{
    return CalcArearec();
}

void Cuadrado::Imprimircua()
{
    Imprimirrec();
}

class Circulo : public Elipse
{
    public:
    Circulo (char *c, char *n, int c1, int c2, int c3, float rn, float ry):Elipse(c,n,c1,c2,c3,rn,ry){}
    float CalcAreacir ();
    void Imprimircir();
};

float Circulo::CalcAreacir()
{
    return CalcAreaeli();
}

void Circulo::Imprimircir()
{
    Imprimireli ();
}

int main()
{
    int i;
    Forma * miArray[5];
    ClasePunto mipunto(1,2,3);
    Forma forma1 ("Rojo","Mi Forma",1,3,5);
    //cout << forma1.ObtenerColor() << endl;
    forma1.CambiarColor("Amarillo");

    forma1.MoverForma(5,3,1);
    forma1.Imprimirforma();
    //cout << forma1.ObtenerColor() << endl;
    cout << endl;
    Rectangulo r1 ("Verde","Mi rectángulo",4,5,6,9,15);
    r1.CambiaTamano(0.5);
    r1.Imprimirrec();
    cout << "Área: " << r1.CalcArearec() << endl;
    cout << "Perímetro: " << r1.CalcPerimetro() << endl;
    cout << endl;
    Elipse e1 ("Gris","Mi elipse",6,3,1,4,5);
    e1.Imprimireli();
    cout << "Área: " << e1.CalcAreaeli() << endl;
    cout << endl;
    Cuadrado cu1 ("Azul","Mi cuadrado",1,6,3,2,2);
    cu1.Imprimircua();
    cout << "Área: " << cu1.CalcAreacua() << endl;
    cout << endl;
    Circulo ci1 ("Violeta","Mi círculo",7,6,4,3,3);
    ci1.Imprimircir();
    cout << "Área: " << ci1.CalcAreacir() << endl;

    miArray[0]=&forma1;
    miArray[1]=&r1;
    miArray[2]=&e1;
    miArray[3]=&cu1;
    miArray[4]=&ci1;

    for (i=0;i<5;i++)
    {
        (*(miArray[i])).CambiarColor("Negro");
        (*(miArray[i])).MoverForma(0,0,0);
    }
    cout << endl;
    forma1.Imprimirforma();
    cout << endl;
    r1.Imprimirrec();
    cout << endl;
    e1.Imprimireli();
    cout << endl;
    cu1.Imprimircua();
    cout << endl;
    ci1.Imprimircir();
}
