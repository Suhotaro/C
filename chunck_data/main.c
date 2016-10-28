#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char *name;
    int age;
    char id;
} Human;

int main()
{
    size_t size = sizeof(Human);

    void *mem = (void*)calloc(1, size);
    if (!mem)
        return 1;

    Human *h = (Human*)mem;
    h->age = 25;

    printf("age: %d\n", h->age);

    return 0;
}
