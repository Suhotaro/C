#include <stdio.h>

void *calloc(size_t s, size_t s)
{
    printf("hook calloc\n");
    return NULL;
}

int main
{
    int *t = calloc(1, sizeof(int));

    return 0;

}
