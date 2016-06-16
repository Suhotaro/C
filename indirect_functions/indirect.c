#include <stdio.h>
#include "indirect.h"

int num = 2;

void foo_1(void)
{
    printf("1\n");
}

void foo_2(void)
{
    printf("2\n");
}

void foo_3(void)
{
    printf("3\n");
}


__asm__ (".type foo, %gnu_indirect_function");
void *foo(void)
{
    switch(num)
    {
        case 1:
            return &foo_1;
            break;

        case 2:
            return &foo_2;
            break;

        case 3:
            return &foo_3;
            break;   
    }
}
