#include <iostream>
#include <string.h>

using namespace std;

class ClasePersona
{
    long dni;
    char nombre[30];
    char ape1[30];
    char ape2[30];
    int dianac;
    int mesnac;
    int anonac;
    char lugarnac[30];
    char paisnac[30];
    void Inicia ();
    public:
    ClasePersona ();
    ClasePersona (long d);
    ClasePersona (char *n, char *a1, char *a2);
    ClasePersona (long d, char *n, char *a1, char *a2);
    ClasePersona (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p);
    ~ClasePersona();
    void Imprimedatos ();
};

ClasePersona::ClasePersona ()
{
    Inicia ();
    strcpy(nombre, "Mr. x");
}

ClasePersona::ClasePersona (long d)
{
    Inicia ();
    dni=d;
}
ClasePersona::ClasePersona (char *n, char *a1, char *a2)
{
    Inicia ();
    strcpy(nombre, n);
    strcpy(ape1, a1);
    strcpy(ape2, a2);
}
ClasePersona::ClasePersona (long d, char *n, char *a1, char *a2)
{
    Inicia ();
    dni=d;
    strcpy(nombre, n);
    strcpy(ape1, a1);
    strcpy(ape2, a2);
}
ClasePersona::ClasePersona (long d, char *n, char *a1, char *a2, int dn, int mn, int an, char *l, char *p)
{
    Inicia ();
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
void ClasePersona::Inicia()
{
    dni=0;
    dianac=0;
    mesnac=0;
    anonac=0;
    strcpy(nombre, "Mr. x");
    strcpy(ape1, "");
    strcpy(ape2, "");
    strcpy(lugarnac, "");
    strcpy(paisnac, "");
}

ClasePersona::~ClasePersona()
{
    cout << "Edad: " << 2020-anonac << " DEP." << endl;
}

int main()
{
    ClasePersona Guille(12345678);
    Guille.Imprimedatos();
    ClasePersona Victor (33445577,"Víctor","Sánchez","Penas", 1, 1, 1980,"Lugo","España");
    Victor.Imprimedatos();
    ClasePersona Jairo (11112222,"Jairo","S.","F.");
    Jairo.Imprimedatos();
    ClasePersona Manel ("Manel","M.","M.");
    Manel.Imprimedatos();
    ClasePersona XoseManuel (11223344,"Xose Manuel","López","López", 1, 1, 1982,"Lugo","España");
    XoseManuel.Imprimedatos();
    ClasePersona Alex ("Alex","P.","L.");
    Alex.Imprimedatos();
    ClasePersona Miguel;
    Miguel.Imprimedatos();
    ClasePersona Nestor;
    Nestor.Imprimedatos();
    ClasePersona Diego;
    Diego.Imprimedatos();
}
