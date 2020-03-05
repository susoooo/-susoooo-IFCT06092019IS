/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package area_perimetro;

import java.util.Scanner;

public class Area_perimetro {


public static void main(String[] args) {
Scanner in = new Scanner(System.in);

System.out.println("Programa que calcula el area y el perimetro de un rectangulo");

System.out.println("Ingrese el primer lado: ");
double lado1 = in.nextInt();

System.out.println("Ingrese el segundo lado: ");
double lado2 = in.nextInt();

double area = lado1*lado2;
double perimetro=(2*lado1)+(2*lado2);

System.out.println("El area del rectangulo es: " + area);
System.out.println("El perimetro del rectangulo es: " + perimetro);



}

}
