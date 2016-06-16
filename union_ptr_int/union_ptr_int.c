#include <stdio.h>
#include <stdlib.h>

typedef union
{
    int *ptr;
    int num;
    char a;
} A;

void foo(int **p)
{
    A a;

    int *ptr = calloc(5, sizeof(int));
    int i = 0;
    for(i = 0; i < 5; i++)
        ptr[i] = i + 11;

    a.ptr = ptr;

    *p = a.ptr;   
}


int main()
{
    int *p = NULL;    
    int i = 0;

    foo(&p);

    for(i = 0; i < 5; i++)
        printf("num: %d\n", p[i]);

    free(p);

    return 0;
}
