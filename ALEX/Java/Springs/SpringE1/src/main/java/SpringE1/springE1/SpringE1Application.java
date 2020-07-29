package SpringE1.springE1;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class SpringE1Application {

	public static void main(String[] args) {
		SpringApplication.run(SpringE1Application.class, args);
	}
        @GetMapping("/lunes")
          public String dia1() 
          {
  
          return "El lunes da asco";
                 
          }
          @GetMapping("/martes")
          public String dia2() 
          {
  
          return "Los martes hay champions";
                 
          }
          @GetMapping("/miercoles")
          public String dia3() 
          {
  
          return "El miercoles es dia de vino";
                 
          }

}
