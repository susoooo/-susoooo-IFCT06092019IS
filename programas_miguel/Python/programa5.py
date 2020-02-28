#5-Escriba un programa que pida una temperatura en grados Fahrenheit y que escriba esa temperatura en grados Celsius. 
#La relación entre grados Celsius (C) y grados Fahrenheit (F) es la siguiente: C = (F - 32) / 1,8


print("Introduce temperatura en grados Fahrenheit:")
grados=input()
grados2=int(grados)
gradoscel=(grados2-32)/1.8
print("Son",gradoscel,"grados Celsius")
