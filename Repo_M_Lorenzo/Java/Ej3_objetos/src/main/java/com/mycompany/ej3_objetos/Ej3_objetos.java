/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.ej3_objetos;

/**
 *
 * @author mlorenzo
 */
public class Ej3_objetos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    
        rectangulo r1;    
        rectangulo r2;
        
        r1=new rectangulo();
        r2=new rectangulo(3.2,4.5);
        
        System.out.println("El area de r1 es: "+r1.area());
        System.out.println("El perimetro de r1 es: "+ r1.perimetro());
        
        System.out.println("El area de r2 es: "+r2.area());
        System.out.println("El perimetro de r2 es: "+ r2.perimetro());
        
        
    }   
    
    
}

class rectangulo
{
    private double base, altura, per, area;
    
    public rectangulo()
    {
        this.base=Math.random()*10;
        this.altura=Math.random()*10;
    }
    
    public rectangulo(double b,double a)
    {
        this.base=b;
        this.altura=a;
    }
    
    public double area()
    {
        this.area=this.base*this.altura;
        return area;
    }
    
    public double perimetro()
    {
        this.per=2*this.base+2*this.altura;
        return per;
    }
}
