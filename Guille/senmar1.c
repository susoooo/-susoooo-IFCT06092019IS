#include <signal.h>
#include <unistd.h>
void controlador (int);
main()
{
	 sleep(10);
     {
     kill (getpid,SIGTERM);
     }	
}

	 
