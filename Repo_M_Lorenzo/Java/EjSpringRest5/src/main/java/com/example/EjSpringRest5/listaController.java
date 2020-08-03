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
import java.util.Arrays;
import java.util.concurrent.atomic.AtomicLong;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class listaController {
    
     
    private final AtomicLong counter = new AtomicLong();
    public Integer[] arraynumeros=new Integer[100];
    public String[] arrayproductos=new String[100];
    public String[] arrayprecios=new String[100];
    private Integer i;
    private listaPrecios lista1;
    
    
    @GetMapping("/consulta")
	public listaPrecios consultar(@RequestParam(value = "producto", defaultValue = "producto") String producto){
            if(producto.contains("producto"))
            {
               lista1=new listaPrecios(arraynumeros,arrayproductos,arrayprecios); 
            }
            else
            {
                if(Arrays.asList(arrayproductos).contains(producto))
                {
                    i=Arrays.asList(arrayproductos).lastIndexOf(producto);
                    lista1=new listaPrecios(arraynumeros[i],arrayproductos[i],arrayprecios[i]); 
                }
            }
       
            return lista1;
	}
        
    @GetMapping("/add")
	public void añadir(@RequestParam(value = "producto", defaultValue = "producto") String producto,@RequestParam(value = "precio", defaultValue = "5") String precio){

            arraynumeros[(int)counter.getAndIncrement()]=counter.intValue();
            arrayproductos[(int)counter.getAndIncrement()]=producto;
            arrayprecios[(int)counter.getAndIncrement()]=precio;
            
            
	}
        
    @GetMapping("/change_money")
	public void cambiarPrecio(@RequestParam(value = "producto", defaultValue = "producto") String producto,@RequestParam(value = "precio", defaultValue = "5") String precio){
           if(Arrays.asList(arrayproductos).contains(producto))
                {
                    i=Arrays.asList(arrayproductos).lastIndexOf(producto);
                    
                } 
            arrayprecios[i]=precio;
          
            
	}
        
    @GetMapping("/change_name")
	public void cambiarNombre(@RequestParam(value = "producto", defaultValue = "producto") String producto,@RequestParam(value = "nuevo", defaultValue = "producto") String nuevo){
            if(Arrays.asList(arrayproductos).contains(producto))
                {
                    i=Arrays.asList(arrayproductos).lastIndexOf(producto);
                    
                } 
            arrayproductos[i]=nuevo;
            
	}

  

    
}
