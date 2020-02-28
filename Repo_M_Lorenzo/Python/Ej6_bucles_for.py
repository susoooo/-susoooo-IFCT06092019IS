print("Introduzca la cantidad de numeros:")
a=input()
a=int(a)
lista=[]
suma=0
for i in range(0,a):
    print("Introduzca el numero")
    b=input()
    b=int(b)
    lista=lista+[b]
    suma=suma+lista[i]
print(suma)

