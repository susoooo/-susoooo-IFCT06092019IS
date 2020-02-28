print("Introduzca la cantidad de numeros:")
a=input()
a=int(a)
pares=[]
impares=[]
for i in range(0,a+1):
    print("Introduzca el numero")
    b=input()
    b=int(b)
    if b%2==0:
        pares=pares+[i]
    else:
        impares=impares+[i]

print("Numeros pares:")
print(pares)
print("Numeros impares:")
print(impares)
