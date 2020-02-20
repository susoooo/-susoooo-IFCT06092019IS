#include <iostream>
#include <string.h>

using namespace std;

class ClasePizza
{
    float precio;
    char base[30];
    char ing1[30];
    char ing2[30];
    char ing3[30];
    char ing4[30];
    char ing5[30];
    void Inicia ();
    public:
    ClasePizza (char *b, char *i1, char *i2, char *i3, char *i4, char *i5);
    ClasePizza (float p, char *i1, char *i2, char *i3, char *i4, char *i5);
    ClasePizza (char *i1, char *i2, char *i3, char *i4, char *i5);
    ClasePizza (char *i1, char *i2, char *i3, char *i4);
    ClasePizza (char *i1, char *i2, char *i3);
    ClasePizza (char *i1, char *i2);
    ClasePizza (float p, char *b, char *i1, char *i2, char *i3, char *i4, char *i5);
    ~ClasePizza();
    void Imprimedatos ();
    void CalculaPrecio ();
};

ClasePizza::ClasePizza (char *b, char *i1, char *i2, char *i3, char *i4, char *i5)
{
    Inicia ();
    strcpy(base, b);
    strcpy(ing1, i1);
    strcpy(ing2, i2);
    strcpy(ing3, i3);
    strcpy(ing4, i4);
    strcpy(ing5, i5);

}
ClasePizza::ClasePizza (float p, char *i1, char *i2, char *i3, char *i4, char *i5)
{
    Inicia ();
    precio=p;
    strcpy(ing1, i1);
    strcpy(ing2, i2);
    strcpy(ing3, i3);
    strcpy(ing4, i4);
    strcpy(ing5, i5);
}
ClasePizza::ClasePizza (char *i1, char *i2, char *i3, char *i4, char *i5)
{
    Inicia ();
    strcpy(ing1, i1);
    strcpy(ing2, i2);
    strcpy(ing3, i3);
    strcpy(ing4, i4);
    strcpy(ing5, i5);
}
ClasePizza::ClasePizza (char *i1, char *i2, char *i3, char *i4)
{
    Inicia ();
    strcpy(ing1, i1);
    strcpy(ing2, i2);
    strcpy(ing3, i3);
    strcpy(ing4, i4);
}
ClasePizza::ClasePizza (char *i1, char *i2, char *i3)
{
    Inicia ();
    strcpy(ing1, i1);
    strcpy(ing2, i2);
    strcpy(ing3, i3);
}
ClasePizza::ClasePizza (char *i1, char *i2)
{
    Inicia ();
    strcpy(ing1, i1);
    strcpy(ing2, i2);
}
ClasePizza::ClasePizza (float p, char *b, char *i1, char *i2, char *i3, char *i4, char *i5)
{
    Inicia ();
    precio=p;
    strcpy(base, b);
    strcpy(ing1, i1);
    strcpy(ing2, i2);
    strcpy(ing3, i3);
    strcpy(ing4, i4);
    strcpy(ing5, i5);
}
void ClasePizza::Imprimedatos ()
{
   cout << "Precio:" << precio << endl
        << "Base:" << base << endl << "Ingredientes:" << endl
        << ing1 << endl
        << ing2 << endl
        << ing3 << endl
        << ing4 << endl
        << ing5 << endl << endl;
}
void ClasePizza::Inicia()
{
    precio=0.0;
    strcpy(base, "normal");
    strcpy(ing1, "");
    strcpy(ing2, "");
    strcpy(ing3, "");
    strcpy(ing4, "");
    strcpy(ing5, "");
}
void ClasePizza::CalculaPrecio ()
{
    int conta;
    int bas;
    bas=0;
    conta=0;

    if(strcmp(ing1, "")!=0)
    {
        conta++;
    }
    if(strcmp(ing2, "")!=0)
    {
        conta++;
    }
    if(strcmp(ing3, "")!=0)
    {
        conta++;
    }
    if(strcmp(ing4, "")!=0)
    {
        conta++;
    }
    if(strcmp(ing5, "")!=0)
    {
        conta++;
    }
    if(strcmp(base, "normal")==0)
    {
        bas=5;
    }
    if(strcmp(base, "Gruesa")==0)
    {
        bas=6;
    }
    if(strcmp(base, "Fina")==0)
    {
        bas=4;
    }

    precio=(1.50*conta)+bas;
}

ClasePizza::~ClasePizza()
{
    //delete[] nombre;
    cout << precio << " La pizza se destruye." << endl;
}

int main()
{
    ClasePizza Pizza1(10.50,"Gruesa","queso","tomate","champiñones","bacon","aceitunas");
    Pizza1.Imprimedatos();
    ClasePizza Pizza2("Fina","queso","tomate","champiñones","bacon","aceitunas");
    Pizza2.CalculaPrecio();
    Pizza2.Imprimedatos();
    ClasePizza Pizza3("queso","tomate","champiñones","bacon","aceitunas");
    Pizza3.CalculaPrecio();
    Pizza3.Imprimedatos();
    ClasePizza Pizza4("tomate","champiñones","bacon","aceitunas");
    Pizza4.CalculaPrecio();
    Pizza4.Imprimedatos();
    ClasePizza Pizza5("tomate","champiñones","bacon");
    Pizza5.CalculaPrecio();
    Pizza5.Imprimedatos();
    ClasePizza Pizza6("queso","tomate");
    Pizza6.CalculaPrecio();
    Pizza6.Imprimedatos();
    ClasePizza Pizza7(10.50,"queso","tomate","champiñones","bacon","aceitunas");
    Pizza7.Imprimedatos();
}
