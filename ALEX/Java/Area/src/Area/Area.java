package Area;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

public class Area {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);

    System.out.println("Calculando area y perimetro de un rectangulo");

    System.out.println("Lado 1 : ");
    double lado1 = in.nextInt();

    System.out.println("Lado 2 : ");
    double lado2 = in.nextInt();

    double area = lado1*lado2;
    double perimetro=(2*lado1)+(2*lado2);

    System.out.println("Area : " + area);
    System.out.println("Perimetro : " + perimetro);
    }
    
}





