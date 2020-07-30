import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import static java.lang.System.out;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author mlorenzo
 */
public class Ej3_ficheros {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException {
        // TODO code application logic here
        String lectura;

        FileReader f1 = new FileReader(args[0]);
        FileWriter f2 = new FileWriter("copia_de_"+args[0]);

        BufferedReader in = new BufferedReader(f1);
        BufferedWriter out = new BufferedWriter(f2);

        while ((lectura = in.readLine()) != null) {
        f2.write(lectura);
}
        f1.close();
        f2.close();
    }
    
}
