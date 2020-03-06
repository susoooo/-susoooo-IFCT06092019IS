print ("¿cuantos números vas a introducir?")
a=int(input())
i=1
contador=0
contado2=0
for i in range(0,a):
    print ("introduce otro número")
    b=int(input())
    if b % 2==0:
        contador=contador+1
    else :
        contado2=contado2+1
print(contador)
print(contado2)    