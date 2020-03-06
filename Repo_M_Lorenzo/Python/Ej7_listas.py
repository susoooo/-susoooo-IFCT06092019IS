print("Introduzca el numero de nombres de la primera lista:")
n1=int(input())
lista1=list(range(n1))
for i in range(0,n1):
    print("Introduza el nombre:")
    nom1=input()
    lista1[i]=nom1

print("Introduzca el numero de nombres de la segunda lista:")
n2=int(input())
lista2=list(range(n2))
for i in range(0,n2):
    print("Introduza el nombre:")
    nom2=input()
    lista2[i]=nom2

lista3=[]
lista4=[]
lista5=[]

for i in range(0,n1):
    if lista1[i] in lista2:
        lista3.append(lista1[i])
    else:
        lista4.append(lista1[i])

for i in range(0,n2):
    if not lista2[i] in lista1:
        lista5.append(lista2[i])


print(lista1)
print(lista2)
print(lista3)
print(lista4)
print(lista5)


        
    