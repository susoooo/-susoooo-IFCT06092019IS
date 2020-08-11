/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.EjSpringRest4;

/**
 *
 * @author mlorenzo
 */
import java.util.concurrent.atomic.AtomicLong;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class listaController {
    
     
    private final AtomicLong counter = new AtomicLong();
    public Integer[] arraynumeros=new Integer[100];
    @GetMapping("/add")
	public void add(@RequestParam(value = "numero", defaultValue = "0") Integer numero){
            arraynumeros[(int)counter.getAndIncrement()]=numero;
            
	}
        
    @GetMapping("/remove")
	public void remove(@RequestParam(value = "numero", defaultValue = "0") Integer numero){
            arraynumeros[(int)counter.getAndDecrement()]=numero;
            
	}
        
    @GetMapping("/query")
	public lista listar(Integer[] arraynumero){
            
            return new lista(arraynumeros);
	}


    
}
