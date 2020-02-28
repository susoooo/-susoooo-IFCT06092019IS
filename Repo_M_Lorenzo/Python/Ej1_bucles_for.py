print("Introduzca el primer numero:")
a=input()
print("Introduzca el segundo numero:")
b=input()
a=int(a)
b=int(b)
pares=[]
impares=[]

for i in range(a,b+1):
        if i%2==0:
            pares=pares+[i]
        else:
            impares=impares+[i]

print("Numeros pares:")
print(pares)
print("Numeros impares:")
print(impares)
