a_actual=input()
a_destino=input()
a_actual=int(a_actual)
a_destino=int(a_destino)

if a_actual==a_destino:
	print("Es el mismo año")
else:
	if (a_actual>a_destino):
		if ((a_actual-a_destino)==1):
			print("Ha pasado 1 año")
		else:
			print("Han pasado",a_actual-a_destino," años")
	else:
		if ((a_destino-a_actual)==1):
			print("Falta 1 año")
		else:
			print("Faltan",a_destino-a_actual," años")
