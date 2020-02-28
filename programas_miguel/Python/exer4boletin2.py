#4-Escriba un programa que pida el año actual y un año cualquiera y que escriba cuántos años han pasado 
#desde ese año o cuántos años faltan para llegar a ese año.

print("Introduce o ano actual:")
anoactual1=input()
anoactual2=int(anoactual1)

print("Introduce o ano desde/ata o que queres calcular:")
anocal1=input()
anocal2=int(anocal1)

if anoactual2 > anocal2:
    diferencia1=anoactual2-anocal2
    print("Desde o ano",anocal2, "ata o ano actual",anoactual2,"pasaron",diferencia1,"anos")

else: 
    
    if  anocal2 > anoactual2:
        diferencia2=anocal2-anoactual2
        print("Faltan", diferencia2, "anos para chegar desde",anoactual2, "ó ano",anocal2)

    else:
        print("Os dous anos son o mesmo.")




