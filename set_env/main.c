#include <stdio.h>
#include <stdlib.h>

#define NAME "AAA"

int main()
{
    int ret = -1;
    ret = setenv("KYKY", "1", 1);
    if (ret == -1)
    {
        printf("ERROR: setenv\n");
        return 1;
    }

    printf("OK\n");

    return 0;
}
