#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class animal{
    protected:
    int numPatas;
    int numColores;
    int peso;
    int altura;
    int velocidad;
    int numCuernos;

    public:
    void cambiar_numPatas(int n);
    void cambiar_numColores(int n);
    void cambiar_peso(int n);
    void cambiar_altura(int n);
    void cambiar_velocidad(int n);
    void cambiar_cuernos(int n);
    int leer_numPatas();
    int leer_numColores();
    int leer_peso();
    int leer_altura();
    int leer_velocidad();
    int leer_cuernos();

    char *reproducirse();
    char *morirse();
    char *desalimentar();

};

class herbivoro : public animal {
    protected:
    char alimento_principal[50];

    public:
    void cambiar_alimento(char *n);
    char *leer_alimento();

};

class carnivoro : public animal {
    protected:
    char alimento_principal[50];

    public:
    void cambiar_alimento(char *n);
    char *leer_alimento();

};

class omnivoro : public animal {
    protected:
    char alimento_principal[50];

    public:
    void cambiar_alimento(char *n);
    char *leer_alimento();

};

class conejo : public herbivoro{
    protected:
    char color[100];

    public:
    void cambiar_color(char *n);
    char *leer_color();
    char *tipo_reproduccion();
    char *hacer_sonido();

};

class leon : public carnivoro{
    protected:
    char color[100];

    public:
    void cambiar_color(char *n);
    char *leer_color();
    char *hacer_sonido();
    char *tipo_reproduccion();
    char *tamanho_melena();

};

class hiena : public carnivoro{
    protected:
    char color[100];

    public:
    void cambiar_color(char *n);
    char *leer_color();
    char *hacer_sonido();
    char *tipo_reproduccion();
    char *risas();

};

class hombre : public omnivoro{
    protected:
    char color[100];

    public:
    void cambiar_color(char *n);
    char *leer_color();
    char *hacer_sonido();
    char *risas();
    char *autoconicimiento();

};

int main()
{ 
    
    return(0);
}