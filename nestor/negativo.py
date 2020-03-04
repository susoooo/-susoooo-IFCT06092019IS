#Escriba un programa que pregunte cuántos números se van 
#a introducir, pida esos números y escriba cuántos negativos 
#ha introducido.
print("Bienvenidos a Negativos+")
print("Por favor introduzca cuantos numero quiere introducir")
cuantosnumeros = int(input())
numero =0
for i in range(0,cuantosnumeros):
    print("por favor introduzca el ",i+1,"º numero")
    numero = int(input())
    if numero<0:
        print("el numero",numero,"es negativo")
 