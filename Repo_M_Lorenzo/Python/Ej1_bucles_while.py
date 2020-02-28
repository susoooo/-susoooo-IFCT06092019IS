print("Introduzca el primer numero:")
a=int(input())
#a=int(a)
print("Introduzca el segundo numero:")
b=int(input())
#b=int(b)

while a>b:
    print("A>B, introduzca otro numero:")
    b=int(input())

print("Los numeros son:",a,b)