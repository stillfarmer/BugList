#include <stdio.h>
#include <signal.h>

void main(void)
{
    system("kill -10 hsc");
}


/* we use kill -10 to send SIGUSR1 to hsc, but in 302tv2, SIGUSR1 is not 10, but 16.

   so when we want to use kill to send signal, use kill -SIGUSR1 hsc.
*/
