#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int t = 0;

int main()
{

    int i = 0;

    for(; i < 100; i++)
    {
        t = (++t) % MAX;
        printf("  %d\n", t);
    }

    return 0;
}
