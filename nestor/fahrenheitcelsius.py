#Escriba un programa que pida una temperatura en grados Fahrenheit 
#y que escriba esa temperatura en grados Celsius. 
#La relación entre grados Celsius (C) y grados Fahrenheit (F) 
#es la siguiente: C = (F - 32) / 1,8
print("Bienvenidos a Celsius+ programa creado para conversion de grados Fahrenheit a celsius")
print("Por favor introduzca la temperatura en Fahrenheit")
Fahrenheit = input()
Fahrenheit =int (Fahrenheit)
celsius = ((Fahrenheit - 32) / 1.8)
celsius = int(celsius)
print("La temperatura en grados Celsius es = ",celsius)
