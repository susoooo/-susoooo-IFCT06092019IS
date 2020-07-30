/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.EjSpringRest3;

import java.util.Date;

/**
 *
 * @author mlorenzo
 */

public class proceso{
    
    private Integer longitud,numPalabras,numLetras,numNumeros;
    private String texto;
    
    public proceso(String texto)
    {
        this.texto=texto;
        this.longitud=texto.length();
        this.numPalabras=texto.split(" ").length;
        this.numLetras=contarLetras();
        this.numNumeros=contarNumeros();
        
    }
    
    public Integer getLongitud(){return longitud;}
    public Integer getNumPalabras(){return numPalabras;}
    public Integer getNumLetras(){return numLetras;}
    public Integer getNumNumeros(){return numNumeros;}
    
    private Integer contarLetras()
    {
        Integer nLetras,nEspacios;
        nLetras=0;
        nEspacios=0;
        while(this.texto.contains(" ")==true)
        {
            nEspacios=nEspacios+1;
                    
        }
        nLetras=this.longitud-nEspacios;
        
        return nLetras;
        
    }
    private Integer contarNumeros()
    {
        Integer nNum;
        nNum=0;
        if(this.texto.contains("1")==true||this.texto.contains("2")==true||this.texto.contains("3")==true||this.texto.contains("4")==true
                ||this.texto.contains("5")==true||this.texto.contains("6")==true||this.texto.contains("7")==true||
                this.texto.contains("8")==true||this.texto.contains("9")==true||this.texto.contains("0")==true)
        {
            nNum=nNum+1;
                    
        }
        return nNum;
        
    }
    
    
}