#Escriba un programa que pida dos números enteros y escriba qué números son 
#pares y cuáles impares desde el primero hasta el segundo
print("Bienvenidos a Enteros par impar+")
print("Por favor introduzca el primer numero")
num1 = input(int())
print("Por favor introduzca el segundo numero")
num2 = input(int())
if num1%2==0:
    print("El numero",num1,"es par\n")
else: 
    print("El numero",num1,"es impar\n")
if num2%2==0:
    print("El numero",num2,"es par\n")
else:
    print("El numero",num2,"es impar\n")