 class rectangulo
{ 
 int x;
 int y;
 
  void Datos ( int base,int altura)
  {
   x = base;
   y = altura;
  }
   public int calculArea(){
   return(x*y);
 }
   public int calculPeri() {
   return(2*x+2*y);
 }
  
}
 
 
 
 
 class Operacions {
     public static void main(String[] args) 
     {
   rectangulo Area, Perimetro;
   Area = new rectangulo ();
   Perimetro = new rectangulo(); 
  
     Area.Datos(4,7);
     Perimetro.Datos (6,9);
     System.out.println(Area.calculArea());
     System.out.println (Perimetro.calculPeri());
    
     }
}
