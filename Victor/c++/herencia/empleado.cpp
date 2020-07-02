#include <iostream>
#include <string.h>

using namespace std;

int ncli=0;

class Coche
{
    public:
    char matricula[30];
    char marca[30];
    char modelo[30];

    Coche (char *mat, char *mar, char *mod);
    Coche ();
    void Imprimecoche();
};

Coche::Coche (char *mat, char *mar, char *mod)
{
    strcpy(matricula, mat);
    strcpy(marca, mar);
    strcpy(modelo, mod);
}

Coche::Coche ()
{

}

void Coche::Imprimecoche()
{
    cout << matricula << " /" << marca << " /" << modelo << endl << endl;
}

class Cliente
{
    public:
    char nombrec[30];
    char ape1c[30];
    char ape2c[30];
    long dnic;

    Cliente (char *nc, char *a1c, char *a2c, long dc);
    Cliente();
    void Imprimecliente();
};

Cliente::Cliente (char *nc, char *a1c, char *a2c, long dc)
{
    strcpy(nombrec, nc);
    strcpy(ape1c, a1c);
    strcpy(ape2c, a2c);
    dnic=dc;
}

Cliente::Cliente ()
{

}

void Cliente::Imprimecliente()
{
    cout << nombrec << " " << ape1c << " " << ape2c << " // " << dnic << endl << endl;
}

class Empleado
{
    protected:
    char nombre[30];
    char ape1[30];
    char ape2[30];
    long dni;
    char direccion[30];
    Empleado * supervisor;
    float antiguedad;
    long telefono;
    float salario;
    public:
    Empleado (char *n, char *a1, char *a2, long d, char *di, Empleado * sup, float an, long tl, float sa);
    Empleado();
    void Cambiarsupervisor(Empleado * sup);
    void Incrementarsalario(float inc);
    void Imprimir ();
};

Empleado::Empleado ()
{

}

Empleado::Empleado (char *n, char *a1, char *a2, long d, char *di, Empleado * sup, float an, long tl, float sa)
{
    strcpy(nombre, n);
    strcpy(ape1, a1);
    strcpy(ape2, a2);
    dni=d;
    strcpy(direccion, di);
    supervisor=sup;
    antiguedad=an;
    telefono=tl;
    salario=sa;
}

void Empleado::Cambiarsupervisor(Empleado * sup)
{
    supervisor=sup;
}

void Empleado::Incrementarsalario(float inc)
{
    salario=salario+(salario*inc*antiguedad);
}

void Empleado::Imprimir ()
{
   cout << nombre << " " << ape1 << " " << ape2 << endl
        << dni << endl
        << direccion << "/" << telefono << endl
        << salario << " /" << antiguedad << endl
        << (*supervisor).nombre << endl << endl;
}

class Secretario : public Empleado
{
    protected:
    int despacho;
    long fax;
    public:
    Secretario (char *n, char *a1, char *a2, long d, char *di, Empleado * sup, float an, long tl, float sa, int des, long fa):Empleado(n,a1,a2,d,di,sup,an,tl,sa)
    {
        despacho=des;
        fax=fa;
    }
    void Imprimir ();
};

void Secretario::Imprimir ()
{
    cout << "Secretario:" << endl;
    Empleado::Imprimir();
    cout << despacho << endl
        << fax << endl << endl;
}

class Vendedor : public Empleado
{
    protected:
    double movil;
    char area[30];
    float pcomision;
    Coche cochemp;
    Cliente arraycliente[3];
    public:
    Vendedor (char *n, char *a1, char *a2, long d, char *di, Empleado * sup, float an, long tl, float sa, double mo, char *ar, float pc):Empleado(n,a1,a2,d,di,sup,an,tl,sa)
    {
        movil=mo;
        strcpy(area, ar);
        pcomision=pc;
    }
    Vendedor();
    void Imprimir ();
    void Altacliente(char *nc, char *a1c, char *a2c, long dc);
    void Bajacliente(int ncl);
    void Cambiacoche(char *mat, char *mar, char *mod);
};

Vendedor::Vendedor ()
{

}

void Vendedor::Imprimir ()
{
    int i;
    cout << "Vendedor:" << endl;
    Empleado::Imprimir();
    cout << movil << endl
        << area << endl
        << pcomision << endl << endl;
    cochemp.Imprimecoche();
    for (i=0;i<=ncli;i++)
    {
        arraycliente[i].Imprimecliente();
    }

}

void Vendedor::Altacliente (char *nc, char *a1c, char *a2c, long dc)
{
    strcpy(arraycliente[ncli].nombrec, nc);
    strcpy(arraycliente[ncli].ape1c, a1c);
    strcpy(arraycliente[ncli].ape2c, a2c);
    arraycliente[ncli].dnic=dc;
    ncli++;
}

void Vendedor::Bajacliente (int ncl)
{
    strcpy(arraycliente[ncl].nombrec, "");
    strcpy(arraycliente[ncl].ape1c, "");
    strcpy(arraycliente[ncl].ape2c, "");
    arraycliente[ncl].dnic=0;
}

void Vendedor::Cambiacoche (char *mat, char *mar, char *mod)
{
    strcpy(cochemp.matricula, mat);
    strcpy(cochemp.marca, mar);
    strcpy(cochemp.modelo, mod);
}

class Jefezona : public Empleado
{
    protected:
    int despacho;
    Secretario * secre;
    Vendedor arrayvendedor[3];
    Coche cochemp;
    public:
    Jefezona (char *n, char *a1, char *a2, long d, char *di, Empleado * sup, float an, long tl, float sa, int de):Empleado(n,a1,a2,d,di,sup,an,tl,sa)
    {
        despacho=de;
    }
    void Imprimir ();
    void Altavendedor();
    void Bajavendedor();
    void Cambiacoche();
    void Cambiasecretario();
};

int main()
{

}
