/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ordenador;

import java.util.Scanner;

/**
 *
 * @author alex
 */
public class Ordenador {
    
    Boolean encendido;
    Boolean enchufado;
    
    public Ordenador(){
       
        this.encendido=false;
        this.enchufado=false;
    }
    public void enchufar()
    {
        if((enchufado==true) && (encendido==false))
        {
            enchufado=true;
            System.out.println("Pc enchufado");
        }
        else
        {
            System.out.println("ERROR");
        }
    }
    public void desenchufar()
    {
        if((enchufado==false) && (encendido==false))
        {   enchufado=false;
            System.out.println("Pc desenchufado");
        }
    }
    public void encender(){
        if((encendido==true) && (enchufado==true)){
            encendido=true;
            System.out.println("Pc acendido");
        }
        
    }
    public void apagar(){
        if((encendido==false) && (enchufado==true)){
            encendido=false;
            System.out.println("Pc apagado");
            }
    }
        
    public static void main(String[] args) {
       
        Ordenador pc;
        pc = new Ordenador();
        pc.enchufar();
        pc.desenchufar();
        pc.encender();
        pc.apagar();
       
        
    }
}


