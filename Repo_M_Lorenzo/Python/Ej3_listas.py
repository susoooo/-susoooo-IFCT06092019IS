print("Introduzca el numero de palabras de la lista:")
a=int(input())
lista_palabras=list(range(a))

for i in range(0,a):
    print("Introduzca la palabra:")
    lista_palabras[i]=input()

print(lista_palabras)

print("Comprobacion de palabras:")
print("Introduzca la palabra a comprobar:")
palabra=input()
b=lista_palabras.count(palabra)

print("Aparece ",b, " veces")

rep=palabra in lista_palabras
while (rep!=0):
    print("Sustituyela por...")
    sustituta=input()
    indice=lista_palabras.index(palabra)
    lista_palabras[indice]=sustituta
    rep=palabra in lista_palabras    

print(lista_palabras)