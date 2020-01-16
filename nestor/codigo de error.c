

int cod_error;

int main()

{

 int n1;

 int n2;

 float respuesta;

 cod_error = 0;

 scanf("%d",&n1);

 scanf("%d",&n2);

 suma(n1,n2);

 resta(n1,n2);

 multi(n1,n2);

 ....

 suma(4,6);

 resta(4,3);

 resta(3,4,3,2,3,2,0,0,0,0);

 respuesta = divi((float)n1,(float)n2);

 if(respuesta==0 && n1!=0)

 {

   printf("ERROR Num. %d\n", cod_error);

 } 

 else

 {

   printf("%f",respuesta);

 }

 divi((float)10,(float)5);

}



float divi (float parametro1, float parametro2)

{

   float resultado;

   resultado = 0;

   if (parametro2!=0)

   {

     resultado = parametro1 /parametro2;

   }

  else

   {

     cod_error = -1000;     

   }

   return(resultado);

}









int resta (int parametro1,int parametro2)

{

  int resultado;

  resultado = 0;

  resultado = parametro1-parametro2;

  return(resultado);

}











int suma(int parametro1, int parametro2)

{

  int resultado;

  resultado=0;

  resultado = parametro1 + parametro2;

  return(resultado); 

}