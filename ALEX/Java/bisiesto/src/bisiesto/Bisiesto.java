/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bisiesto;

/**
 *
 * @author alex
 */
import java.util.*;
//Declaramos la clase Bisiesto
public class Bisiesto {
    
    public static boolean esBisiesto(int a)
    {   //definimos el método
        if(a%4==0 && a%100!=0 || a%400==0) /*Los años bisiestos son aquellos que si los dividimos entre 4 tienen resto 0 y si los dividimos entre 100 su resto es diferente a 0, aunque también puede ser año bisiesto si es divisible entre 400 y su resto es 0*/
           return true;//Si comprobación es correcta devuelve el valor true
        else
           return false;//Si la comprobación no es correcta devuelve el valor false
    }
	public static void main(String[] args) {
		//Hacemos la llamada al scanner para poder meter un valor con el teclado, a este scanner lo llamaremos lectura
        Scanner lectura = new Scanner(System.in);
        //Declaramos la variable año como un numero entero.
        //Ojo, si en el escaner introducimos un valor que no es un numero entero el programa entero dará error
        int año;
        //Mostramos un texto en pantalla que nos invita a introducir el año que queremos comprobar
        System.out.print("ESTE ES EL COMPROBADOR DE AÑOS BISIESTOS\nIntroduce año: ");
        //En esta línea la variable año pasa a ser el valor que hemos introducido
        año = lectura.nextInt();
        /*Establecemos una sentencia IF, la sentencia if comprueba si se cumple una condición, si esta se cumple lleva a cabo una acción y si no otra (else)*/
        if(esBisiesto(año))  //Aquí llamamos al método que hemos declarado más adelante
           System.out.println("Este año es bisiesto"); /*Si el resultado de la comprobación es verdadero (true, muestra el texto "Este año es bisiesto"*/
        else
           System.out.println("Este año no es un año bisiesto");/*Si la comprobación devuelve el valor false, el texto que mostrará es "Este año no es un año bisiesto"*/
    }
 
}
