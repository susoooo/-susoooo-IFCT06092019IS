// Clase base Inmobe:
class Inmobe {
  public:
   Inmobe(char *n, int e, float s);
   const char *LeerNombre(char *n);
   const char *LeerDireccion(char *n);
   int Leermtrscds (int);
   float Leerprixmt (float);
   void CambiarNombre(char *n);
   void CambiarDireccion(char *n);
   void Cambiarmtrscds (int);
   void Cambiarprixmt (float);
   
  protected:
   char nombre[40];
   char direccion[80];
   int mtrscds;
   float prixmt;
};
 // Clase derivada Tiendas:
class Tiendas : public Inmobe {
  public:
   Tiendas(int e);
   int LeerMfachada() ;
   void CambiarMfachada(int);
   
   protected:
   int mfachada;
};
// Clase derivada Hostelería:
class Hosteleria : public Inmobe {
  public:
   Hosteleria(int e );
   int LeerTAbierto();
   void CambiarTAbierto(int);
   
   protected:
   int tabierto;
};
// Clase derivada Ropa:
class Ropa : public Tiendas {
  public:
   Ropa(int e );
   int LeerEsProba();
   int LeerNmAseos();
   void CambiarEsProba(int);
   void CambiarNmAseos(int);

   protected:
   int esproba;
   int nmaseos;
};
// Clase derivada Comida:
class Comida : public Tiendas {
  public:
   Comida(int e );
   int LeerNmLineas() const;
   int LeerNmCajas() const;
   void CambiarNmLineas(const int);
   void CambiarNmCajasconst int);

   protected:
   int nmlineas;
   int nmcajas;
};
// Clase derivada Ferreterías:
class Ferreterias : public Tiendas {
  public:
   Ferreterias(float s );
   float LeerMtcadd() const;
   void CambiarMtcadd(float);
   
   protected:
   float mtcadd;
};
// Clase derivada Droguerías:
class Droguerias : public Tiendas {
  public:
   Droguerias (int e);
   int LeerNmDtoMP();
   void CambiarNmDtoMP(int);

   protected:
   int nmdtomp;
};  
// Clase derivada Bares:
class Bares : public Hosteleria {
  public:
   Bares(int e );
   int LeerNmBarras() const;
   void CambiarNmBarras(const int);
};
// Clase derivada Restaurantes:
class Restaurantes : public Hosteleria {
  public:
   Restaurantes(int e );
   int LeerNmBarras() const;
   void CambiarNmBarras(const int);
};   
   int main()
    {
     return (0);
    }