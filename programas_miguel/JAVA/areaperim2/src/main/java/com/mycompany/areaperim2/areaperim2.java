
//package areaperim;
/*Cálculo de área y perímetro
Escribe un programa que pregunte al usuario los dos lados de un rectángulo y
presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por
altura).*/


import java.io.*;

public class areaperim2 {

    public static void main(String args[]) 
    {
        
        try 
        {
        System.out.println("Introduce a base en cms: ");
        BufferedReader entradanum = 
	new BufferedReader(new InputStreamReader(System.in));
        int num1 = Integer.parseInt(entradanum.readLine());
        
        System.out.println("Introduce a altura en cms: ");
        int num2 = Integer.parseInt(entradanum.readLine());
        
        int perimetro = 0;
        perimetro=num1+num2;
        
        int area = 0;
        area=num1*num2;
        
        
        System.out.println("O total do perímetro é: " + perimetro +" cms"); 
        System.out.println("O total da área é: " + area + " cms");    
        
        
        } catch (Exception e) 
        {
        System.out.println("Sucedeu un erro na lectura");
        }
                
    }
    
}
