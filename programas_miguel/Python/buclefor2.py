#2-Escriba un programa que pida un número entero mayor que cero y que escriba sus divisores.

print("Introduce un número enteiro maior que 0:")
num1=input()
numero1=int(num1)

for num in range(1, numero1 + 1):

    if numero1 % num == 0: #Se o resto é igual a 0
        print("Os divisores de",numero1,"son",num)




