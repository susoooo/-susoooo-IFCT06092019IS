#3-Escriba un programa que pida una distancia en pies y 
#pulgadas y que escriba esa distancia en centímetros.
#Un pie son doce pulgadas y una pulgada son 2,54 cm.
print("Bienvenidos a distancia+ programa creado para conversion de pies y pulgadas a centimetros")
print("Por favor introduzca los pies")
pies = input()
pies =int (pies)
print("Por favor introduzca las pulgadas")
pulgadas = input()
pulgadas = int(pulgadas)
distanciacm=(pies*12)+(pulgadas*2.54)
distanciacm  = float(distanciacm)
print("La distancia en centimetros es",distanciacm)