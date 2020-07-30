

 class PuntoEspac
{ 
 int x;
 int y;
 
  void Posicion ( int parmx,int parmy)
  {
   x = parmx;
   y = parmy;
  }
}
 
 
 
 
public class Programa1 {
     public static void main(String[] args) 
     {
   PuntoEspac Punto1, Punto2, Punto3;
   Punto1 = new PuntoEspac();
   Punto2 = new PuntoEspac();
   Punto3 = new PuntoEspac();
    
    Punto1.Posicion(3, 5);
    Punto2.Posicion(7, 9);
    Punto3.Posicion(8,10);
     }
}