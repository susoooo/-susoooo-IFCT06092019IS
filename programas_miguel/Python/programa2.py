#2-Escriba un programa que pida el peso (en kilogramos) y la altura (en metros) de una persona y 
#que calcule su índice de masa corporal (imc). El imc se calcula con la fórmula imc = peso / altura 2

print("Introduce o peso da persoa en Kilogramos: ")
peso=input()
peso2=int(peso)
print("Introduce a altura da persoa en metros: ")
altura=input()
altura2=float(altura)

imc=peso2/(altura2*altura2)
print("O seu índice de masa corporal é:",imc)

