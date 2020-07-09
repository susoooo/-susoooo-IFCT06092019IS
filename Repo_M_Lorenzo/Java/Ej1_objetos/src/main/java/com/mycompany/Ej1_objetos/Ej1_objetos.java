package com.mycompany.Ej1_objetos;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author mlorenzo
 */
public class Ej1_objetos {        
       /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        punto p1;
        punto p2;
        punto p3;  
        
        p1=new punto();
        p2=new punto();
        p3=new punto();
        
        p1.representacion();
        p2.representacion();
        p3.representacion();      
              
        
    }
    
}

class punto {
           private double cx,cy,cz;
           
           public punto()
           {
               this.cx=Math.random()*10;
               this.cy=Math.random()*10;
               this.cz=Math.random()*10;
           }
           
           public void representacion()
           {
               System.out.println("Coordenada x: " + this.cx);
               System.out.println("Coordenada y: " + this.cy);
               System.out.println("Coordenada z: " + this.cz);
           }
        }
