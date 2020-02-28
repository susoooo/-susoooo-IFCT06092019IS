#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class local{
    protected:
        string direccion;
        float m_cuadrados;
        int precio_metro;

    public:
        void cambiar_direccion(string n);
        void cambiar_m_cuad(float n);
        void cambiar_precio(int n);
        string mostrar_direccion();
        float mostrar_m_cuad();
        int mostrar_precio();
};

void local::cambiar_direccion(string n)
{
    direccion=n;
}

void local::cambiar_m_cuad(float n)
{
    m_cuadrados=n;
}

void local::cambiar_precio(int n)
{
    precio_metro=n;
}

string local::mostrar_direccion()
{
    return(direccion);
}

float local::mostrar_m_cuad()
{
    return(m_cuadrados);
}

int local::mostrar_precio()
{
    return(precio_metro);
}

class tienda:public local{
    protected:
        int m_fachada;
    
    public:
        void cambiar_m_fachada(int n);
        int mostrar_m_fachada();
};

void tienda::cambiar_m_fachada(int n)
{
    m_fachada=n;
}

int tienda::mostrar_m_fachada()
{
    return(m_fachada);
}

class hosteleria:public local{
    protected:
        int tiempo_abierto;
    
    public:
        void cambiar_tiempo(int n);
        int mostrar_tiempo();
};

void hosteleria::cambiar_tiempo(int n)
{
    tiempo_abierto=n;
}

int hosteleria::mostrar_tiempo()
{
    return(tiempo_abierto);
}

class ropa:public tienda{
    protected:
        string probadores;
        string aseos;
    
    public:
        void cambiar_probadores(string n);
        void cambiar_aseos(string n);
        string mostrar_probadores();
        string mostrar_aseos();
};

void ropa::cambiar_probadores(string n)
{
    probadores=n;
}

void ropa::cambiar_aseos(string n)
{
    aseos=n;
}

string ropa::mostrar_aseos()
{
    return(aseos);
}

string ropa::mostrar_probadores()
{
    return(probadores);
}

class comida:public tienda{
    protected:
        int num_lineales;
        int num_cajas;

    public:
        void cambiar_lineales(int n);
        void cambiar_cajas(int n);
        int mostrar_lineales();
        int mostrar_cajas();

};

void comida::cambiar_lineales(int n)
{
    num_lineales=n;
}

void comida::cambiar_cajas(int n)
{
    num_cajas=n;
}

int comida::mostrar_lineales()
{
    return(num_lineales);
}

int comida::mostrar_cajas()
{
    return(num_cajas);
}

class ferreteria:public tienda{
    protected:
        int m_almacen;
    
    public:
        void cambiar_almacen(int n);
        int mostrar_almacen();
};

void ferreteria::cambiar_almacen(int n)
{
    m_almacen=n;
}

int ferreteria::mostrar_almacen()
{
    return(m_almacen);
}

class drogueria:public tienda{
    protected:
        string mat_peligrosos;
    
    public:
        void cambiar_materiales(string n);
        string mostrar_materiales();

};

void drogueria::cambiar_materiales(string n)
{
    mat_peligrosos=n;
}

string drogueria::mostrar_materiales()
{
    return(mat_peligrosos);
}

class bar:public hosteleria{
    protected:
        int num_barras;
    
    public:
        void cambiar_barras(int n);
        int mostrar_barras();
};

void bar::cambiar_barras(int n)
{
    num_barras=n;
}

int bar::mostrar_barras()
{
    return(num_barras);
}

class restaurante:public hosteleria{
    protected:
        int num_mesas;
        int m_comedor;
        int m_cocina;
    
    public:
        void cambiar_mesas(int n);
        void cambiar_comedor(int n);
        void cambiar_cocina(int n);
        int mostrar_mesas();
        int mostrar_comedor();
        int mostrar_cocina();
};

void restaurante::cambiar_mesas(int n)
{
    num_mesas=n;
}

void restaurante::cambiar_comedor(int n)
{
    m_comedor=n;
}

void restaurante::cambiar_cocina(int n)
{
    m_cocina=n;
}

int restaurante::mostrar_mesas()
{
    return(num_mesas);
}

int restaurante::mostrar_comedor()
{
    return(m_comedor);
}

int restaurante::mostrar_cocina()
{
    return(m_cocina);
}

class llevar:public hosteleria{
    protected:
        string cocina;
        string evacuacion;
    
    public:
        void llevar::cambiar_cocina(string n);
        void llevar::cambiar_evacuacion(string n);
        string llevar::mostrar_cocina();
        string llevar::mostrar_evacuacion();
};

void llevar::cambiar_cocina(string n)
{
    cocina=n;
}

string llevar::mostrar_cocina()
{
    return(cocina);
}

void llevar::cambiar_evacuacion(string n)
{
    evacuacion=n;
}

string llevar::mostrar_evacuacion()
{
    return(evacuacion);
}