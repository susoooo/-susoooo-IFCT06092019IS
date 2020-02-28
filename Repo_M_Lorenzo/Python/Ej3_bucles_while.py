print("Introduzca cuantos numeros positivos desea:")
a=int(input())
i=0
lista=[]
while i<a:
    print("Introduzca el numero:")
    b=int(input())
    if b>0:
        lista=lista+[b]
        i+=1

print(lista)