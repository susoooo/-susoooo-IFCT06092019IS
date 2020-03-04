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
    virtual float Area()=0;
    virtual void Imprime()=0;
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
    float Area ();
    float CalcPerimetro ();
    void CambiaTamano (float f);
    void Imprime();
};

float Rectangulo::Area()
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

void Rectangulo::Imprime()
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
    float Area ();
    void Imprime();
};

float Elipse::Area()
{
    return 3.1416*(rmenor*rmayor);
}

void Elipse::Imprime()
{
    Imprimirforma ();
    cout << "Radio menor: " << rmenor << endl;
    cout << "Radio mayor: " << rmayor << endl;
}

class Cuadrado : public Rectangulo
{
    public:
    Cuadrado (char *c, char *n, int c1, int c2, int c3, float ln, float ly):Rectangulo(c,n,c1,c2,c3,ln,ly){}
    float Area ();
    void Imprime();
};

float Cuadrado::Area()
{
    return Rectangulo::Area();
}

void Cuadrado::Imprime()
{
    Rectangulo::Imprime();
}

class Circulo : public Elipse
{
    public:
    Circulo (char *c, char *n, int c1, int c2, int c3, float rn, float ry):Elipse(c,n,c1,c2,c3,rn,ry){}
    float Area ();
    void Imprime();
};

float Circulo::Area()
{
    return Elipse::Area();
}

void Circulo::Imprime()
{
    Elipse::Imprime ();
}

int main()
{
    int i;
    int imayor;
    float mayor;
    mayor=0;
    Forma * miArray[5];
    ClasePunto mipunto(1,2,3);
    Rectangulo r1 ("Verde","Mi rectángulo",4,5,6,9,15);
    r1.CambiaTamano(0.5);
    r1.Imprime();
    cout << "Área: " << r1.Area() << endl;
    cout << "Perímetro: " << r1.CalcPerimetro() << endl;
    cout << endl;
    Elipse e1 ("Gris","Mi elipse",6,3,1,4,5);
    e1.Imprime();
    cout << "Área: " << e1.Area() << endl;
    cout << endl;
    Cuadrado cu1 ("Azul","Mi cuadrado",1,6,3,2,2);
    cu1.Imprime();
    cout << "Área: " << cu1.Area() << endl;
    cout << endl;
    Circulo ci1 ("Violeta","Mi círculo",7,6,4,3,3);
    ci1.Imprime();
    cout << "Área: " << ci1.Area() << endl;
    cout << endl;
    Circulo ci2 ("Amarillo","Mi círculo2",3,4,2,4,4);
    ci2.Imprime();
    cout << "Área: " << ci2.Area() << endl;

    cout << endl;
    miArray[0]=&r1;
    miArray[1]=&e1;
    miArray[2]=&cu1;
    miArray[3]=&ci1;
    miArray[4]=&ci2;

    for (i=0;i<5;i++)
    {
        if(mayor < (*(miArray[i])).Area())
            {
                mayor=(*(miArray[i])).Area();
                imayor=i;
            }
    }
    cout << "Área Mayor: " << endl;
    (*(miArray[imayor])).Imprime();
    cout << "Área: " << (*(miArray[imayor])).Area() << endl;
}
