#include <stdio.h>
#include <stdlib.h>

void change_ptr(int **p)
{
    int * tmp = calloc(1, sizeof(int));
    *tmp = 2;

    printf("2: %p %d\n", tmp, *tmp);
    
    *p = tmp;

    printf("3: %p %d\n", *p, **p);
}

void a(int *p)
{
    change_ptr(&p);    

    printf("4: %p %d\n", p, *p);
}


int main()
{
    int *ptr = calloc(1 , sizeof(int));
    *ptr = 1;

    printf("1: %p %d\n", ptr, *ptr);

    a(ptr);

    printf("5: %p %d\n", ptr, *ptr);


    return 0;
}
