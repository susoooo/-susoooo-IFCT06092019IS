print ("¿cuantos números vas a introducir?")
a=int(input())
i=1
for i in range(1,a):
    print ("introduce otro número")
    b=int(input())
    if b>a:
        print ("ojo, este número es mayor que el primero")