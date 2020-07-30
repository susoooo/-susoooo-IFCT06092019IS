package com.example.EjSpinrg3;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpinrg3Application {

	public static void main(String[] args) {
		SpringApplication.run(EjSpinrg3Application.class, args);
                
	}
    private int peticion=0;
        
        @GetMapping("/peticion")
    public String reseteo(@RequestParam(value = "reset", defaultValue = "") String name) {
        if (name.contains("true"))
        {
            peticion=0;
        }
        peticion=peticion+1;
        return String.format("He recibido %d peticiones", peticion);
    }

}
