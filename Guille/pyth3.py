Python 3.6.9 (default, Nov  7 2019, 10:44:02) 
[GCC 8.3.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> print ("introduce tu peso en kilos")
introduce tu peso en kilos
>>> int a=input()
  File "<stdin>", line 1
    int a=input()
        ^
SyntaxError: invalid syntax
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
