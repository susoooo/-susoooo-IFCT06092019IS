#2-Mejore el programa anterior haciendo que tenga en cuenta que no se puede dividir por cero

print("Introduce o dividendo:")
dividendo1=input()
dividendo2=int(dividendo1)

print("Introduce o divisor:")
divisor1=input()
divisor2=int(divisor1)


if divisor2==0:
    print ("O divisor non pode ser 0")
else:
    resultado=dividendo2/divisor2
    resto=dividendo2 % divisor2

    if resto == 0:

        print("A división é exacta. Cociente: ", resultado)

    else:
        print("A división non é exacta. Resultado: ", resultado, "Resto: " , resto)
