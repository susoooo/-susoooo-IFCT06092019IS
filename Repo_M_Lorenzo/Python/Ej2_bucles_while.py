print("Introduzca el primer numero:")
a=float(input())
print("Introduzca el segundo numero:")
b=float(input())

while a<b:
    print("A<B, introduzca otro numero:")
    b=float(input())

print("Los numeros son:",a,b)