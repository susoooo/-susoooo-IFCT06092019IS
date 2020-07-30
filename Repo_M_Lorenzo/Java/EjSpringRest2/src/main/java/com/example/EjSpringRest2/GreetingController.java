/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.EjSpringRest2;



import java.util.Date;
import java.util.concurrent.atomic.AtomicLong;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class GreetingController {

	private static final String template = "Hello, %s!";
	private final AtomicLong counter = new AtomicLong();

	@GetMapping("/greeting")
	public Greeting greeting(@RequestParam(value = "name", defaultValue = "World") String name,Date date,
                @RequestParam(value = "link", defaultValue = "https://www.kaggle.com/bennijesus/lovecraft-fiction") String link,
                @RequestParam(value = "title", defaultValue = "Cthulu Mythos") String title,
                @RequestParam(value = "author", defaultValue = "123456") String author,
                @RequestParam(value = "sticky", defaultValue = "false") String sticky){
		return new Greeting(counter.incrementAndGet(), String.format(name),date,link,title,author,sticky);
	}
}
