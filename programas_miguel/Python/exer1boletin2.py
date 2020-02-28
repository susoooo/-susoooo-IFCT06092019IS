#1-Escriba un programa que pida dos números enteros y que calcule su división, escribiendo si la división es exacta o no.

print("Introduce o dividendo:")
dividendo1=input()
dividendo2=int(dividendo1)

print("Introduce o divisor:")
divisor1=input()
divisor2=int(divisor1)

resultado=dividendo2/divisor2
resto=dividendo2 % divisor2

if resto == 0:

    print("A división é exacta. Cociente: ", resultado)

else:
    print("A división non é exacta. Resultado: ", resultado, "Resto: " , resto)










