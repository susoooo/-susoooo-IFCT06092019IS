


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
public class factorial {
     public static void main(String[] args) 
     {
     try{
    System.out.println ("Introduce un número para calcular su factorial");
    BufferedReader in = 
            new BufferedReader(new InputStreamReader(System.in));
            int i = Integer.parseInt(in.readLine());
    
 for(int contador=1 ;contador <= i;contador ++)
    {
        
      contador*(contador+1)=int f
      System.out.println (int f);
    }

      
   
    catch (IOException ex){
                System.out.println(ex);
            }
  }

}