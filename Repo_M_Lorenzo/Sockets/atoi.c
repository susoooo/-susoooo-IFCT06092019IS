#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <math.h>

int main()
{
	int numero;
	char *opciones;
	opciones=(char*)malloc(sizeof(char)*8);	
	opciones="GOODBYE";
	numero=atoi(opciones);
	printf("%d",numero);
}
