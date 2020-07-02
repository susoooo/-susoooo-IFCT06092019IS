#7-Escriba un programa que pida una cantidad de segundos y que escriba 
#cuántas horas, minutos y segundos son.
print("Bienvenidos a tiempo+ programa creado para conversion de segundos a horas minutos y segundos")
print("Por favor introduzca los segundos")
segundos = input()
segundos =int (segundos)
horas=int(segundos/3600)
segundos-=horas*3600
minutos=int(segundos/60)
segundos-=minutos*60
print("El tiempo en horas minutos y segundos es = ",horas,":",minutos,":",segundos,)