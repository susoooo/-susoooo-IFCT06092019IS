#4-Escriba un programa que pida una temperatura en grados Celsius y que escriba esa temperatura en grados Fahrenheit.
# La relación entre grados Celsius (C) y grados Fahrenheit (F) es la siguiente: F = 1,8 * C + 32


print("Introduce temperatura en grados Celsius:")
grados=input()
grados2=int(grados)
gradosfaren=(1.8*grados2)+32
print("Son",gradosfaren,"grados Fahrenheit")

