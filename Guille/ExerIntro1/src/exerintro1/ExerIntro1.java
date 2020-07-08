/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

public class ExerIntro1 {

   
   public static void main( String[] args )
    {
        int n1, n2, perimetro,area;
        


Scanner teclado = new Scanner( System.in );

        System.out.print( "Introduzca base del rectángulo: " );
        n1 = teclado.nextInt();

        System.out.print( "Introduzca altura del rectángulo: " );
        n2 = teclado.nextInt();


 perimetro = ((2*n1)+(2*n2));

 area = (n1*n2);

   
        System.out.println (perimetro);
                          
        System.out.println (area);
        

    }
}