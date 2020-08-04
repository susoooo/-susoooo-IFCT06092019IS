/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.EjSpringRest5;

/**
 *
 * @author mlorenzo
 */
public class estadisticas {
    
    private float media;
    private listaPrecios caro;
    private listaPrecios barato;
    private Integer i;
    private Integer auxprecio;
   
    private Integer numeros[]=new Integer[100];
    private String precios[]=new String[100];
    private String productos[]=new String[100];
    
    
    
    public estadisticas(Integer[] num,String[] prod,String[] prez){
        this.numeros=num;
        this.productos=prod;
        this.precios=prez;
            
}
    
    
    public Float getMedia() {
        
        this.media=0;
        for(i=0;i<precios.length;i++)
        {
            this.media=this.media+Integer.parseInt(precios[i]);
        }
        this.media=this.media/precios.length;
        
        return media;
    }
    public listaPrecios getCaro(){
        this.auxprecio=0;
        
        for(i=0;i<precios.length;i++)
        {
            if(Integer.parseInt(precios[i])>=this.auxprecio)
            {
                this.auxprecio=Integer.parseInt(precios[i]);
            }
        }
        caro=new listaPrecios(i,productos[i],precios[i]);
        
        return caro;
    }
    public listaPrecios getBarato(){
    this.auxprecio=100000;
        
        for(i=0;i<precios.length;i++)
        {
            if(Integer.parseInt(precios[i])<=this.auxprecio)
            {
                this.auxprecio=Integer.parseInt(precios[i]);
            }
        }
        barato=new listaPrecios(i,productos[i],precios[i]);
        
        return barato;
    }
}
    

