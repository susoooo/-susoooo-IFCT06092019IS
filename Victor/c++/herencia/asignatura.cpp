#include <iostream>
#include <string.h>

using namespace std;

class Asignatura
{
    protected:
    char nombre[30];
    int codigo;
    public:
    Asignatura (char *n, int c);
    float CalcularNotamedia();
};

Asignatura::Asignatura (char *n, int c)
{
    strcpy(nombre, n);
    codigo=c;
}

float CalcularNotamedia()
{
    return 10;
}

class Ciencias: public Asignatura
{
    protected:
    float notas[5];
    public:
    Ciencias (char *n, int c, float no[]):Asignatura(n,c)
    {
        notas[0]=no[0];
        notas[1]=no[1];
        notas[2]=no[2];
        notas[3]=no[3];
        notas[4]=no[4];
    }
    float CalcularNotamedia();
};

float Ciencias::CalcularNotamedia()
{

    return (notas[0]+notas[1]+notas[2]+notas[3]+notas[4])/5;
}

class Letras: public Asignatura
{
    protected:
    float notas[10];
    public:
    Letras (char *n, int c, float no[]):Asignatura(n,c)
    {
        notas[0]=no[0];
        notas[1]=no[1];
        notas[2]=no[2];
        notas[3]=no[3];
        notas[4]=no[4];
        notas[5]=no[5];
        notas[6]=no[6];
        notas[7]=no[7];
        notas[8]=no[8];
        notas[9]=no[9];
    }
    float CalcularNotamedia();
};

float Letras::CalcularNotamedia()
{
    return (((notas[0]+notas[1]+notas[2]+notas[3]+notas[4]+notas[5]+notas[6]+notas[7]+notas[8])/9)+notas[9])/2;
}

class Musica: public Asignatura
{
    protected:
    float nota;
    public:
    Musica (char *n, int c, float no):Asignatura(n,c)
    {
        nota=no;
    }
    float CalcularNotamedia();
};

float Musica::CalcularNotamedia()
{
    return nota;
}

class Tecnologicas: public Ciencias
{
    protected:
    float npracticas[5];
    public:
    Tecnologicas (char *n, int c, float no[], float np[]):Ciencias(n,c,no)
    {
        npracticas[0]=np[0];
        npracticas[1]=np[1];
        npracticas[2]=np[2];
        npracticas[3]=np[3];
        npracticas[4]=np[4];
    }
    float CalcularNotamedia();
};

float Tecnologicas::CalcularNotamedia()
{
    return (((notas[0]+notas[1]+notas[2]+notas[3]+notas[4])/5)*0.7)+(((npracticas[0]+npracticas[1]+npracticas[2]+npracticas[3]+npracticas[4])/5)*0.3);
}


int main()
{
    float notas[10];
    float npracti[5];
    notas[0]=5;
    notas[1]=6;
    notas[2]=7;
    notas[3]=8;
    notas[4]=4;
    Ciencias c1("Matemáticas",001,notas);
    notas[0]=5;
    notas[1]=6;
    notas[2]=7;
    notas[3]=8;
    notas[4]=4;
    notas[5]=6;
    notas[6]=7;
    notas[7]=9;
    notas[8]=3;
    notas[9]=5;
    Letras l1("Historia",002,notas);
    Musica m1("Música",003,6);
    notas[0]=5;
    notas[1]=6;
    notas[2]=7;
    notas[3]=8;
    notas[4]=4;
    npracti[0]=5;
    npracti[1]=6;
    npracti[2]=7;
    npracti[3]=8;
    npracti[4]=4;
    Tecnologicas t1("Tecnología",004,notas,npracti);

    cout << c1.CalcularNotamedia() << endl;
    cout << l1.CalcularNotamedia() << endl;
    cout << m1.CalcularNotamedia() << endl;
    cout << t1.CalcularNotamedia() << endl;

    return 0;
}
