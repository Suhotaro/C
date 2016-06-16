#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    struct timeval *start = calloc(1, sizeof(struct timeval));
    struct timeval *current = calloc(1, sizeof(struct timeval));

    gettimeofday(start, NULL);

    while(current->tv_sec < start->tv_sec + 5)
    {
        printf("time=%ld\n", current->tv_sec);


        gettimeofday(current, NULL);
    }

    return 0;
}
