package com.mycompany.area1;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author guille
 */

/**
 *
 * @author guille
 */
public class area1 {
     public static void main(String[] args) 
     {
     try{
    System.out.println ("Introduce la base del rectangulo");
    BufferedReader in = 
	new BufferedReader(new InputStreamReader(System.in));
        int i = Integer.parseInt(in.readLine());
    
    System.out.println ("Introduce la altura del rectangulo");
    
    int z = Integer.parseInt(in.readLine());
    System.out.println ("Introduce un 1 para calcular el area del rectangulo, o un 2 para calcular el perimetro");
    
     
    int opcion = Integer.parseInt(in.readLine());
  

      
    switch (opcion) {
	case 1:
	System.out.println(i*z);			
                break;
	case 2:
        System.out.println ((i*2)+(z*2));       
                break;
	default: System.out.println("Error");
    }
}
    catch (IOException ex){
                System.out.println(ex);
            }
  }

}