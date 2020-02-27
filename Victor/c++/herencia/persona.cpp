#include <iostream>
#include <string.h>

using namespace std;

class ClasePersona
{
    protected:
    long dni;
    char nombre[30];
    char ape1[30];
    char ape2[30];
    int dianac;
    int mesnac;
    int anonac;
    char lugarnac[30];
    char paisnac[30];
    public:
    ClasePersona (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p);
    void Cambiardni(long d);
    int Verdni();
    void Imprimedatos ();
};

ClasePersona::ClasePersona (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p)
{
    dni=d;
    strcpy(nombre, n);
    strcpy(ape1, a1);
    strcpy(ape2, a2);
    dianac=dn;
    mesnac=mn;
    anonac=an;
    strcpy(lugarnac, l);
    strcpy(paisnac, p);
}

void ClasePersona::Cambiardni (long d)
{
    dni=000000000;
}

int ClasePersona::Verdni ()
{
   return dni;
}

void ClasePersona::Imprimedatos ()
{
   cout << nombre << " " << ape1 << " " << ape2 << endl
        << dni << endl
        << dianac << "/" << mesnac << "/" << anonac << endl
        << lugarnac << " " << paisnac << endl << endl;
}

class Asalariado : public ClasePersona
{
    protected:
    float sueldo;
    float retencion;
    public:
    Asalariado (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p, float s, float r):ClasePersona(d, n, a1, a2, dn, mn, an, l, p)
    {
        sueldo=s;
        retencion=r;
    }
    void Cambiarsueldo(float s);
    int Versueldo();
    void Imprimeasalariado ();
};

void Asalariado::Cambiarsueldo (float s)
{
    sueldo=0.0;
}

int Asalariado::Versueldo ()
{
   return sueldo;
}

void Asalariado::Imprimeasalariado ()
{
    Imprimedatos ();
    cout << sueldo << " " << retencion << endl << endl;
}

class Obrero : public Asalariado
{
    char cargo[30];
    public:
    Obrero (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p, float s, float r, char *c):Asalariado(d, n, a1, a2, dn, mn, an, l, p, s, r)
    {
        strcpy(cargo, c);
    }
    void Cambiarcargo(char *c);
    int Vercargo();
    void Imprimeobrero ();
};

void Obrero::Cambiarcargo (char *c)
{
    strcpy(cargo, c);
}

int Obrero::Vercargo ()
{
   return *cargo;
}

void Obrero::Imprimeobrero ()
{
    Imprimeasalariado ();
    cout << cargo << endl << endl;
}

class Medico : public Asalariado
{
    int npacientes;
    public:
    Medico (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p, float s, float r, int np):Asalariado(d, n, a1, a2, dn, mn, an, l, p, s, r)
    {
        npacientes=np;
    }
    void Cambiarnpacientes(int np);
    int Vernpacientes();
    void Imprimemedico ();
};

void Medico::Cambiarnpacientes (int np)
{
    npacientes=np;
}

int Medico::Vernpacientes ()
{
   return npacientes;
}

void Medico::Imprimemedico ()
{
    Imprimeasalariado ();
    cout << npacientes << endl << endl;
}

int main()
{
    ClasePersona Victor (33445577,"Víctor","Sánchez","Penas", 1, 1, 1980,"Lugo","España");
    Victor.Imprimedatos();
    Asalariado Pepe (11223344,"Pepe","Pérez","Pérez", 3, 1, 1985,"Lugo","España",1000,0.10);
    Pepe.Imprimeasalariado();
    Asalariado Jose (44223311,"José","Gómez","Pérez", 10, 10, 1981,"Madrid","España",1100,0.12);
    Jose.Imprimeasalariado();
    Asalariado Manuel (55882211,"Manuel","García","García", 13, 11, 1983,"Ourense","España",1100,0.10);
    Manuel.Imprimeasalariado();
    Obrero Juan (55554444,"Juan","Álvarez","Gómez", 4, 5, 1982,"A Coruña","España",900,0.06, "Peón");
    Juan.Imprimeobrero();
    Medico Antonio (11223344,"Antonio","Martínez","García", 15, 12, 1978,"León","España",1300,0.15,24);
    Antonio.Imprimemedico();
}
