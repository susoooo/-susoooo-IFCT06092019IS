#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;

class empleado{
    protected:
        string nombre;
        string apellidos;
        string DNI;
        string direccion;
        int antiguedad;
        string tlf;
        float salario;
        string supervisor;
    
    public:
        void nombrar(string a, string b, string c, string d);
        void int_antiguedad(int a){antiguedad=a;}
        void telefono(string n){tlf=n;}
        void int_salario(float n){salario=n;}
        void int_supervisor(string n){supervisor=n;}
        void imprimir();

};

void empleado::nombrar(string a,string b, string c, string d)
{
    nombre=a;
    apellidos=b;
    DNI=c;
    direccion=d;
}

void empleado::imprimir()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellidos: "<<apellidos<<endl;
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Antigüedad: "<<antiguedad<<endl;
    cout<<"Telefono: "<<tlf<<endl;
    cout<<"Salario: "<<salario<<endl;
    cout<<"Supervisor: "<<supervisor<<endl;
    cout<<""<<endl;
}


class secretario:public empleado{
    protected:
        string despacho;
        string fax;
        int inc_salario;
        float n_salario;
    
    public:
        void int_despacho(string n){despacho=n;}
        void int_fax(string n){fax=n;}
        void i_salario(int n){inc_salario=n;}
        void imprimir();
        float nuevo_salario();
};

float secretario::nuevo_salario()
{
    n_salario=(float)salario*((float)inc_salario*(float)antiguedad/100);
    return(n_salario+(float)salario);
}

void secretario::imprimir()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellidos: "<<apellidos<<endl;
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Antigüedad: "<<antiguedad<<endl;
    cout<<"Telefono: "<<tlf<<endl;
    cout<<"Salario base: "<<salario<<endl;
    cout<<"Supervisor: "<<supervisor<<endl;
    cout<<"Despacho: "<<despacho<<endl;
    cout<<"Fax: "<<fax<<endl;
    cout<<"Incremento salario: "<<inc_salario<<endl;
    cout<<"Salario total: "<<nuevo_salario()<<endl;
    cout<<""<<endl;
}

class coche{
    protected:
        string matricula;
        string marca;
        string modelo;

    public:
        void int_matricula(string n) {matricula=n;}
        void int_marca(string n) {marca=n;}
        void int_modelo(string n) {modelo=n;}
        string mat() {return(matricula);}
        string marc() {return(marca);}
        string mod() {return(modelo);}
};

class vendedor:public empleado{
    protected:
        string tlf_movil;
        string area_venta;
        string lista_clientes;
        coche vehiculo_vendedor;
        int comisiones;
        int inc_salario;
        float n_salario;

    public:
        void movil(string n){tlf_movil=n;}
        void area(string n){area_venta=n;}
        void clientes(string n){lista_clientes=n;}
        void car(string a, string b, string c);
        void int_comisiones(int n){comisiones=n;}
        void i_salario(int n){inc_salario=n;}
        void imprimir();
        float nuevo_salario();
};

float vendedor::nuevo_salario()
{
    n_salario=((float)salario*((float)inc_salario*(float)antiguedad/100));
    return(n_salario+(float)salario+(float)comisiones);
}

void vendedor::car(string a, string b, string c)
{
    vehiculo_vendedor.int_matricula(a);
    vehiculo_vendedor.int_marca(b);
    vehiculo_vendedor.int_modelo(c);
}

void vendedor::imprimir()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellidos: "<<apellidos<<endl;
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Area: "<<area_venta<<endl;
    cout<<"Lista de clientes: "<<lista_clientes<<endl;
    cout<<"Antigüedad: "<<antiguedad<<endl;
    cout<<"Telefono: "<<tlf<<endl;
    cout<<"Tel. movil: "<<tlf_movil<<endl;
    cout<<"Vehiculo: "<<vehiculo_vendedor.mat()<<" "<<vehiculo_vendedor.marc()<<" "<<vehiculo_vendedor.mod()<<endl;
    cout<<"Salario base: "<<salario<<endl;
    cout<<"Supervisor: "<<supervisor<<endl;
    cout<<"Incremento salario: "<<inc_salario<<endl;
    cout<<"Comisiones: "<<comisiones<<endl;
    cout<<"Salario total: "<<nuevo_salario()<<endl;
    cout<<""<<endl;
}

class jefe:public empleado{
    protected:
        string despacho;
        string secretario;
        string lista_vendedores;
        coche vehiculo_jefe;
        int inc_salario;
        float n_salario;

    public:
        void int_despacho(string n){despacho=n;}
        void int_secretario(string n){secretario=n;}
        void lista(string n){lista_vendedores=n;}
        void i_salario(int n){inc_salario=n;}
        void car(string a, string b, string c);
        void imprimir();
        float nuevo_salario();

};

float jefe::nuevo_salario()
{
    n_salario=(float)salario*((float)inc_salario*(float)antiguedad/100);
    return(n_salario+(float)salario);
}

void jefe::car(string a, string b, string c)
{
    vehiculo_jefe.int_matricula(a);
    vehiculo_jefe.int_marca(b);
    vehiculo_jefe.int_modelo(c);
}

void jefe::imprimir()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellidos: "<<apellidos<<endl;
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Despacho: "<<despacho<<endl;
    cout<<"Lista de vendedores: "<<lista_vendedores<<endl;
    cout<<"Antigüedad: "<<antiguedad<<endl;
    cout<<"Telefono: "<<tlf<<endl;
    cout<<"Secretario : "<<secretario<<endl;
    cout<<"Vehiculo: "<<vehiculo_jefe.mat()<<" "<<vehiculo_jefe.marc()<<" "<<vehiculo_jefe.mod()<<endl;
    cout<<"Salario base: "<<salario<<endl;
    cout<<"Supervisor: "<<supervisor<<endl;
    cout<<"Incremento salario: "<<inc_salario<<endl;
    cout<<"Salario total: "<<nuevo_salario()<<endl;
    cout<<""<<endl;
}


int main()
{
    secretario sec;
    vendedor vend;
    jefe jefe1;
    string a,b,c,d;

    //Secretario
    sec.nombrar("Felipe","Melo","34567892R","Av. Real Nº23 2º");
    sec.int_antiguedad(5);
    sec.telefono("982222233");
    sec.int_supervisor("Jefe");
    sec.int_salario(20000);
    sec.int_despacho("Despacho 001");
    sec.int_fax("982223344");
    sec.i_salario(3);
    sec.imprimir();

    //Vendedor
    vend.nombrar("Carlos","Castro","11567894E","Av. Falsa Nº66 7º-A");
    vend.int_antiguedad(2);
    vend.telefono("982222233");
    vend.movil("666778985");
    vend.int_supervisor("Jefe");
    vend.int_salario(20000);
    vend.car("5467KKK","Toyota","Auris");
    vend.area("Automocion");
    vend.clientes("Lista de Automocion");
    vend.int_comisiones(2500);
    vend.i_salario(10);
    vend.imprimir();

    //Jefe
    jefe1.nombrar("Ander","Cantero","54567843W","Plz. España Nº66 7º-A");
    jefe1.int_antiguedad(10);
    jefe1.telefono("982222233");
    jefe1.int_despacho("Despacho 101");
    jefe1.int_supervisor("");
    jefe1.int_salario(20000);
    jefe1.car("8954KKK","Toyota","Camry");
    jefe1.int_secretario("Secretario 1");
    jefe1.lista("Vendedores de Automocion");
    jefe1.i_salario(20);
    jefe1.imprimir();





    
    
    
    return 0;
}