print("Introduzca la cantidad de numeros:")
a=input()
a=int(a)
lista=[]
for i in range(0,a+1):
    print("Introduzca el numero")
    b=input()
    b=int(b)
    lista=lista+[b]
    if i>=1:
        if lista[i]>lista[0]:
            print("El numero es mayor que el primer elemento:",lista[0])