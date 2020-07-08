print ("¿cuantos números vas a introducir?")
a=int(input())
i=1
contador=0
for i in range(0,a):
    print ("introduce otro número")
    b=int(input())
    if b<0:
        contador=contador+1
print(contador)
    