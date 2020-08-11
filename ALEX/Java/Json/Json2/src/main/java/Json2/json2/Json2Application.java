<<<<<<< HEAD
=======
package Json2.json2;

import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;
        
        class contador
        {
            String texto;
            int longitud;
            int caracter;
            int nletra;
            int nnum;
            int x;
            
            public contador(String texto)
            {
                this.texto=texto;
                this.longitud=texto.length();
                this.caracter=texto.split(" ").length;
                contando();
           
           
            }
           
           public void contando(){
                nnum=0;
                nletra=0;
                for(x=0;x<texto.length();x++)
             {
                 if(Character.isDigit(texto.charAt(x)))
                 {
                    nnum++;
                 }
                 else{
                     if(texto.charAt(x)!= (char)32){
                     nletra++;
                 }
                 }
             }
            
            
    
        }
             public int getLongitud(){return longitud;}
             public int getCaracter(){return caracter;}
             public int getNletra(){return nletra;}
             public int getNnum(){return nnum;}
        }
@SpringBootApplication
@RestController
    
public class Json2Application {
    
        @GetMapping("/text")
	public contador text(@RequestParam(value = "texto", defaultValue = "1 A ver si este ch7isme 4 cuenta 123 paklabras y 2 veces") String texto)
                /*tenemos que crear un objeto de la clase contenedora (class contador)*/
        {
		return new contador(texto);/*tiene que devolver un objeto de la clase contenedora (class contador)*/
	}

	public static void main(String[] args) {
		SpringApplication.run(Json2Application.class, args);
	}

}
>>>>>>> 3a36a97d64d937efaae23a51383f30bc0109df09
