/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package figura;

/**
 *
 * @author alex
 */
class Forma 
{
    String color;
    String nombre;
    
    
   Punto p= new Punto(0,0);
   
    public Forma(String color,String nombre,double coordx,double coordy)
    {
        this.color=color;
        this.nombre=nombre;
    }
    public String imprimir()
    {
        System.out.println(p.getCoordx()+p.getCoordy());
        return "Color :"+this.color+"\n"+"Nombre: "+this.nombre+"\n";
    }
    public void setColor(String col)
    {
        this.color=col;
    }
    public String getColor()
      {
          return color;
      }
}
class Punto
{
     double coordx;
     double coordy;
    
    public Punto (double cx,double cy)
    {
        this.coordx=cx;
        this.coordy=cy;
    }
    
      public void setCoordx(double x)
    {
        this.coordx=x;     
    }
      public double getCoordx()
      {
          return coordx;
      }
      
        public void setCoordy(double y)
    {
        this.coordx=y;     
    }
      public double getCoordy()
      {
          return coordy;
      }
        
 }
    
    class Rectangulo extends Forma
    {
        double lmayor;
        double lmenor;
        double escala;
        public Rectangulo (String color,String nombre,double coordx,double coordy,double lmayor,double lmenor,double escala)
        {
            this.color=color;
            this.nombre=nombre;
            this.lmayor=lmayor;
            this.lmenor=lmenor;
            this.escala=escala;
            super.imprimir();
        }
        
       public double area()
       {
           System.out.println("Calculando area");
           double area = lmayor*lmenor;
           return area;
       }
       
         public double perimetro()
       {
           System.out.println("Calculando perimetro");
           double perimetro=(2*lmayor)+(2*lmenor);
           return perimetro;
       }
         public double tamaño()
         {
             double tamaño =lmayor*escala+lmenor*escala;
             return tamaño;
         }
             
             
    
    
    }
   public class Figura {
    public static void main(String[] args) 
    {
        
      Forma f1;
     f1=new Forma("Rosa","Forma de huevo",4,5);
        System.out.println(f1.imprimir());
    }
    
}
