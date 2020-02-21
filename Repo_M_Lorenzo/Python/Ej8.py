a=input()
b=input()
a=int(a)
b=int(b)

if b==0:
	print("Division por cero")
else:
	if (a<b):
		print("Division no exacta")
	else:
		if (a%b)==0:
			print("Division exacta")
		else:
			print("Division no exacta")



