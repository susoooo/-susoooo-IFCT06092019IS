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

    public:

    void datos_aleatorios();
    void datos_persona(string,string,string,string,string,string,int);
    void presentar_datos();

};

void persona::datos_aleatorios()
{
    nombre="Pepito";
    apellido1="Perez";
    apellido2="Perez";
    fecha_nacimiento="01/01/2001";
    lugar_nacimiento="Estupendo de arriba";
    pais="España";
    dni=15236458;
}

void persona::datos_persona(string nome,string apelido1,string apelido2,string data_nacem,string lugar_nacem,string n_pais,int n_dni)
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

class asalariado : public persona{

    protected: 
        int sueldo_neto;
        int retencion;

    public:
        void cambiar_sueldo(int n);
        void cambiar_retencion(int n);
        int mostrar_sueldo();
        int mostrar_retencion();
};

void asalariado::cambiar_sueldo(int n)
{
    sueldo_neto=n;
}

void asalariado::cambiar_retencion(int n)
{
    retencion=n;
}

int asalariado::mostrar_sueldo()
{
    return(sueldo_neto);
}

int asalariado::mostrar_retencion()
{
    return(retencion);
}

class obrero:public asalariado{
    protected:
        string cargo;

    public:
        void cambiar_cargo(string n);
        string mostrar_cargo();
};

void obrero::cambiar_cargo(string n)
{
    cargo=n;
}

string obrero::mostrar_cargo()
{
    return(cargo);
}

class medico:public asalariado{
    protected:
        int num_pacientes;
    
    public:
        void cambiar_pacientes(int n);
        int mostrar_pacientes();    

};

void medico::cambiar_pacientes(int n)
{
    num_pacientes=n;
}

int medico::mostrar_pacientes()
{
    return(num_pacientes);
}

int main()
{
    asalariado juan;
    medico felipe;
    obrero pepe;
    int sueldo,retencion,pacientes;
    string cargo;

    juan.datos_aleatorios();
    juan.cambiar_sueldo(25000);
    juan.cambiar_retencion(15);

    sueldo=juan.mostrar_sueldo();
    retencion=juan.mostrar_retencion();

    juan.presentar_datos();
    cout<<"Sueldo: "<<sueldo<<endl
        <<"Retencion: "<<retencion<<endl;

    felipe.datos_persona("Felipe","Gomez","Gomez","16/05/1980","Lugo","España",33534872);
    felipe.cambiar_sueldo(50000);
    felipe.cambiar_retencion(15);
    felipe.cambiar_pacientes(30);
    sueldo=felipe.mostrar_sueldo();
    retencion=felipe.mostrar_retencion();
    pacientes=felipe.mostrar_pacientes();

    felipe.presentar_datos();
    cout<<"Sueldo: "<<sueldo<<endl
        <<"Retencion: "<<retencion<<endl
        <<"Nº pacientes: "<<pacientes<<endl;

    pepe.datos_aleatorios();
    pepe.cambiar_sueldo(30000);
    pepe.cambiar_retencion(15);
    pepe.cambiar_cargo("Capador de grilos");
    sueldo=pepe.mostrar_sueldo();
    retencion=pepe.mostrar_retencion();
    cargo=pepe.mostrar_cargo();

    pepe.presentar_datos();
    cout<<"Sueldo: "<<sueldo<<endl
        <<"Retencion: "<<retencion<<endl
        <<"Cargo: "<<cargo<<endl;


    
    return(0);
}
