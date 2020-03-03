#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;

const float PI=3.1416;

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
        virtual void cambiar_color(string n);
        virtual void cambiar_nombre(string n);
        virtual string mostrar_nombre();
        virtual string mostrar_color();
        virtual void mover(int x, int y);
        virtual void imprimir();

};

string forma::mostrar_nombre()
{
    return(nombre);
}

void forma::imprimir()
{
    cout<<nombre<<endl;
    cout<<color<<endl;
    cout<<"Centro en: "<<c_x<<","<<c_y<<endl;
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
    cambiar_coord(x,y);
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
        void imprimir();


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

void rectangulo::imprimir()
{
    cout<<nombre;
    cout<<color;
    cout<<"Centro en: "<<c_x<<","<<c_y<<endl;
    cout<<"Lado mayor: "<<lado_mayor<<", Lado menor: "<<lado_menor<<endl;
    cout<<"Perimetro: "<<perimetro()<<endl;
    cout<<"Area: "<<area()<<endl;
}

class elipse : public forma{
    protected:
        int radio_mayor;
        int radio_menor;

    public:
        void radios(int a, int b);
        float area();
        float perimetro();
        void escalar(float factor);
        void imprimir();


};

void elipse::radios(int a, int b)
{
    radio_mayor=a;
    radio_menor=b;
}
float elipse::area()
{
    float area;
    area=(PI*(float)radio_mayor*(float)radio_menor);
    return(area);
}

float elipse::perimetro()
{
    float perm;
    perm=(2*PI)*(sqrt((pow(radio_mayor,2)+pow(radio_menor,2))/2));
    return(perm);
}

void elipse::escalar(float factor)
{
    radio_mayor=factor*radio_mayor;
    radio_menor=factor*radio_menor;
}

void elipse::imprimir()
{ 
    cout<<nombre;
    cout<<color;
    cout<<"Centro en: "<<c_x<<","<<c_y<<endl;
    cout<<"Lado mayor: "<<radio_mayor<<", Lado menor: "<<radio_menor<<endl;
    cout<<"Perimetro: "<<perimetro()<<endl;
    cout<<"Area: "<<area()<<endl;
}

class cuadrado:public rectangulo{
    protected:
        int lado;
    public:
        void lados(int a);
        void imprimir();
        void escalar(float factor);


};

void cuadrado::escalar(float factor)
{
    lado_mayor=lado_menor=lado=lado*factor;
}

void cuadrado::lados(int a)
{
    lado=lado_mayor=lado_menor=a;

}

void cuadrado::imprimir()
{
    cout<<nombre;
    cout<<color;
    cout<<"Centro en: "<<c_x<<","<<c_y<<endl;
    cout<<"Lado: "<<lado<<endl;
    cout<<"Perimetro: "<<perimetro()<<endl;
    cout<<"Area: "<<area()<<endl;
}

class circulo:public elipse{
    protected:
        int radio;
    public:
        void radios(int a);
        void imprimir();
        float perimetro();
        void escalar(float factor);


};

void circulo::escalar(float factor)
{
    radio_mayor=radio_menor=radio=factor*radio;
}

void circulo::radios(int a)
{
    radio=radio_mayor=radio_menor=a;

}

float circulo::perimetro()
{
    float perm;
    perm=2*PI*radio;
    return(perm);
}

void circulo::imprimir()
{
    cout<<nombre;
    cout<<color;
    cout<<"Centro en: "<<c_x<<","<<c_y<<endl;
    cout<<"Radio: "<<radio<<endl;
    cout<<"Perimetro: "<<perimetro()<<endl;
    cout<<"Area: "<<area()<<endl;
}


int main()
{
    circulo circ;
    string color;
    string nombre;
    elipse elps;
    cuadrado cuad;
    rectangulo rects;

    void * array[3];

    int a,b;
    int l1,l2;
    float area;
    float perimetro;
    float escala;


    //Circulo
    circ.cambiar_nombre("Círculo");
    circ.cambiar_color("Azul");
    cout<<"Introduzca el radio del circulo"<<endl;
    cout<<"Radio:"<<endl;
    cin>>l1;
    circ.radios(l1);
    cout<<"Introduzca las coordenadas del centro del circulo:"<<endl;
    cin>>a;
    cin>>b;
    circ.cambiar_coord(a,b);
    area=circ.area();
    perimetro=circ.perimetro();
    circ.imprimir();
    cout<<"Introduzca un factor de escala para el circulo"<<endl;
    cin>>escala;
    circ.escalar(escala);
    area=circ.area();
    perimetro=circ.perimetro();
    circ.imprimir();

    //Rectangulo
    cout<<"Introduzca los lados del rectangulo"<<endl;
    cout<<"Lado mayor:"<<endl;
    cin>>l1;
    cout<<"Lado menor:"<<endl;
    cin>>l2;
    rects.lados(l1,l2);
    cout<<"Introduzca las coordenadas del centro del rectangulo:"<<endl;
    cin>>a;
    cin>>b;
    rects.cambiar_coord(a,b);
    area=rects.area();
    perimetro=rects.perimetro();
    rects.imprimir();
    cout<<"Introduzca un factor de escala para el rectangulo "<<endl;
    cin>>escala;
    rects.escalar(escala);
    area=rects.area();
    perimetro=rects.perimetro();
    rects.imprimir();

    //Elipse
    cout<<"Introduzca los radios de la elipse"<<endl;
    cout<<"Radio mayor:"<<endl;
    cin>>l1;
    cout<<"Radio menor:"<<endl;
    cin>>l2;
    elps.radios(l1,l2);
    cout<<"Introduzca las coordenadas del centro de la elipse:"<<endl;
    cin>>a;
    cin>>b;
    elps.cambiar_coord(a,b);
    area=elps.area();
    perimetro=elps.perimetro();
    elps.imprimir();
    cout<<"Introduzca un factor de escala para la elipse"<<endl;
    cin>>escala;
    elps.escalar(escala);
    area=elps.area();
    perimetro=elps.perimetro();
    elps.imprimir();

    //Cuadrado
    cout<<"Introduzca el lado del cuadrado"<<endl;
    cout<<"Lado:"<<endl;
    cin>>l1;
    cuad.lados(l1);
    cout<<"Introduzca las coordenadas del centro del cuadrado:"<<endl;
    cin>>a;
    cin>>b;
    cuad.cambiar_coord(a,b);
    area=cuad.area();
    perimetro=cuad.perimetro();
    cuad.imprimir();
    cout<<"Introduzca un factor de escala para el cuadrado "<<endl;
    cin>>escala;
    cuad.escalar(escala);
    area=cuad.area();
    perimetro=cuad.perimetro();
    cuad.imprimir();

    array[0]=&rects;
    array[1]=&circ;
    array[2]=&cuad;
    int i;
    for(i=0;i<3;i++)
    {
        array[i].imprimir();

    }

        

    return(0);
}