print ("introduce un número")
a=input()
c=int(a)
print ("introduce un segundo número")
b=input()
d=int(b)
for i in range(c,d):
    if i %2==0 :
        print (i , " é par")
    else :
        print (i , " é impar")