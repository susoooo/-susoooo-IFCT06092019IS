#include <iostream>
#include <string.h>

using namespace std;

class Impresora
{
    public:
    Impresora(char *mar, char *mod);
    Impresora();
    ~Impresora();
    char *LeerMarca();
    char *LeerModelo();
    void CambiarMarca(char *n);
    void CambiarModelo(char *n);
    int LeerPrecio();
    void CambiarPrecio(int n);
    int Leerppm();
    void CambiarPpm(int n);

    protected:
    char marca[40];
    char modelo[120];
    int ppm;
    int precio;
};

class Matricial : public Impresora
{
    public:
    Matricial(int numCol);
    int LeerNumColores();
    void CambiarNumColores(int n);
    int RebobinarCinta();

    protected:
    int numColores;
};

class Laser : public Impresora
{
    public:
    Laser(int numTT);
    int LeerNumToners();
    void CambiarNumToners(int n);
    int DispararDeshimantado();

    protected:
    int numTamboresToner;
};

class Tinta : public Impresora
{
    public:
    Tinta(int numCartuchos);
    int LeerNumCartuchos();
    void CambiarNumCartuchos(int n);
    int DispararLimpiezaCabezales();

    protected:
    int numCartuchos;
};

int main()
{
}
