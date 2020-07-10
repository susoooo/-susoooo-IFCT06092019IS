/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.ej7_objetos;

/**
 *
 * @author mlorenzo
 */
class forma
{
    private String color, nombre;
    private double cx,cy;
    
    public forma(String col,String nom, double x,double y)
    {
        this.color=col;
        this.nombre=nom;
        this.cx=x;
        this.cy=y;
    }
    public String imprimir()
    {
       return "Color: "+this.color+"\n"+"Nombre: "+this.nombre+"\n"+"Centro: ("+this.cx+","+this.cy+")\n";
    }
    public void cambio_color(String col)
    {
        this.color=col;
    }
    public void mover(double x, double y)
    {
        this.cx=x;
        this.cy=y;
    }
}
class rectangulo extends forma
{
    private double l_menor,l_mayor;
    
    public rectangulo(String col,String nom, double x,double y, double lmen, double lmay)
    {
        super(col,nom,x,y);
        this.l_menor=lmen;
        this.l_mayor=lmay;
    }
    public double area()
    {
        return this.l_mayor*this.l_menor;
    }
    public double perimetro()
    {
        return 2*this.l_mayor+2*this.l_menor;
    }
    public void escalar(double esc)
    {
        this.l_mayor=esc*this.l_mayor;
        this.l_menor=esc*this.l_menor;
    }
    public String mostrar()
    {
        return super.imprimir()+"Lado mayor: "+this.l_mayor+"\n"+"Lado menor: "+this.l_menor;
    }
}

class elipse extends forma
{
    private double r_mayor, r_menor;
    
    public elipse(String col,String nom, double x,double y, double rmen, double rmay)
    {
        super(col,nom,x,y);
        this.r_mayor=rmay;
        this.r_menor=rmen;
    }
    public double area()
    {
        return (Math.PI*this.r_mayor*this.r_menor);
    }
    public String mostrar()
    {
        return super.imprimir()+"Radio mayor: "+this.r_mayor+"\n"+"Radio menor: "+this.r_menor;
    }
}
class cuadrado extends rectangulo
{
    private double lado;
    
    public cuadrado(String col,String nom, double x,double y, double lmen, double lmay)
    {
        super(col,nom,x,y,lmen,lmay);
        this.lado=lmen;
        this.lado=lmay;
    }
    public String mostrar_cuadrado()
    {
        return super.imprimir()+"Lado: "+this.lado;
    }
        
}

class circulo extends elipse
{
    private double radio;
    
    public circulo(String col,String nom, double x,double y, double rmen, double rmay)
    {
        super(col,nom,x,y,rmen,rmay);
        this.radio=rmay;
        this.radio=rmen;
    }
    public String mostrar_circulo()
    {
        return super.imprimir()+"Radio: "+this.radio;
    }
}

public class Ej7_objetos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        forma f1;
        rectangulo r1;
        elipse e1;
        cuadrado c1;
        circulo cr1;
        
        f1=new forma("Rojo","Forma 1", 3,3);
        r1=new rectangulo("Azul","Rectangulo 1",0,1,5,8);
        e1=new elipse("Verde","Elipse 1", 2,3,4,5);
        c1=new cuadrado("Amarillo","Cuadrado 1", 0,0,3,3);
        cr1=new circulo("Negro","Circulo 1", 9,4, 2,2);
        
        
        System.out.println(f1.imprimir());
        
        System.out.println(r1.mostrar());
        System.out.println("Area: "+r1.area());
        System.out.println("Perimetro: "+r1.perimetro()+"\n");        
        
        System.out.println(e1.mostrar());
        System.out.println("Area: "+e1.area()+"\n");
        
        System.out.println(c1.mostrar_cuadrado());
        System.out.println("Area: "+c1.area());
        System.out.println("Perimetro: "+c1.perimetro()+"\n");
        
        System.out.println(cr1.mostrar_circulo());
        System.out.println("Area: "+cr1.area()+"\n");
        
        
        
    }
    
}
