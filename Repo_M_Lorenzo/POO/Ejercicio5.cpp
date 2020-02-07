#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;

class triangulo
{
    int base;
    int altura;
    double superficie;
    double perimetro;


    public:

    void valores();
    void area();
    void perim();

};

void triangulo::valores()
{
    cout<<"Introduzca la base del triangulo:\n"<<endl;
    cin>>base;
    cout<<"Introduzca la altura del triangulo\n"<<endl;
    cin>>altura;
}

void triangulo::area()
{
    superficie=0.5*base*altura;
    cout<<"El area del triangulos es: "<<superficie<<"\n"<<endl;
}

void triangulo::perim()
{
    perimetro=2*base+2*altura;
    cout<<"El perimetro es: "<<perimetro<<"\n"<<endl;
}

int main()
{
    triangulo t1;

    t1.valores();
    t1.area();
    t1.perim();

    return(0);
}
