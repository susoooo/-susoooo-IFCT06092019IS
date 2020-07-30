/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package javaapplication5;

/**
 *
 * @author nestor
 */
public class JavaApplication5 
    {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
        {
        
        // TODO code application logic here
        class Complejo
            {
             private double re, im;
             public Complejo(double re, double im) 
                {
                this.re = re;this.im = im;
                }
             public String toString() 
                {
                return(new String(re + "+" + im + "i"));
                }
             public boolean equals(Complejo v) 
                {
                return((re == v.re) && (im == v.im));
                }
            public double modul() 
                {
                return(Math.sqrt(re*re + im*im));
                }
            public void suma(Complejo v) 
                {
                 re = re + v.re;im = im + v.im;
                }
            public void suma(Complejo ... args) 
                {
                    for (int i=0; i<args.length; i++) 
                        {
                         re = re + args[i].re;
                         im = im + args[i].im;
                        }
                }
            }
        }
    
    }
