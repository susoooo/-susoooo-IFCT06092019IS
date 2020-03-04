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

};

class secretario:public empleado{
    protected:
        string despacho;
        string fax;
        int inc_salario;
    
    public:
};

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
        int comisiones;
        int inc_salario;

    public:
}