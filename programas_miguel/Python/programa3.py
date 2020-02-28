#3-Escriba un programa que pida una distancia en pies y pulgadas y que escriba esa distancia en centímetros.
#Un pie son doce pulgadas y una pulgada son 2,54 cm.

print("Introduce distancia en pies:")
pie=input()
pie2=int(pie)
distanpul=pie2*12
print("Son",distanpul,"pulgadas")

print("Introduce distancia en pulgadas:")
pulgada=input()
pulgada2=int(pulgada)
distanciacm=pulgada2*2.54
print("Son",distanciacm,"centímetros")



