a=input()
segundos=int(a)
horas=segundos//3600
resto_minutos=segundos%3600
minutos=resto_minutos//60
resto_segundos=resto_minutos%60

print(segundos,"segundos son ",horas," horas ",minutos," minutos y ",resto_segundos," segundos")
