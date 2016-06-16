#include <stdio.h>


struct A
{
#if defined(TEST)
    int a;
#endif
    int b;
    char c;
};

void foo(struct A *C);
