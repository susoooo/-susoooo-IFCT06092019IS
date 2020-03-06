tupla1 = (1,2,3,4,5)
tupla2 = (6,7,8,9,10)
tupla3 = tupla1 + tupla2

print ("concatenación de",tupla1,"e",tupla2,"resulta:",tupla3)

tripletup=tupla1 * 3
print("Imprime tres veces a mesma tupla:", tripletup)

print("Hai un 7 na tupla1?",7 in tupla1)

print("Posición da tupla na que está o valor 3?",tupla1.index(3))

print("Que hai na posición 4 da tupla?",tupla1[4])

print("Extracción da tupla:",tupla1[1:3])


#Listas:

primos = [2, 3, 5, 7, 11, 13]
print(primos)
diasLaborables = ["Lunes", "Martes", "Miércoles", "Jueves", "Viernes"]
print(diasLaborables)
fecha = ["Lunes", 27, "Octubre", 1997]
print(fecha)
peliculas = [ ["Senderos de Gloria", 1957], ["Hannah y sus hermanas", 1986]]
print (peliculas)
lista = ["uno", "dos", "tres"]
print(lista)
#Cambiamos valor ó elemento da posición 0 porque listas son mutables:
lista[0] = "cuatro" 
print(lista[0])


#Niveles de anidamiento:
directores = [ ["Stanley Kubrick", ["Senderos de Gloria", 1957]], ["Woody Allen", ["Hannah y sus hermanas", 1986]] ]
print(directores)

#Acceso a elementos por indices:
lista = [10, 20, 30, 40]
print(lista[2])
print(lista[0])

#Concatenar listas:
vocales = ["E", "I", "O"]
print(vocales)
vocales = vocales + ["U"]
print(vocales)

#Definir desde variables
nombre = "Pepe"
edad = 25
listavar = [nombre, edad]
print(listavar)

#Forma de crear listas
x = range(10)
print(x)
print(list(x)) #Ata a posición 10
print(list(range(7))) #Ata a posición 7

#Rangos: se pueden expandir entre dos números:
print(list(range(-5,1)))
print(list(range(5, 1))) #non se pode
print(list(range(3, 3))) #non se pode

#Rangos:3 parámetros
print(list(range(5, 21, 3))) #imprime os números entre 5 e 21 de 3 en 3
print(list(range(10, 0,-2))) #poden ir marcha atrás

#Concatenar listas con varios rangos:
print(list(range(3)) + list(range(5)))





