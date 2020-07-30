
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

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
public class primult {
     public static void main(String[] args) 
     {
     try{
    System.out.println ("Introduce dos números, los mostraremos con sus intermedios");
    BufferedReader in = 
	new BufferedReader(new InputStreamReader(System.in));
        int i = Integer.parseInt(in.readLine());
        int z = Integer.parseInt(in.readLine());
    
     
    
    
    for(int contador=i ;contador <= z;contador ++)
    {
      System.out.println (contador);
    }

      
   
}
    catch (IOException ex){
                System.out.println(ex);
            }
  }

}