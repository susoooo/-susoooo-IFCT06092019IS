#1-Escriba un programa que pida dos números enteros y escriba qué números son pares y cuáles impares desde el primero hasta el segundo

print("Introduce o primeiro número enteiro:")
num1=input()
numero1=int(num1)

print("Introduce o segundo número enteiro:")
num2=input()
numero2=int(num2)

for num in range(numero1,numero2+1):
    if num % 2 == 0:
        print("O número", num,"é par.")
    else:
        print("O número",num, "é impar.")

