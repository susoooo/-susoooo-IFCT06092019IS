
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
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
public class Ej4_ficheros {

    /**
     * @param args the command line arguments
     * @throws java.io.FileNotFoundException
     */
    public static void main(String[] args) throws FileNotFoundException, IOException {
        // TODO code application logic here
        String lectura;

        FileWriter f2;
        try (FileReader f1 = new FileReader("prueba.txt")) {
            f2 = new FileWriter("cambio_prueba.txt");
            BufferedReader in = new BufferedReader(f1);
            BufferedWriter out = new BufferedWriter(f2);
            while ((lectura = in.readLine()) != null) {
                f2.write(lectura.toUpperCase());
            }
        }
        f2.close();
    }
    
}
