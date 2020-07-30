package exerc1SW6b.MayMen;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;






class Exer1SW6b {

	private final int num1;
	private final int num2;
        private final int num3;

	public Exer1SW6b(int num1,int num2,int num3){
		this.num1 = num1;
		this.num2 = num2;
                this.num3 = num3;
	}
	public int getnum1() {return num1;}
	public int getnum2() {return num2;}
        public int getnum3() {return num3;}
}



//class GreetingController {

	
//}
@SpringBootApplication
@RestController
        class MayMenApplication {
        private static final String template = "Hello, %s!";
	private final AtomicLong counter = new AtomicLong();

	@GetMapping("/exer1SW6b")
	public Exer1SW6b exer1SW6b (@RequestParam(value = "num1", defaultValue = "Nmros") String Num1,
        @RequestParam(value = "num2", defaultValue = "Nmros") String Num2,@RequestParam(value = "num3", defaultValue = "Nmros") String Num3) {
        
        int mayor, medio, menor;
        int i =Integer.parseInt(Num1);
        int v= Integer.parseInt(Num2);
        int z = Integer.parseInt(Num3);
        if (i > v) {
            if (i > z)}
                                                           
                       (mayor= i);
            
            
        	return (new Exer1SW6b(mayor,medio,menor));
	}
	
	public static void main(String[] args) {
		SpringApplication.run(MayMenApplication.class, args);
        }	
   
        

      
   
}
   
         