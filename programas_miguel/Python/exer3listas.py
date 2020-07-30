#3-Amplia el programa anterior para que, una vez encontrada una palabra, pida otra palabra, y 
#substituya la segunda palabra por la primera en la lista inicial.

print("Introduce o número de elementos que queres incluír na listaxe: ")

elementos=input()
elementos2=int(elementos)

listaxe=[]

for i in range(0,elementos2):
    print("Teclea palabra: ")
    palabra=input()
    listaxe = listaxe +[palabra] 


print ("Escribe a palabra que queres buscar: ")
buscar=input()
print("A palabra",buscar,"aparece",listaxe.count(buscar),"veces")

for i in range(listaxe):


print ("Escribe a palabra que queres cambiar por",buscar,": ")
nova=input()






print(listaxe)
