/*3.- Realizar un programa que cree un proceso hijo que realizara un ciclo de espera por señal, 
el proceso padre debe permanente enviar cada 5 segundo la señal SIGUSR1 al proceso hijo. 
El proceso hijo, debe escribir un mensaje por pantalla cada vez que reciba la señal. 
Cuando el proceso hijo haya recibido 3 veces consecutivas la señal SIGUSR1 provocará 
la muerte del padre y su propia terminación.*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

