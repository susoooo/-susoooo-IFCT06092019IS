/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package rectangulo;

import java.util.Scanner;

/**
 *
 * @author alex
 */
public class Rectangulo {

 
     public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);

    System.out.println("Calculando area y perimetro de un rectangulo");

    System.out.println("Base : ");
    double base = in.nextInt();

    System.out.println("Altura : ");
    double altura = in.nextInt();

    double area = base*altura;
    double perimetro=(2*base)+(2*altura);

    System.out.println("Area : " + area);
    System.out.println("Perimetro : " + perimetro);
    }
    
}

   
    

