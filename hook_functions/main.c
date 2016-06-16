#include <stdio.h>
#include <stdlib.h>

#include "hooks.h"

int main()
{
    int* a = malloc(sizeof(int));
    *a = 5;

    printf("a:%p  *a:%d\n", a, *a);

    free(a);

    return 0;
}
