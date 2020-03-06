print("Introduzca una palabra para contar vocales:")
palabra=input()
lista_vocales=["a","e","i","o","u"]
letras=list(palabra)

for i in range(0,len(letras)):
    if not letras[i] in lista_vocales:
        print(letras[i]+" repetida "+str(palabra.count(letras[i]))+" veces")