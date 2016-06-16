#include <stdio.h>
#include <stdlib.h>

#include <signal.h>

void handler(int n)
{
    printf("ops!!!\n");
}

int main()
{
    struct sigaction act;

    act.sa_handler = handler;
    sigaction(SIGFPE, &act, NULL);

    int a = 5/0;

    return 0;
}
