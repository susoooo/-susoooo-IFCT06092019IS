/*
2-Crea una clase que represente un ordenador.Deberá incluir al menos métodos para 
enchufarlo, desenchufarlo, encenderlo, y apagarlo. Crea un programa que enchufe 
un portatil, lo encienda, lo cargue, lo apague y lo desenchufe.
*/


package com.mycompany.ordenador;

import java.io.BufferedReader;
import java.io.InputStreamReader;

class metodosord {
      
    boolean on_off;
    boolean enchu_noenchu;
    int ident;
    int porcent_carga;

    metodosord(int recolloident) //creamos construtor para id de ordenador
    {
        ident=recolloident;
    }
    
    public void enchufar() 
    {
        if (enchu_noenchu == false)/*false= ordenador desenchufado*/
            {
                enchu_noenchu=true; /*pasando a true enchufamos*/
                System.out.println("Ordenador " + ident + " enchufado");
            }
        else {
            System.out.println("O ordenador " + ident + " xa estaba enchufado");}
    }   
    
    public void desenchufar() 
    {
        if (enchu_noenchu == true)/*true= ordenador enchufado*/
            {
                enchu_noenchu=false; /*pasando a false desenchufamos*/
                System.out.println("Ordenador " + ident + " desenchufado");
            }
        else 
            {
            System.out.println("O ordenador " + ident + " xa estaba desenchufado");
            }
    }
    
    public void encender() 
    {
        if (enchu_noenchu==false)
            {
              System.out.println("Debes enchufar o ordenador " + ident);  
            }
        else
            {
               if (on_off == false)/*false= ordenador apagado*/
                    {
                        on_off=true;
                        System.out.println("Ordenador " + ident + " encendido");
                    }
                else 
                    {
                     System.out.println("O ordenador " + ident + " xa estaba encendido");
                    }
            }
            
            
    }
    
    public void apagar()
    {
        if (on_off == true) /*true= ordenador encendido*/
            {
                on_off=false;
                System.out.println("Ordenador " + ident + " apagado");
            }
        else {
            System.out.println("O ordenador " + ident + " estaba apagado");}
    }
    
    public void cargar(int entrar_carga)
    {
        porcent_carga = entrar_carga;
        System.out.println("A carga está en " + porcent_carga + " %");
    }
       
}
 



  public class ordenador {
      
        public static void main(String args[]) 
    {
        
        try 
            {
                metodosord ordenador1, ordenador2, portatil1; /*variables que funcionan como obxectos. "Creamos" dous ordenadores*/
                
                 /*creamos obxectos*/
                 ordenador1 = new metodosord (1); 
                 ordenador2 = new metodosord (2);
                 portatil1 = new metodosord (3);
                 /*chamamos os métodos do obxecto*/
                ordenador1.enchufar();
                ordenador1.encender();
                ordenador1.apagar();
                ordenador1.desenchufar();
                ordenador2.enchufar();
                ordenador2.encender();
                ordenador2.apagar();
                ordenador2.desenchufar();
                
                portatil1.cargar(59);
            }
        
        catch (Exception e) 
            {
            System.out.println("Sucedeu un erro na lectura");
            }
    }
            
  } 
