#Escriba un programa que pregunte cuántos números se van a 
#introducir, pida esos números, y muestre un mensaje cada vez 
#que un número no sea mayor que el primero.
print("Bienvenidos a Mayores+")
print("Por favor introduzca cuantos numero quiere introducir")
cuantosnumeros = int(input())
numerosiguiente=-1
primernumero =0
print("por favor introduzca el  1º numero")
primernumero = int(input())
for i in range(1,cuantosnumeros+1):
    print("por favor introduzca el ",i+1,"º numero")
    segundonumero = int(input())
    if segundonumero<primernumero:
        print("el numero",segundonumero,"no es mayor que",primernumero)
 