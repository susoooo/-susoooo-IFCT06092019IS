#Escriba un programa que pregunte cuántos números se van a 
#introducir, pida esos números, y muestre un mensaje cada vez 
#que un número no sea mayor que el primero.
print("Bienvenidos a Mayores+")
print("Por favor introduzca cuantos numero quiere introducir")
cuantosnumeros = int(input())
numerosiguiente=-1
primernumero =0
for i in range(0,cuantosnumeros):
    print("por favor introduzca el ",i+1,"º numero")
    primernumero = int(input())
    if numerosiguiente>primernumero:
        print("el numero",numerosiguiente,"es mayor que",(primernumero))
    numerosiguiente =(primernumero+i)