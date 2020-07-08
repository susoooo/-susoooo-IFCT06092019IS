/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejemploclases;

/**
 *
 * @author victor
 */

public class Ejemploclases {
    
    public static void main(String[] args) {
        // TODO code application logic here
        Complejo z, w;
        z = new Complejo(-1.5, 3.0);
        w = new Complejo(-1.2, 2.4);
        z.suma(w);
        System.out.println("Complejo: " + z.toString());
        System.out.println("Modulo: " + z.modul());
    }
}

class Complejo
{
    public double re, im;
    public Complejo(double re1, double im1) 
        {re = re1;im = im1;}
    public String toString() 
        {return(new String(re + "+" + im + "i"));}
    public boolean equals(Complejo v) 
        {return((re == v.re) && (im == v.im));}
    public double modul() 
        {return(Math.sqrt(re*re + im*im));}
    public void suma(Complejo v) 
        {re = re + v.re;im = im + v.im;}
        /*public void suma(Complejo ... args) {
            for (int i=0; i<args.length; i++) {
		re = re + args[i].re;
		im = im + args[i].im;
            }
        }*/
}
