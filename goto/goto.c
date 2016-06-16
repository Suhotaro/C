#include <stdio.h>

#define DEBUG(format, args...) printf(format, ##args);

int foo()
{
    return 1;
}

int main()
{

    DEBUG("%s %d\n", "Hello", 5)

    DEBUG("%d", foo()++)


    void *arr[] = {&&a, &&b, &&c};
    goto *arr[1];

a:
    printf("a\n");
    return 0;

b:
    printf("b\n");
    return 0;

c:
    printf("c\n");
    return 0;
}
