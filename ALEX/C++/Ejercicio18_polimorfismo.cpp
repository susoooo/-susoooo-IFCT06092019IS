#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class asignatura{
    protected:
        string nombre;
        string codigo;
    public:
        void nombrar(string n);
        void codificar(string n);
        virtual float nota_media();
};

void asignatura::nombrar(string n)
{
    nombre=n;
}

void asignatura::codificar(string n)
{
    codigo=n;
}

float asignatura::nota_media()
{
    return(10);
}

class ciencias:public asignatura{
    protected:
        float notas[5];
    public:
        void int_notas(float *n);
        float nota_media_c();
};

void ciencias::int_notas(float *n)
{
    int i;
    for(i=0;i<5;i++)
    {
        notas[i]=n[i];
    }
}

float ciencias::nota_media_c()
{
    float suma;
    int i;
    suma=0;

    for(i=0;i<5;i++)
    {
        suma=suma+notas[i];
    }

    return(suma/5);
}

class letras:public asignatura{
    protected:
        float notas[10];
    public:
        void int_notas(float *n);
        float nota_media();
};

void letras::int_notas(float *n)
{
    int i;
    for(i=0;i<10;i++)
    {
        notas[i]=n[i];
    }
}

float letras::nota_media()
{
    float suma;
    int i;
    suma=0;

    for(i=0;i<10;i++)
    {
        suma=(0.5*suma)+(0.5*notas[i]);
    }

    return(suma);
}

class musicas:public asignatura{
    protected:
        float nota;
    public:
        void int_notas(float n);
        float nota_media();
};

void musicas::int_notas(float n)
{
    nota=n;
}

float musicas::nota_media()
{
    return(nota);
}

class tecnologicas:public ciencias{
    protected:
        float n_practicas[5];
    public:
        void int_practicas(float *n);
        float nota_media();
};

void tecnologicas::int_practicas(float *n)
{
    int i;
    for(i=0;i<5;i++)
    {
        n_practicas[i]=n[i];
    }
}

float tecnologicas::nota_media()
{
    float suma;
    int i;
    suma=0;

    float n_media;

    for(i=0;i<5;i++)
    {
        suma=suma+n_practicas[i];
    }
    suma=suma/5;

    n_media=(0.7*nota_media_c())+(0.3*suma);

    return(n_media);
}

int main()
{
    tecnologicas t;
    ciencias c;
    letras l;
    musicas m;
    float n_prac[5];
    float nota[5];
    float n[10];
    float no;

    int i;

    for(i=0;i<5;i++)
    {
        cout<<"Introduzca la nota de practicas:"<<endl;
        cin>>n_prac[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<"Introduzca la nota de teoria:"<<endl;
        cin>>nota[i];
    }
    t.int_practicas(n_prac);
    t.int_notas(nota);

    for(i=0;i<5;i++)
    {
        cout<<"Introduzca la nota de ciencias:"<<endl;
        cin>>nota[i];
    }
    c.int_notas(nota);
    
    for(i=0;i<10;i++)
    {
        cout<<"Introduzca la nota de letras:"<<endl;
        cin>>n[i];
    }

    l.int_notas(n);

    cout<<"Introduzca la nota de musica"<<endl;
    cin>>no;

    m.int_notas(no);

    cout<<"Nota media de tecnología: "<<t.nota_media()<<endl;
    cout<<"Nota media de ciencias: "<<c.nota_media_c()<<endl;
    cout<<"Nota media de letras: "<<l.nota_media()<<endl;
    cout<<"Nota media de musica: "<<m.nota_media()<<endl;

    return 0;
}
