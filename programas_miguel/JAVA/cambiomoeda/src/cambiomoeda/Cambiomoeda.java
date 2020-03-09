/*
Cambio de dólares a euros.
Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros.
 */
import java.io.*;

//package cambiomoeda;


public class Cambiomoeda {

    public static void main(String[] args) 
    {
        
        try 
        {
        System.out.println("Introduce a cantidade en dólares que queres pasar a euros: ");
        BufferedReader in = 
	new BufferedReader(new InputStreamReader(System.in));
        int dolares = Integer.parseInt(in.readLine());
        
        double euros = 0;
        euros=dolares/1.33250;
        
        System.out.println(dolares + " dólares son: " + euros + " euros");    
        
        
        } catch (Exception e) 
        {
        System.out.println("Sucedeu un erro na lectura");
        }
                
    }
    
}
