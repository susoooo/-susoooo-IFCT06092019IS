#3-Escriba un programa que pregunte cuántos números se van a introducir, pida esos números, y muestre 
#un mensaje cada vez que un número no sea mayor que el primero

print("Cantos números queres introducir?:")
numeros=input()
numeros1=int(numeros)

print("Introduce o primeiro número: ")
primeironum=input()
primeiro=int(primeironum)


for i in range(1, numeros1):

    print("Escribe un número maior que o primeiro: ")
    numeromaior=input()
    nummaior=int(numeromaior)

    if nummaior <= primeiro:
        print(nummaior, "non é maior que o primeiro")

