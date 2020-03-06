#2-Amplia el programa anterior, para que una vez creada la lista, se pida por pantalla una palabra y se diga cuantas veces aparece dicha palabra en la lista.


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



