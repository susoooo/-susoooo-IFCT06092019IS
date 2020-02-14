#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class persona{

    char *nombre;
    char *apellido1;
    char *apellido2;
    char *fecha_nacimiento;
    char *lugar_nacimiento;
    char *pais;
    int dni;

    void datos();

    public:

    persona();
    persona(int);
    persona(char*);
    persona(char*,char*);
    persona(char*,char*,char*);
    persona(char*,char*,char*,char*,char*,char*,int);
    void presentar_datos();
    ~persona();

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

persona::persona(char *nome)
{
    datos();
    nombre=nome;
}


persona::persona(char *apelido1,char *apelido2)
{
    datos();
    apellido1=apelido1;
    apellido2=apelido2;
}

persona::persona(char *nome,char *apelido1,char *apelido2,char *data_nacem,char *lugar_nacem,char *n_pais,int n_dni)
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

persona::~persona()
{
  
    cout << "\nAdios"<<" "<<nombre<<endl;

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

    return(0);  

}