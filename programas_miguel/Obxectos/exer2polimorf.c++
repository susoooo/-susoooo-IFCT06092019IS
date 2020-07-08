/*2-Crea una clase asignatura. Dicha clase tendrá como propiedades, el nombre, y un código de identificación. Tambien tendrá un metodo para calcular la 
nota media, que devolverá siempre un 10.
Crea una clase ciencias, heredera de la clase asignatura, que tendrá como mucho 5 notas. Crea un método de calculo de la nota media que la calcule 
sopesando igualmente las 5 notas.
Crea una clase letras, heredada de la clase asignatura, que tendrá como mucho 10 notas. Crea un método de cálculo de la nota media que la calcule de 
forma que el resultado será 50% la media de las notas anteriores a la última nota, y 50% la última nota.
Crea una clase músicas, heredada de la clase asigantura, que tendrá una sola nota. Crea un método de cálculo de la nota media que devuelva la nota que 
figura en dicha propiedad.
Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 5 notas de prácticas. Calcula la nota media teniendo en cuenta que el 70% de 
dicha nota debe ser la media de las 5 notas, y el 30% de dicha nota debe ser la media de las notas de prácticas.
Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, una de ciencias, una de letras, y una de música y que imprima las 
notas medias.*/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class asignatura
{
    protected:
	int cod_ident;
    char nome_asig[15];  

    //Métodos
    public:
	float calcular_notamedia();
    
    //set e get:
    void setCod_ident(int novovalor);  
    void setNome_asig(char novovalor);  

};

float asignatura::calcular_notamedia()
{
    return(10);
}


class ciencias : public asignatura 
{   

    float notas[5];
    public:
	float calcular_notamedia();
    
};

float ciencias::calcular_notamedia()
{
    int contador;
    contador=0;
    int resul_suma;
    resul_suma=0;
    int medianotas;
    medianotas=0;

    for (contador = 0; contador < 5; contador++)
    {
        resul_suma=resul_suma+notas[contador];          
    }

    medianotas=resul_suma/5;  
}




class letras : public asignatura 
{
    float notas[10];
};

class musica : public asignatura 
{
    float nota;
};

class tecnologicas : public ciencias 
{
    float notas_prac[5];

};



int main()
{




return(0);    
}
