#Escriba un programa que pida un número entero mayor que 
#cero y que escriba sus divisores.
print("Bienvenidos a Disisores+")
print("Por favor introduzca un numero para calcular sua divisores")
num1 = int(input())
for i in range(-num1,0):
    if num1%i==0:
        print(-i)