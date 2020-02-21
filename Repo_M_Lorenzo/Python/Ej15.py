a=input()
a=int(a)
if a%4==0:
    if a%100==0:
        if a%400==0:
            print("El año es bisiesto")
        else:
            print("El año no es bisiesto")
    else:
        print("El año es bisiesto.")
else:
    print("El año no es bisiesto.")
