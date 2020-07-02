#1-Escribe un programa que cree una lista de palabras. Primero debe pedir por pantalla el número de elementos a incluir en la lista, pedir tantas 
#palabras como se haya dicho en ese número, y crear una lista con dichas palabras.

print("Introduce o número de elementos que queres incluír na listaxe: ")

elementos=input()
elementos2=int(elementos)

listaxe=[]

for i in range(0,elementos2):
    print("Teclea palabra: ")
    palabra=input()
    listaxe = listaxe +[palabra] 

print(listaxe)



    







