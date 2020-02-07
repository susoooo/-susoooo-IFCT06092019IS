#include <iostream>
using namespace std;

class persona
{
    char nombre[50];
    char apellidos[50];
    int dia_nacimiento;
    int mes_nacimiento;
    int anho_nacimiento;
    int anho_actual;

    public:
    void valores();
    void edad();
};

void persona::valores()
{
    cout<<"Introduzca el nombre\n"<<endl;
    cin>>nombre;
    cout<<"Introduzca los apellidos\n"<<endl;
    cin>>apellidos;
    getchar();
    cout<<"Introduzca el dia de nacimiento\n"<<endl;
    cin>>dia_nacimiento;
    cout<<"Introduzca el mes de nacimiento\n"<<endl;
    cin>>mes_nacimiento;
    cout<<"Introduzca el año de nacimiento\n"<<endl;
    cin>>anho_nacimiento;
    cout<<"Introduzca el año actual\n"<<endl;
    cin>>anho_actual;
}

void persona::edad()
{
    cout<<nombre<<" "<<apellidos<<" "<<"tiene "<<anho_actual-anho_nacimiento<<" años\n"<<endl;

}

int main()
{
    persona fulano;

    fulano.valores();
    fulano.edad();
    return(0);
}