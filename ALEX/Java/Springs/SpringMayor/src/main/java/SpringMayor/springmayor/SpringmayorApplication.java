package SpringMayor.springmayor;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class SpringmayorApplication {

	public static void main(String[] args) {
		SpringApplication.run(SpringmayorApplication.class, args);
	}
        double mayor;
        double menor;
        double inter;
        double n1 = 5;
        double n2 = 3;
        double n3 = 6;
         @GetMapping("/num")
         public String numeros()
         {  
             if(n1>n2 && n1>n3 && n2>n3)
             {
                 mayor=n1;
                 menor=n3; 
                 inter=n2;
             }
              if(n1>n2 && n1>n3 && n2<n3)
             {
                 mayor=n1;
                 menor=n2; 
                 inter=n3;
             }
              if(n1<n2 && n1>n3 && n2>n3)
             {
                 mayor=n2;
                 menor=n3; 
                 inter=n1;
             }
              if(n1<n2 && n1<n3 && n2>n3)
             {
                 mayor=n2;
                 menor=n1; 
                 inter=n3;
             }
              if(n1>n2 && n1<n3 && n2<n3)
             {
                 mayor=n3;
                 menor=n2; 
                 inter=n1;
             }
              if(n1<n2 && n1<n3 && n2<n3)
             {
                 mayor=n3;
                 menor=n1; 
                 inter=n2;
             }
              return "El numero mayor es: "+Double.toString(mayor)+"\n"+" el intermedio es: "+Double.toString(inter)+"\n"+" el menor es: "+Double.toString(menor)+"\n";
         }
}
