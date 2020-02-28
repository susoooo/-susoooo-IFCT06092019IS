opcion="s"
lista=[]
while (opcion=="s" or opcion=="S"):
    print("Introduzca numero:")
    par=int(input())
    if par%2==0:
        lista=lista+[par]
    else:
        print("No es numero par")
    print("¿Quiere seguir introduciendo numeros? S/N")
    opcion=input()    

print(lista)