print("Introduzca la cantidad de numeros:")
a=input()
a=int(a)
lista=[]
for i in range(0,a+1):
    print("Introduzca el numero")
    b=input()
    b=int(b)
    if b<0:
        lista=lista+[b]
print(lista)