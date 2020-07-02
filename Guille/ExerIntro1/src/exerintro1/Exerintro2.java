/*
* To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

public class ExerIntro2 {

   
   public static void main( String[] args )
    {
        int n1; 
        float conversor;
        


Scanner teclado = new Scanner( System.in );

        System.out.print( "Introduzca el número de dolares que quiere convertir a euros" );
        n1 = teclado.nextInt();

        conversor = n1*1.33250;
        System.out.println (conversor);
        

    }
 }