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

for i in range(0,n2):
    while lista2[i]in lista1!=0:
        indice=lista1.index(lista2[i])
        lista1[indice]=""
    
print(lista1)


