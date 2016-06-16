#include <stdio.h>
#include "liba.h"

void foo(struct A *C)
{
    struct A B;
#if defined(TEST)
    B.a = 1;
#endif
    B.b = 2;
    B.c = 'A';

#if defined(TEST)
    printf("A: %d %d %c", B.a, B.b, B.c);
#else
    printf("A: %d %c", B.b, B.c);
#endif
    
    memcopy(&B, C, sizeof(struct A));
}
