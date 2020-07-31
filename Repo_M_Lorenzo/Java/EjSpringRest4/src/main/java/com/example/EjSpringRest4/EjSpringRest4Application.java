package com.example.EjSpringRest4;

import java.util.concurrent.atomic.AtomicLong;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;


@SpringBootApplication
public class EjSpringRest4Application {

	public static void main(String[] args) {
		SpringApplication.run(EjSpringRest4Application.class, args);
	}

}
