#7-Escriba un programa que pida una cantidad de segundos y que escriba cuántas horas, minutos y segundos son.


print("Introduce cantidade de segundos que queres transformar:")
segundos=input()
segundos2=int(segundos)

horas=segundos2/3600
horas=int(horas)
segundos2=segundos2-(horas*3600)
minutos=segundos2/60
minutos=int(minutos)
segundos2=segundos2-(minutos*60)

print("Son",horas,"horas",minutos,"minutos e", segundos2,"segundos")
