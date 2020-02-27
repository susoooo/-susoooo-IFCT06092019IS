a=input()
b=input()
c=input()
a=int(a)
b=int(b)
c=int(c)

if  a==b==c:
	print("los tres numeros son iguales")
else:
	if a==b:
		print("a y b son iguales")
	else:
		if b==c:
			print("b y c son iguales")
		else:
			if a==c:
				print("a y c son iguales")
			else:
				print("los tres son distintos")

