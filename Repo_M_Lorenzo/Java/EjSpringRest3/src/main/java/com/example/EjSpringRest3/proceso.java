/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.EjSpringRest3;

/**
 *
 * @author mlorenzo
 */

public class proceso{

    private final Integer longitud;
    private final Integer numPalabras;
    
    private final Integer numLetras;
    private final Integer numNumeros;
    private final String texto;
    
    public proceso(String texto)
    {
        this.texto=texto;
        this.longitud=texto.length();
        this.numPalabras=texto.split(" ").length;
        this.numNumeros=contarNumeros();
        this.numLetras=contarLetras();
        
        
    }
    
    public Integer getLongitud(){return longitud;}
    public Integer getNumPalabras(){return numPalabras;}
    public Integer getNumLetras(){return numLetras;}
    public Integer getNumNumeros(){return numNumeros;}
    
    private Integer contarLetras()
    {
        Integer nLetras;
        nLetras=0;
        nLetras=(this.texto.length())-(this.numNumeros)-(texto.split(" ").length)+1;
        
       
        
        return nLetras;
        
    }
    private Integer contarNumeros()
    {
        Integer nNum;
        nNum=0;
        int i;
        char[]cadena=new char[this.longitud];
        cadena=this.texto.toCharArray();
        
        for(i=0;i<cadena.length;i++)
        {
            if(cadena[i]=='1'||cadena[i]=='2'||cadena[i]=='3'||cadena[i]=='4'||cadena[i]=='5'||
                    cadena[i]=='6'||cadena[i]=='7'||cadena[i]=='8'||cadena[i]=='9'||cadena[i]=='0')
            {
                nNum=nNum+1;
                    
            }
        }
        
        return nNum;
        
    }
    
    
}