#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;

class Local
{
    protected:
    char direccion[50];
    float metros;
    float precio;
    public:
    Local (char *d, float m, float p);
    void Cambiardireccion(char *d);
    int Verdireccion();
    void Imprimelocal ();
};

Local::Local (char *d, float m, float p)
{
    strcpy(direccion, d);
    metros=m;
    precio=p;
}

void Local::Cambiardireccion (char *d)
{
    strcpy(direccion, d);
}

int Local::Verdireccion ()
{
   return *direccion;
}

void Local::Imprimelocal ()
{
   cout << direccion << endl
        << metros << " " << precio << endl << endl;
}

class Tienda : public Local
{
    protected:
    float mfachada;
    public:
    Tienda (char *d, float m, float p, float mf):Local(d, m, p)
    {
        mfachada=mf;
    }
    void Cambiarmfachada(float mf);
    int Vermfachada();
    void Imprimetienda ();
};

class Hosteleria : public Local
{
    protected:
    float tiempoabierto;
    public:
    Hosteleria (char *d, float m, float p, float ta):Local(d, m, p)
    {
        tiempoabierto=ta;
    }
    void Cambiartiempoabierto(float mf);
    int Vertiempoabierto();
    void Imprimehosteleria ();
};

class Tiendaropa : public Tienda
{
    protected:
    bool probadores;
    bool aseos;
    public:
    Tiendaropa (char *d, float m, float p, float mf, bool pr, bool as):Tienda(d, m, p, mf)
    {
        probadores=pr;
        aseos=as;
    }
    void Cambiarprobadores(bool pr);
    int Verprobadores();
    void Imprimetiendaropa ();
};

class Tiendacomida : public Tienda
{
    protected:
    int liniales;
    int cajas;
    public:
    Tiendacomida (char *d, float m, float p, float mf, int li, int ca):Tienda(d, m, p, mf)
    {
        liniales=li;
        cajas=ca;
    }
    void Cambiarcajas(int ca);
    int Vercajas();
    void Imprimetiendacomida ();
};

class Tiendaferreteria : public Tienda
{
    protected:
    float malmacen;
    public:
    Tiendaferreteria (char *d, float m, float p, float mf, float ma):Tienda(d, m, p, mf)
    {
        malmacen=ma;
    }
    void Cambiarmalmacen(float ma);
    int Vermalmacen();
    void Imprimetiendaferreteria ();
};

class Tiendadrogueria : public Tienda
{
    protected:
    bool matpeligrosos;
    public:
    Tiendadrogueria (char *d, float m, float p, float mf, bool mp):Tienda(d, m, p, mf)
    {
        matpeligrosos=mp;
    }
    void Cambiarmatpeligrosos(bool mp);
    int Vermatpeligrosos();
    void Imprimetiendadrogueria ();
};

class Hosteleriabar : public Hosteleria
{
    protected:
    int nbarras;
    public:
    Hosteleriabar (char *d, float m, float p, float ta, int nb):Hosteleria(d, m, p, ta)
    {
        nbarras=nb;
    }
    void Cambiarnbarras(int nb);
    int Vernbarras();
    void Imprimehosteleriabar ();
};

class Hosteleriarestaurante : public Hosteleria
{
    protected:
    int nmesas;
    float mcomedor;
    float mcocina;
    public:
    Hosteleriarestaurante (char *d, float m, float p, float ta, int nm, float com, float coc):Hosteleria(d, m, p, ta)
    {
        nmesas=nm;
        mcomedor=com;
        mcocina=coc;
    }
    void Cambiarnmesas(int nm);
    int Vernmesas();
    void Imprimehosteleriarestaurante ();
};

class Hosteleriacomidallevar : public Hosteleria
{
    protected:
    bool cocina;
    bool pevacuacion;
    public:
    Hosteleriacomidallevar (char *d, float m, float p, float ta, bool coc, bool pe):Hosteleria(d, m, p, ta)
    {
        cocina=coc;
        pevacuacion=pe;
    }
    void Cambiarcocina(bool coc);
    int Vercocina();
    void Imprimehosteleriacomidallevar ();
};

class Tiendaropacamiseria : public Tiendaropa
{
    protected:
    bool amedida;
    public:
    Tiendaropacamiseria (char *d, float m, float p, float mf, bool pr, bool as, bool am):Tiendaropa(d, m, p, mf, pr, as)
    {
        amedida=am;
    }
};

class Tiendaropamerceria : public Tiendaropa
{
    protected:
    int nmostradores;
    public:
    Tiendaropamerceria (char *d, float m, float p, float mf, bool pr, bool as, int nm):Tiendaropa(d, m, p, mf, pr, as)
    {
        nmostradores=nm;
    }
};

class Tiendaropasombrereria : public Tiendaropa
{
    protected:
    int nexpositores;
    public:
    Tiendaropasombrereria (char *d, float m, float p, float mf, bool pr, bool as, int ne):Tiendaropa(d, m, p, mf, pr, as)
    {
        nexpositores=ne;
    }
};

class Tiendacomidafruteria : public Tiendacomida
{
    protected:
    bool cfrigorifica;
    public:
    Tiendacomidafruteria (char *d, float m, float p, float mf, int li, int ca, bool cf):Tiendacomida(d, m, p, mf, li, ca)
    {
        cfrigorifica=cf;
    }
};

class Tiendacomidacarniceria : public Tiendacomida
{
    protected:
    int nfrigorifico;
    public:
    Tiendacomidacarniceria (char *d, float m, float p, float mf, int li, int ca, int nf):Tiendacomida(d, m, p, mf, li, ca)
    {
        nfrigorifico=nf;
    }
};

class Tiendacomidapanaderia : public Tiendacomida
{
    protected:
    int narmarios;
    bool scafeteria;
    public:
    Tiendacomidapanaderia (char *d, float m, float p, float mf, int li, int ca, int na, bool sc):Tiendacomida(d, m, p, mf, li, ca)
    {
        narmarios=na;
        scafeteria=sc;
    }
};

int main()
{

}
