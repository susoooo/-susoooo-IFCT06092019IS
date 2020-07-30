package com.example.EjSpring2;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpring2Application {

	public static void main(String[] args) {
		SpringApplication.run(EjSpring2Application.class, args);
	}
        
    @GetMapping("/lunes")
    public String lunes(@RequestParam(value = "nombre", defaultValue = "É hora de levantarse") String name) {
    return String.format("Bos dias. %s!", name);
    //return ("<HTML><H1>HOOOOLA</H1></HTML>");
    }
}
