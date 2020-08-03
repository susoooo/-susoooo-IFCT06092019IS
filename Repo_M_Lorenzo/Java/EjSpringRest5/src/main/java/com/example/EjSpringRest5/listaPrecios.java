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
public class listaPrecios {
    
    private Integer numero[]=new Integer[100];
    private String producto[]=new String[100];
    private String precio[]=new String[100];
    private Integer i;
    
    
    public listaPrecios(Integer[]num,String[]prod,String[]prez){
        this.numero=num;
        this.producto=prod;
        this.precio=prez;
        
}
    public listaPrecios(Integer num,String prod,String prez)
        {   
            
            i=num;
            this.numero[i]=num;
            this.precio[i]=prez;
            this.producto[i]=prod;
        }
    
    public Integer []getNumero() {return numero;}
    public String []getProducto(){return producto;}
    public String []getPrecio(){return precio;}
    
}