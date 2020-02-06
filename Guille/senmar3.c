#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
void trataSenhal (int);
main()
{
	pid_t idProceso;
	idProceso = fork();
    kill (getpid,SIGTERM)