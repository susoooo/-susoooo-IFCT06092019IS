package com.example.EjSpring6;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpring6Application {

	public static void main(String[] args) {
		SpringApplication.run(EjSpring6Application.class, args);
	}
        private Integer mayor,menor,inter;
        
        @GetMapping("/numeros")
        public String numeros(@RequestParam(value = "n1") Integer num1,@RequestParam(value = "n2") Integer num2,@RequestParam(value = "n3") Integer num3) {
            if(num1>num2 && num1>num3 && num2>num3)
            {
                mayor=num1;
                menor=num3;
                inter=num2;
            }
            if(num1>num2 && num1>num3 && num2<num3)
            {
                mayor=num1;
                menor=num2;
                inter=num3;
            }
            if(num2>num1 && num2>num3 && num1>num3)
            {
                mayor=num2;
                menor=num3;
                inter=num1;
            }
            if(num2>num1 && num2>num3 && num1<num3)
            {
                mayor=num2;
                menor=num1;
                inter=num3;
            }
            if(num3>num1 && num3>num2 && num1>num2)
            {
                mayor=num3;
                menor=num2;
                inter=num1;
            }
            
            if(num3>num1 && num3>num2 && num1<num2)
            {
                mayor=num3;
                menor=num1;
                inter=num2;
            }
        return String.format("El orden es: %d, %d, %d",mayor,inter,menor);
    }
        


}
