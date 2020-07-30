
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
public class exponencial {
     public static void main(String[] args) 
     {
     try{
    System.out.println ("Introduce dos números para calcular su exponencial");
    BufferedReader in = 
	new BufferedReader(new InputStreamReader(System.in));
        int i = Integer.parseInt(in.readLine());
    
    int z = Integer.parseInt(in.readLine());
    
    
     
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
    
}
