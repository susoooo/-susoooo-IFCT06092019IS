print("Introduzca el numero de nombres de la primera lista:")
n1=int(input())
lista1=list(range(n1))
lista2=list(range(n1))
for i in range(0,n1):
    print("Introduza el nombre:")
    nom1=input()
    lista1[i]=nom1
    
lista2=lista1[::-1]

print(lista1)
print(lista2)

