#include <stdio.h>
#include <stdlib.h>

int global_var = 1;
static int static_global_var = 2;

void print_global_var(void)
{
    printf("    global_var:%d static_global_var:%d\n", global_var, static_global_var);
}

void change_global(int num, int num2)
{
    global_var = num;
    static_global_var = num2;
}
