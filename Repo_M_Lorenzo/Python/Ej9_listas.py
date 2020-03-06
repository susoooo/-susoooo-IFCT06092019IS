print("Introduzca una palabra para contar vocales:")
palabra=input()
lista_vocales=["a","e","i","o","u"]

for i in range(0,len(lista_vocales)):
    print(lista_vocales[i]+" repetida "+str(palabra.count(lista_vocales[i]))+" veces")
    

