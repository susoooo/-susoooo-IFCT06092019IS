package com.example.EjSpring5;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class EjSpring5Application {

	public static void main(String[] args) {
		SpringApplication.run(EjSpring5Application.class, args);
	}
        
        @GetMapping("/pag1")
        public String pag1(@RequestParam(value = "pagina", defaultValue = "http://localhost:8080/pag2") String name) {
        return String.format("Esta es la pagina 1\n"+"<html><a href=\"%s\">Pagina2</a></html>",name);
    }
        @GetMapping("/pag2")
        public String pag2(@RequestParam(value = "pagina", defaultValue = "http://localhost:8080/pag1") String name) {
        return String.format("Esta es la pagina 2\n"+"<html><a href=\"%s\">Pagina1</a></html>",name);
    }

}
