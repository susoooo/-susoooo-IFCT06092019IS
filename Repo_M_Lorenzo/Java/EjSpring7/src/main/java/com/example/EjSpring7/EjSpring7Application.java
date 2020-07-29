package com.example.EjSpring7;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpring7Application {

	public static void main(String[] args) {
		SpringApplication.run(EjSpring7Application.class, args);
	}
        
        private Integer i,secuencia[],j;
        private String resultado[];
        
        
        @GetMapping("/numeros")
        public String[] numeros(@RequestParam(value = "n1") Integer num1,@RequestParam(value = "n2") Integer num2) {
            int dim;
            if(num1>num2)
            {
                dim = (num1-num2)+1;
                secuencia=new Integer[dim];
                for(i=num2;i<=num1;i++)
                {
                    secuencia[i-num2]=i;
                }
            }
            else
            {
                dim=(num2-num1)+1;
                secuencia=new Integer[dim];
                for(i=num1;i<=num2;i++)
                {
                    secuencia[i-num1]=i;
                }
            }
            
            resultado=new String[dim];
            for(j=0;j<dim;j++)
            {
                resultado[j]=secuencia[j].toString();
            }
            
            
            
            
            
        return resultado;
    }
}