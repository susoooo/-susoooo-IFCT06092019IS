#3-Escriba un programa que pida dos números y que conteste cuál es el menor y cuál el mayor o que escriba que son iguales.

print("Introduce o primeiro número:")
num1=input()
numero1=int(num1)

print("Introduce o segundo número:")
num2=input()
numero2=int(num2)

if numero1 > numero2:

    print("O número", numero1,"é maior que", numero2)

else: 
    
    if numero1 < numero2:
        print("O número", numero1, "é menor que",numero2)

    else:
        print("Os dous números son iguais.")
        

