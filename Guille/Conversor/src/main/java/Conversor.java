

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author guille
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
public class Conversor {
     public static void main(String[] args) 
     {
     try{
    System.out.println ("Introduce el número de dolares que quieres convertir a euros");
    BufferedReader in = 
	new BufferedReader(new InputStreamReader(System.in));
        int i = Integer.parseInt(in.readLine());
    

     
    

      
    
	System.out.println( i*1.33250);			
               
	
}
    catch (IOException ex){
                System.out.println(ex);
            }
  }

}