#include <stdio.h>

#include "../liba/liba.h"

int main()
{
    printf("Yoo\n");

    struct A C;
    C.a = 3;
    C.b = 4;
    C.c = 'b';

    foo(&C);

    printf("%d %d %c", C.a, C.b, C.c);

    return 0;
}
