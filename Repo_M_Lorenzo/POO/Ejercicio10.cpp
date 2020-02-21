#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class persona{

    string nombre;
    string apellido1;
    string apellido2;
    string fecha_nacimiento;
    string lugar_nacimiento;
    string pais;
    int dni;

    void datos();

    public:

    persona();
    persona(int);
    persona(string);
    persona(string,string);
    persona(string,string,string);
    persona(string,string,string,string,string,string,int);
    void presentar_datos();

};

void persona::datos()
{
    nombre="Pepito";
    apellido1="Perez";
    apellido2="Perez";
    fecha_nacimiento="01/01/2001";
    lugar_nacimiento="Estupendo de arriba";
    pais="España";
    dni=15236458;
}

persona::persona()
{   
    datos();
}

persona::persona(int n_dni)
{
    datos();
    dni=n_dni;

}

persona::persona(string nome)
{
    datos();
    nombre=nome;
}


persona::persona(string apelido1,string apelido2)
{
    datos();
    apellido1=apelido1;
    apellido2=apelido2;
}

persona::persona(string nome,string apelido1,string apelido2,string data_nacem,string lugar_nacem,string n_pais,int n_dni)
{
    nombre=nome;
    apellido1=apelido1;
    apellido2=apelido2;
    fecha_nacimiento=data_nacem;
    lugar_nacimiento=lugar_nacem;
    pais=n_pais;
    dni=n_dni;
}

void persona::presentar_datos()
{
    cout<<nombre<<endl
        <<apellido1<<endl
        <<apellido2<<endl
        <<fecha_nacimiento<<endl
        <<lugar_nacimiento<<endl
        <<pais<<endl
        <<dni<<endl;
}

int main() 
{
    persona diego;   
    diego.presentar_datos(); 
    persona nestor(12365874);
    nestor.presentar_datos();
    persona guille("Guille");
    guille.presentar_datos();
    persona miguel("Diaz","Diaz");
    miguel.presentar_datos();
    persona manel("Manuel Angel","Lorenzo","Cruzado","16/09/1984","Lugo","España",33537842);
    manel.presentar_datos();
    

}