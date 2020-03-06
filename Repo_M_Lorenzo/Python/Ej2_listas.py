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
