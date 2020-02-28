print("Introduzca el minimo:")
minimo=int(input())
print("Introduzca el maximo:")
maximo=int(input())
b=minimo
lista=[minimo,maximo]
while (b>=minimo and b<=maximo):
    print("Introduzca numero:")
    b=int(input())
    if b>=minimo and b<=maximo:
        lista=lista+[b]
    

print(lista)