package com.example.EjSpring4;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpring4Application {

	public static void main(String[] args) {
		SpringApplication.run(EjSpring4Application.class, args);
	}
        
        private long tiempo=0;
        private float horas=0;
        
        
        @GetMapping("/tiempo")
    public String reseteo(@RequestParam(value = "reset", defaultValue = "") String name) {
        tiempo=System.currentTimeMillis();
        horas=tiempo/(3600*1000);
        return String.format("Han transcurrido %f horas",horas);
    }

}
