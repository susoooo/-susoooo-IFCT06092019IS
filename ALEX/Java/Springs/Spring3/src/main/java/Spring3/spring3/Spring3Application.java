package Spring3.spring3;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;


@SpringBootApplication
@RestController
public class Spring3Application {
    
    long visitas=(System.currentTimeMillis());
    int procesos = 0;
    
	public static void main(String[] args) {
		SpringApplication.run(Spring3Application.class, args);
      
	}
        @GetMapping("/visit")
          public String vis() 
          { 
              int pro = procesos++;
              long nv = (System.currentTimeMillis()-visitas);
              return (Long.toString(nv)+"\n"+ pro);
                 
          }

}
