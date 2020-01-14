#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/sysinfo.h>


int main()
{
    struct sysinfo s_info;

    sysinfo(&s_info);
    printf("Uptime = %ldseg\nCarga: 1 min %ld / 5 min %ld / 15 min %ld\n"
    "RAM: total %ld / libre %ld / compartida %ld\n"
    "Memoria en bufers = %ld\nSwap: total %ld / libre %ld\n"
    "Número de procesos = %ld\n",
    s_info.uptime, s_info.loads[0],
    s_info.loads[1], s_info.loads[2],
    s_info.totalram, s_info.freeram,
    s_info.sharedram, s_info.bufferram,
    s_info.totalswap, s_info.freeswap,
    s_info.procs);
    return(0);
}