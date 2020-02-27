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
void ClasePersona::Imprimedatos ()
{
   cout << nombre << " " << ape1 << " " << ape2 << endl
        << dni << endl
        << dianac << "/" << mesnac << "/" << anonac << endl
        << lugarnac << " " << paisnac << endl << endl;
}

class Asalariado : public ClasePersona
{
    float sueldo;
    float retencion;
    public:
    Asalariado (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p, float s, float r);
    void Imprimedatos ();
};

Asalariado::Asalariado (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p, float s, float r)
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
    sueldo=s;
    retencion=r;
}

void Asalariado::Imprimedatos ()
{
   cout << nombre << " " << ape1 << " " << ape2 << endl
        << dni << endl
        << dianac << "/" << mesnac << "/" << anonac << endl
        << lugarnac << " " << paisnac << endl
        << sueldo << " " << retencion << endl << endl;
}

int main()
{

}
