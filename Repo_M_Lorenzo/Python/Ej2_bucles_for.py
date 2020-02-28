print("Introduzca un numero")
a=input()
a=int(a)
divisores=[]
if a>0:
    for i in range(1,a+1):
        if a%i==0:
            divisores=divisores+[i]
    print(divisores)
else:
    print("El numero debe ser mayor que 0")