/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.ej5_objetos;

/**
 *
 * @author mlorenzo
 */


class centro
{
    private double cx, cy;
    
    public centro()
    {
        this.cx=Math.random()*100;
        this.cy=Math.random()*100;
    }
    public double coordx()
    {
        return this.cx;
    }
    public double coordy()
    {
        return this.cy;
    }
           
}

class circulo extends centro
{
    private final double radio;
    private boolean colision;
    
    public circulo(double r)
    {
        super();
        this.radio=r;
    }
    
    public boolean colisionar(circulo c)
    {
        colision = ((c.coordx()-this.coordx())*(c.coordx()-this.coordx()))+((c.coordy()-this.coordy())*(c.coordy()-this.coordy()))<=(this.radio*this.radio);
        return colision;
    }
}
public class Ej5_objetos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        circulo c[] = new circulo[15];
        
        c[0]=new circulo(Math.random()*5);        
        int i;
        int j;
        
                              
        for(i=1;i<15;i++)
        {
            
            c[i]=new circulo(Math.random()*5);
            for(j=i-1;j<15;j++)
            {
                if(c[j].colisionar(c[i])==true)
                {
                    System.out.println("Detectada colisión. Saliendo");
                    System.exit(0);
                }
            }
            
        }
    }
    
}
