
#1-Escriba un programa que pida dos números enteros y que calcule su 
#división, escribiendo si la división es exacta o no y que tenga en cuenta 
#que no se puede dividir por cero
print("Por favor introduzca el primer numero")
num1 = input()
print("Por favor introduzca el segundo numero")
num2 = input()
num1 = int(num1)
num2 = int(num2)
if num2 ==0:
    print("error no se puede dividir por 0")        
division = num1 / num2
division  = float(division)
print("La divion entre",num1,"y",num2,"es =",division)
if num1%num2==0:
    print("la division es exacta")
else:
    print("la division no es exacta")
    pass
    