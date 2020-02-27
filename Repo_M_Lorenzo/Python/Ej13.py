a=input()
b=input()
a=int(a)
b=int(b)

if (a<0 or b<0):
	print("Ha introducido algun numero negativo")
else:
	if (a==0 or b==0):
		print("Ha introducido algun valor nulo")
	else:
		if a>b:
			if (a%b==0):
				print("Es multiplo")
			else:
				print("No es multiplo")
		else:
	
			if (b%a==0):
				print("Es multiplo")
			else:
				print("No es multiplo")	
