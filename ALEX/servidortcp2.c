#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

#define PORTNUMBER 12543

int menu()
{
	 printf("0 SUMA,1 FACTORIAL\n");
     scanf("%d",&opcion);
	return (0); 
}
int suma()
{
	int suma;
	suma =0,
	
	
	
	
	
	
	
	int main()
{
	do
	{
		menu();
		switch (opcion)
		{
			case 0: suma();
					break;
			case 1: resta();
					break;
		}
	}
	while (opcion !=0);