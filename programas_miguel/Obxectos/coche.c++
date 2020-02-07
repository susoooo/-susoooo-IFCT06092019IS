/*3-Crea una clase que represente un automovil
Deberá incluir al menos métodos para encenderlo, apagarlo, abrirlo y cerrarlo.
Crea un programa que abra un coche, lo arranque, lo acelere hasta 100 km/h, lo pare, lo apague y lo cierre.*/

#include <iostream>
#include <unistd.h>
using namespace std;


class MeuCoche
{
    //Propiedades:
	char color; //Variable de clase
	char marca;
    float cilindrada;
    int largo;
    int velocidade; //velocidade inicial
    

    bool encendido; //bool: só pode ser verdadeiro ou falso (só en C++)
    bool apagado;
    bool aberto;
    bool pechado;
    

    //Métodos
    public:
	void encender(); //Declaración de un método de la clase
    void apagar();
    void regular_vel(int);
    void abrir();
    void pechar();   
	void fabricarcoche();
};
	
    //Programamos métodos:
    void MeuCoche::encender()
    {
        if (not encendido)
        {
            encendido=true;
        }     
    }

    void MeuCoche::apagar()
    {
        if (not apagado)
        {
            apagado=true;
        }     
    }


    void MeuCoche::abrir()
    {
        if (not aberto)
        {
            aberto=true;
        }     
    }

    void MeuCoche::pechar()
    {
        if (not pechado)
        {
            pechado=true;
        }     
    }

    void MeuCoche::regular_vel(int vel)
    {
        int cont;
        int incremento;
        cont=0;
        incremento=0; //usamos variable incremento para aumentar ou reducir a velocidade, sempre que sexa diferente á velocidade inicial:

        if (velocidade>vel)
            {
                incremento=-1; //para frear
            }
        else
            {
                incremento=1; //para acelerar
            }
        
        
        for (cont=velocidade; cont!=vel; cont=cont+incremento)
            {
                velocidade=velocidade+incremento;
                usleep(100000);
                cout<<velocidade<<endl;

            }
        
    }

        void MeuCoche::fabricarcoche()
            {
                velocidade=0;
            }

    int main()
    {
      MeuCoche Seat600; //Definición do obxecto a partir da clase
      int velocidadepasada; //a velocidade que lle pasamos
      velocidadepasada=0;

      cout<<"Introduce a velocidade que queres pasar: ";
     
      cin>>velocidadepasada;
    
    Seat600.fabricarcoche();
      Seat600.regular_vel(velocidadepasada);
      Seat600.regular_vel(0);
     
    }






