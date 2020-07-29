package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class DemoApplication {

public static void main(String[] args) {
SpringApplication.run(DemoApplication.class, args);
}

@GetMapping("/hola")
public String hello(@RequestParam(value = "nombre", defaultValue = "PISCINAS VERDES EN VERANO") String name) {
return String.format("Hello %s!", name);
//return "<HTML><H5>HOOOLA</H1></HTML>";
}
}