#include <stdio.h>

#define NUM_FOO 3

void a(int num)
{
    printf("--> %d\n", num);
}

void b(int num)
{
    printf("--> %d\n", num);
}

void c(int num)
{
    printf("--> %d\n", num);
}

int main()
{
    int i = 0;
    void (*f[NUM_FOO])(int num) =
    {   
        a,
        b,
        c,
    };


    for (i = 0; i < NUM_FOO; i++)
    {
        (*f)(i+1);
    }

    return 0;
}
