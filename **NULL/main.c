#include <stdio.h>
#include <stdlib.h>

void foo(int **num)
{
    printf("%p  %p  %d\n",
           num?num:NULL,
           *num?*num:NULL,
           num?**num:0);
}

int main()
{
    int *a = NULL;

    foo(&a);

    a = malloc(sizeof(int));
    *a = 5;

    foo(&a);

    return 0;
}
