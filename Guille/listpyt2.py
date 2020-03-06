print ("de cuantas palabras quieres formar la lista?")
a=int(input())
lista = []
for i in range(0,a):
    print ("introduce otra palabra")
    b=input()
    lista = lista+[b]
print (lista)
print ("introduce una nueva palabra")
c=(input())
print(" la palabra " , c , " aparece " , lista.count(c), " veces")
print ("escoge una palabra de la lista")
d=(input())
for i in range(0,a):
    if lista[i]==d:
        print ("escoge una palabra para sustituirla")
        e=(input())
        lista[i]=e
print (lista)