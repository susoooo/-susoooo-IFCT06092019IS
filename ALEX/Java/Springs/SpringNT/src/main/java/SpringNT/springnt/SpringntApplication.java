package SpringNT.springnt;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class SpringntApplication {
   
    int contador;
    String [] resultado;

	public static void main(String[] args) {
		SpringApplication.run(SpringntApplication.class, args);
	}

    /**
     *
     * @param num1
     * @param texto
     * @return
     */
    @GetMapping("/num")
        public String[] numeros(@RequestParam(value = "n1") int num1,@RequestParam(value = "texto",defaultValue = "o caldo esta podre") String texto) 
        {
            int cadena;
            cadena=num1;
            resultado =new String[cadena];
            for(contador=0;contador<cadena;contador++)
            {
                resultado[contador]=texto;
            }
            return resultado;
        }
}
