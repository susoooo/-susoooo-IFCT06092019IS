a_actual=input()
a_destino=input()
a_actual=int(a_actual)
a_destino=int(a_destino)

if a_actual==a_destino:
	print("Es el mismo año")
else:
	if (a_actual>a_destino):
		print("Han pasado",a_actual-a_destino," años")
	else:
		print("Faltan",a_destino-a_actual," años")
