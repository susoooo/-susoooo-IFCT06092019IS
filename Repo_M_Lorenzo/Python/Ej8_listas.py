print("Introduzca el numero tope:")
tope=int(input())

lista=[]

if tope<1:
    print("No hay numeros primos")
else:
    for i in range(2,tope+1):
        if i==2:
            lista.append(i)
        if i==3:
            lista.append(i)
        if (i%2!=0 and i%3!=0):
            lista.append(i)

lista.reverse()
print(lista)


