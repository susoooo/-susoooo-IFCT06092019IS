package StringCadNum.stringcadnum;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class StringcadnumApplication {

	public static void main(String[] args) {
		SpringApplication.run(StringcadnumApplication.class, args);
	}
        Integer cont1;
        Integer[] cadena;
        Integer cont2;
        String[] resultado;
        
        @GetMapping("/num")
        public String [] numeros(@RequestParam(value = "n1") Integer nu1,@RequestParam(value = "n2") Integer nu2) 
        {
            int cad;
           
            if(nu1<nu2)
            {
                cad=(nu2-nu1)+1;
                cadena = new Integer[cad];
                for(cont1=nu1;cont1<=nu2;cont1++)
                {
                    cadena[cont1-nu1]=cont1;
                }
                        
            }
            else
            {
                cad=(nu1-nu2)+1;
                cadena=new Integer[cad];
                for(cont1=nu2;cont1<=nu1;cont1++)
                {
                    cadena[cont1-nu2]=cont1;
                }
            }
            resultado=new String[cad];
            for(cont2=0;cont2<cad;cont2++)
            {
                resultado[cont2]=Integer.toString(cadena[cont2]);
            }
            return resultado;
            
        }
        
}
