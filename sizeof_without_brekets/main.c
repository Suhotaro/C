#include <stdio.h>
#include <string.h>

int main()
{
    int *b;
    int a = sizeof *b;

    printf("--> %d\n", a);

    return 0;
}
