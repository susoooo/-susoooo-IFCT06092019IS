#programa que pida el peso (en kilogramos) y la altura 
#(en metros) de una persona y que calcule su índice de masa 
#corporal (imc). El imc se calcula con la fórmula 
#imc = peso / altura 2
print("Por favor introduzca su peso")
peso = input()
print("Por favor introduzca su altura en centimetros")
altura = input()
peso = int(peso)
altura = int(altura)
imc = peso / (altura*2)
imc  = float(imc)
print("su indice de masa corporal",imc)
