package com.example.EjSpring8;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpring8Application {

        private int j;
        private String resultado[];
        
	public static void main(String[] args) {
		SpringApplication.run(EjSpring8Application.class, args);
	}
        
        @GetMapping("/numeros")
        public String[] numeros(@RequestParam(value = "n1") int num1,@RequestParam(value = "texto") String texto) {
            int dim;
            dim=num1;
            resultado=new String[dim];
            for(j=0;j<dim;j++)
            {
                resultado[j]=texto;
            }
            
            
            
            
            
        return resultado;
    }

}
