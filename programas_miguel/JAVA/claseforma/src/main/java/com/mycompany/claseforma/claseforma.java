//Exercicio de JAVA Java-03cObjetosHP

package com.mycompany.claseforma;

import java.io.BufferedReader;
import java.io.InputStreamReader;

class forma 
{
    String nomeforma;
    String cor;
    posicion coordenadas;
    
    
//Creamos método-construtor (debe levar o mesmo nome que a clase):
    forma (String param_nomeforma, String param_cor)
    
    {
    nomeforma=param_nomeforma;
    cor=param_cor;
    }
    
    public String getobtercor()
        {
        return cor;
        }
    
    public void setcambiarcor(String param_cor)
        {
            cor=param_cor;
        }
    
     public String getnomeforma()
        {
        return nomeforma;
        }
    
    public void  setcambiarnome(String param_nomeforma)
        {
            nomeforma=param_nomeforma;
        }
    
   public void moverforma(int pos_x, int pos_y)
        {
         coordenadas.cambiarpos(pos_x,pos_y);
        }
    
   
   
  public void imprimir()
    {
        System.out.println(nomeforma);
        System.out.println(cor);
        coordenadas.imprimir();
    }
 
}


class posicion 
{
    
    int x;
    int y;
    
    public void cambiarpos( int paramx, int paramy) {
   x = paramx;
   y= paramy;
        }
    
    public void imprimir()
    {
        System.out.println("Posición de X: " + x);
        System.out.println("Posición de y: " + y);
    }
}


class rectangulo extends forma 
{
	int ladomenor;
        int ladomaior;
        
        
	public rectangulo (String param_nomeforma, String param_cor, int param_ladomenor, int param_ladomaior)
        {
            super(param_nomeforma, param_cor);
            ladomenor=param_ladomenor;
            ladomaior=param_ladomaior;
        }
        
        public void imprimir()
    {
        System.out.println(ladomenor);
        System.out.println(ladomaior);
        
        super.imprimir();
    }

}