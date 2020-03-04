#Escriba un programa que pregunte cuantos números se van a introducir, 
# pida esos números y calcule su suma.
print("Bienvenidos a suma+")
print("Por favor indique cuantos numeros quiere introducir")
cuantosnumeros = int(input())
suma =0
for i in range(0,cuantosnumeros):
    print("por favor introduzca el ",i+1,"º numero")
    numero = int(input())
    suma= suma+numero
print("La suma de todos los numeros es",suma)