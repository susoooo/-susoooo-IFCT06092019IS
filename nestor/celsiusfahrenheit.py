#Escriba un programa que pida una temperatura en grados 
#Celsius y que escriba esa temperatura en grados Fahrenheit. 
#La relación entre grados Celsius (C) y grados Fahrenheit (F) 
#es la siguiente: F = 1,8 * C + 32
print("Bienvenidos a Fahrenheit+ programa creado para conversion de grados celsius a Fahrenheit")
print("Por favor introduzca la temperatura en celsius")
celsius = input()
celsius =int (celsius)
Fahrenheit=((1.8 * celsius) + 32)
Fahrenheit = int(Fahrenheit)
print("La temperatura en grados Fahrenheit es = ",Fahrenheit)
