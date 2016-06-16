#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t sizemem)
{
    printf("hooked malloc\n");

    void *ptr = malloc(sizemem);
}

void my_free(void *ptr)
{
    printf("hooked free\n");

    free(ptr);
}
