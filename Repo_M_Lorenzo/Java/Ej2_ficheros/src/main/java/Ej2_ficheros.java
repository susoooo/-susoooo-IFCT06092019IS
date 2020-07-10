
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author mlorenzo
 */
public class Ej2_ficheros {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException {
        // TODO code application logic here
        FileReader fich1 = new FileReader("prueba.txt");


        BufferedReader in = new BufferedReader(fich1);
        String caracter;
        int n_caracteres=0;


        while ((caracter = in.readLine()) != null) {
        n_caracteres=n_caracteres+caracter.length();
        }
        fich1.close();
        System.out.println("El texto tiene "+ n_caracteres +" caracteres");
    }
    }
    

