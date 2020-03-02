#include <iostream>
using namespace std;

class animal
	{
 	private:
	int peso;
	int altura;
    int velocidad;
    int numero_cuernos;
	public:
	int leer_peso();
	int cambiar_peso();
	int leer_altura();
	int cambiar_altura();
	int reproducirse();
	int morirse();
    int desalimentar();
	};
    class hervivoro : public animal  
        {
        //private:
        
        public:
        int alimentarse();
        };

        class Conejo : public hervivoro
            {
            //private:
        
            public:
            int reproducion();
            int hacer_sonido();
            };

    class carnivoro : public  animal
        {
        //private:
        
        public:
        int alimentarse();
        };
        class Leon : public carnivoro
            {
            //private:
            
            public:
            int reproducion();
            int hacer_sonido();
            int tamanho_melena();
            };
        class Hiena : public carnivoro 
            {
            //private:
            
            public:
            int reproducion();
            int hacer_sonido();
            int reirse();
            };
    class Omnivorol : public animal
        {
        //private:
            
        public:
        int alimentarse();
        };  
        class Omnivoro : public  animal
            {
            //private:
            
            public:
            int reproducion();
            int hacer_sonido();
            int reirse();
            };
int main(void)
    {

    }


	//rumiante;fructiforo;depredador;carroñero; cazador_en_manada; Cazador_solitario; comedor_de pescado;

