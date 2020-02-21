print("pulse t para calcular el area de un triangulo, otra tecla para area de un circulo")
opcion=input()

if opcion=="t" or opcion=="T":
	print("base")		
	base=input()
	base=float(base)
	print("altura")
	altura=input()
	altura=float(altura)
	area=(base*altura)/2
	print("el area del triangulo es: ",area)
else:
	print("radio")
	radio=input()
	radio=float(radio)
	pi=3.14159
	area=pi*(radio**2)
	print("el area del circulo es: ",area)
