/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.ej2_objetos;

/**
 *
 * @author mlorenzo
 */
public class Ej2_objetos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        ordenador pc1;
        portatil pt1;
        
        pc1=new ordenador();
        pt1=new portatil("Portatil_1");
        
        pc1.inicio();
        pt1.inicio();
        
        pc1.enchufar();
        pc1.encender();
        pc1.apagar();
        pc1.desenchufar();
        
        pt1.enchufar();
        pt1.encender();
        pt1.apagar();
        pt1.desenchufar();
        
    }
    
}

class ordenador
{
    private String nombre;
    private boolean enchufado, desenchufado, encendido, apagado;
    
    public ordenador()
    {
       this.nombre="Equipo";
    }
    public ordenador(String nom)
    {
       this.nombre=nom; 
    }
    
    public void enchufar()
    {
        if (this.apagado==true && this.desenchufado==true)
        {
            this.enchufado=true;
            System.out.println(this.nombre+" Enchufado");            
        }
        else
        {
            System.out.println(this.nombre +" No se puede enchufar. Ya esta enchufado");
        }
        
    }
    
    public void encender()
    {
        if (this.apagado==true && this.enchufado==true)
        {
            this.encendido=true;
            System.out.println(this.nombre+" Encendido");
        }
        else
        {
            System.out.println(this.nombre+" No se puede encender");
        }
    }
    
    public void apagar()
    {
        if (this.encendido==true && this.enchufado==true)
        {
            this.apagado=true;
            System.out.println(this.nombre+" Apagando");
        }
        else
        {
            System.out.println(this.nombre+" No se puede apagar. Ya esta apagado");
        }
    }
    
    public void desenchufar()
    {
        if (this.apagado==true && this.enchufado==true)
        {
            this.desenchufado=true;
            System.out.println(this.nombre+" Desenchufado");
        }
        else
        {
            System.out.println(this.nombre+" No se puede desenchufar.");
        }
    }
    public void inicio()
    {
        this.apagado=true;
        this.enchufado=false;
        this.encendido=false;
        this.desenchufado=true;
    }
}

class portatil extends ordenador
{
   public portatil(String nom)
   {
       super(nom);
   }
   
}
