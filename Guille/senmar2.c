#include <signal.h>
#include <unistd.h>
void controlauno (int);
void controlados (int);
void controlatres (int);
main()
{
	signal (SIGUSR1, controlauno); 

    signal (SIGUSR2, controlados);
    
    signal (SIGTERM, controlatres);
    
	signal (SIGINT, SIG_IGN);
   
}

void controlauno (int)
   {
	prinft ("He recibido la señal SIGUSR1");
   }
void controlados (int)
    {
    printf ("He recibido la señal SIGUSR2");
void controlatres (int)
    {
    printf ("Fin de la ejecución")
    } 
}