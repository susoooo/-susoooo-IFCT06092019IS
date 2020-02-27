>>> print("introduce tu peso en kilos")
introduce tu peso en kilos
>>> a=input()
80
>>> print("introduce tu altura en metros")
introduce tu altura en metros
>>> b=input()
1,80
>>> c=int(a)
>>> d=float(b)
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
ValueError: could not convert string to float: '1,80'
>>> b=input()
1.80
>>> d=float(b)
>>> imc=c/(d*2)
>>> print (imc)
22.22222222222222
>>> exit()
guille@guille-VirtualBox:~$ python3
Python 3.6.9 (default, Nov  7 2019, 10:44:02) 
[GCC 8.3.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> print ("escribe una distancia en pies y pulgadas, te la devolveremos en centímetros)
  File "<stdin>", line 1
    print ("escribe una distancia en pies y pulgadas, te la devolveremos en centímetros)
                                                                                        ^
SyntaxError: EOL while scanning string literal
>>> print ("escribe una distancia en pies y pulgadas, te la devolveremos en centímetros)
  File "<stdin>", line 1
    print ("escribe una distancia en pies y pulgadas, te la devolveremos en centímetros)
                                                                                        ^
SyntaxError: EOL while scanning string literal
>>> print ("escribe una distancia en pies y pulgadas")
escribe una distancia en pies y pulgadas
>>> a=input()
12
>>> b=input()
7
>>> c=int (a)
>>> d=int (b)
>>> distancia= float(e)
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
NameError: name 'e' is not defined
>>> c=int (a)
>>> d=int (b)
>>> e=float(e)
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
NameError: name 'e' is not defined
>>> distancia=(c*(12*2.54))+(d*2.54)
>>> print (distancia)
383.53999999999996
>>> exit()
